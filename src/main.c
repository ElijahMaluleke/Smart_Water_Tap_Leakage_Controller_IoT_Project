/*
 * Copyright (c) 2021 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */
#include <app_event_manager.h>

#define MODULE main
#include <caf/events/module_state_event.h>

#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(MODULE);

/* */
#include <zephyr/zephyr.h>
#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/gpio.h>

/********************************************************************************
 *
 ********************************************************************************/
/* 1000 msec = 1 sec */
#define WATER_VALVE_PIN 4

/* 1000 msec = 1 sec */
#define MOTION_DETECTOR_PIN 5

/* 1000 msec = 1 sec */
#define SLEEP_TIME_MS   1000

#define SLEEP_TIME_10M 10 * 60 * 1000

/* Option 1: by node label */
#define MY_GPIO0 DT_NODELABEL(gpio0)

// const struct device *gpio_dev;
const struct device *gpio_dev = DEVICE_DT_GET(MY_GPIO0);
//
struct k_timer my_timer;
//extern void my_expiry_function(struct k_timer *timer_id);

/********************************************************************************
 *
 ********************************************************************************/
/* STEP 4 - Define the callback function */
void motion_detected(const struct device *dev, struct gpio_callback *cb, uint32_t pins)
{
	gpio_pin_set(gpio_dev, WATER_VALVE_PIN, true);
	// gpio_pin_toggle(gpio_dev, WATER_VALVE_PIN);
	/* start periodic timer that expires once every second */
	k_timer_start(&my_timer, K_SECONDS(5), K_NO_WAIT);
}

/* STEP 5 - Define a variable of type static struct gpio_callback */
static struct gpio_callback motion_cb_data;

void my_expiry_function(struct k_timer *timer_id) {
	gpio_pin_set(gpio_dev, WATER_VALVE_PIN, false);
}

/********************************************************************************
 *
 ********************************************************************************/
void main(void) {
	int ret;

	if (!device_is_ready(gpio_dev)) { /* Not ready, do not use */
		return;
	}

	ret = gpio_pin_configure(gpio_dev, WATER_VALVE_PIN, GPIO_OUTPUT_INACTIVE);
	if (ret < 0) {
		return;
	}

	ret = gpio_pin_configure(gpio_dev, MOTION_DETECTOR_PIN, GPIO_INPUT | GPIO_PULL_DOWN);
	if (ret < 0) {
		return;
	}

	/* STEP 3 - Configure the interrupt on the button's pin */
	ret = gpio_pin_interrupt_configure(gpio_dev, MOTION_DETECTOR_PIN, GPIO_INT_EDGE_TO_ACTIVE);
	if (ret < 0) {
		return;
	}

	/* STEP 6 - Initialize the static struct gpio_callback variable */
	gpio_init_callback(&motion_cb_data, motion_detected, BIT(5));

	/* STEP 7 - Add the callback function by calling gpio_add_callback() */
	gpio_add_callback(gpio_dev, &motion_cb_data);

	//
	k_timer_init(&my_timer, my_expiry_function, NULL);

	//
	if (app_event_manager_init())
	{
		LOG_ERR("Application Event Manager initialization failed");
	}
	else
	{
		module_set_state(MODULE_STATE_READY);
	}
}
