/*
 * Copyright (c) 2017 Linaro, Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>
#include <zephyr/kernel.h>
#include <zephyr/sys/printk.h>
#include <zephyr/drivers/gpio.h>
#define SLEEP_TIME_MS   1000

#define LED3_NODE DT_ALIAS(led3)

static const struct gpio_dt_spec led = GPIO_DT_SPEC_GET(LED3_NODE, gpios);

//int boot_write_img_confirmed();
void main(void)
{
	//printk("Hello World from %s on %s!\n",
	//       MCUBOOT_HELLO_WORLD_FROM, CONFIG_BOARD);

	int ret;
	bool led_state = true;

	if (!gpio_is_ready_dt(&led)) {
		return 0;
	}

	ret = gpio_pin_configure_dt(&led, GPIO_OUTPUT_ACTIVE);
	if (ret < 0) {
		return 0;
	}
	//int a=BOOT_SWAP_TYPE_TEST;
	//boot_write_img_confirmed()
	while (1) {
		ret = gpio_pin_toggle_dt(&led);
		if (ret < 0) {
			return 0;
		}

		led_state = !led_state;
		//sprintf("LED state: %s\n", led_state ? "ON" : "OFF");
		//sprintf("The value of a is %d",a);
		k_msleep(SLEEP_TIME_MS);
	}
	return 0;
}
