#include <zephyr/device.h>
#include <zephyr/toolchain.h>

/* 1 : /soc/peripheral@50000000/clock@5000:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_clock_5000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 2 : /soc/peripheral@50000000/gpio@842500:
 * Supported:
 *    - /regulator-3v3-ctrl
 *    - /soc/peripheral@50000000/spi@c000/spi-dev-adxl362@0
 *    - /npm1100_force_pwm_mode
 *    - /soc/peripheral@50000000/spi@c000
 *    - /sensor-pwr-ctrl
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_gpio_842500[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 14, 18, 15, 12, 13, DEVICE_HANDLE_ENDS };

/* 3 : /soc/peripheral@50000000/gpio@842800:
 * Supported:
 *    - /soc/peripheral@50000000/spi@c000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_gpio_842800[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 12, DEVICE_HANDLE_ENDS };

/* 4 : /soc/peripheral@50000000/usbd@36000/cdc_acm_uart0:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_usbd_36000_S_cdc_acm_uart0[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 5 : /soc/peripheral@50000000/uart@8000:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_uart_8000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 6 : /ipc/ipc0:
 * Direct Dependencies:
 *    - /soc/peripheral@50000000/mbox@2a000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_ipc_S_ipc0[] = { 11, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 7 : /soc/peripheral@50000000/i2c@9000:
 * Supported:
 *    - /soc/peripheral@50000000/i2c@9000/bmm150@10
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_i2c_9000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 19, DEVICE_HANDLE_ENDS };

/* 8 : /soc/peripheral@50000000/pwm@22000:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_pwm_22000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 9 : /soc/peripheral@50000000/pwm@21000:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_pwm_21000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 10 : /soc/peripheral@50000000/flash-controller@39000:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_flash_controller_39000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 11 : /soc/peripheral@50000000/mbox@2a000:
 * Supported:
 *    - /ipc/ipc0
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_mbox_2a000[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 6, DEVICE_HANDLE_ENDS };

/* 12 : /soc/peripheral@50000000/spi@c000:
 * Direct Dependencies:
 *    - /soc/peripheral@50000000/gpio@842500
 *    - /soc/peripheral@50000000/gpio@842800
 * Supported:
 *    - /soc/peripheral@50000000/spi@c000/spi-dev-adxl362@0
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_spi_c000[] = { 2, 3, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, 18, DEVICE_HANDLE_ENDS };

/* 13 : /sensor-pwr-ctrl:
 * Direct Dependencies:
 *    - /soc/peripheral@50000000/gpio@842500
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_sensor_pwr_ctrl[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 14 : /regulator-3v3-ctrl:
 * Direct Dependencies:
 *    - /soc/peripheral@50000000/gpio@842500
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_regulator_3v3_ctrl[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 15 : /npm1100_force_pwm_mode:
 * Direct Dependencies:
 *    - /soc/peripheral@50000000/gpio@842500
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_npm1100_force_pwm_mode[] = { 2, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 16 : /soc/peripheral@50000000/qspi@2b000/mx25r6435f@0:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_qspi_2b000_S_mx25r6435f_0[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 17 : /pwmleds:
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_pwmleds[] = { DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 18 : /soc/peripheral@50000000/spi@c000/spi-dev-adxl362@0:
 * Direct Dependencies:
 *    - /soc/peripheral@50000000/gpio@842500
 *    - /soc/peripheral@50000000/spi@c000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_spi_c000_S_spi_dev_adxl362_0[] = { 2, 12, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };

/* 19 : /soc/peripheral@50000000/i2c@9000/bmm150@10:
 * Direct Dependencies:
 *    - /soc/peripheral@50000000/i2c@9000
 */
const device_handle_t __aligned(2) __attribute__((__section__(".__device_handles_pass2")))
__devicehdl_DT_N_S_soc_S_peripheral_50000000_S_i2c_9000_S_bmm150_10[] = { 7, DEVICE_HANDLE_SEP, DEVICE_HANDLE_SEP, DEVICE_HANDLE_ENDS };
