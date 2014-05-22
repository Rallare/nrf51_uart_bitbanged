/* Copyright (c) 2009 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 * @defgroup uart_example_main main.c
 * @{
 * @ingroup uart_example
 * @brief UART Example Application main file.
 *
 * This file contains the source code for a sample application using UART.
 *
 * @image html example_board_setup_a.jpg "Use board setup A for this example."
 */
 
#include "sw_simple_uart.h"
#include <stdbool.h>
#include <stdint.h>
#include "nrf.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "boards.h"
#include "stdio.h"

#define STR(x)   #x
#define SHOW_DEFINE(x) printf("%s=%s\n\r", #x, STR(x))

#define TEST "ABCD"

#define MY_TXD_PIN 0

int fputc(int ch, FILE * p_file) 
{
    while(simple_uart_put(ch) == false);
    //simple_uart_put((uint8_t)ch);
    return ch;
}

/**
 * @brief Function for main application entry.
 */
int main(void)
{
    simple_sw_uart_config(MY_TXD_PIN, UART_BAUD_115200);
    SHOW_DEFINE(TEST);    
  
    while(true)
    {
        simple_uart_putstring("Hi, I'm a bit banged UART!\n\r");
        nrf_delay_us(100*1000);
    }
}
/** @} */
