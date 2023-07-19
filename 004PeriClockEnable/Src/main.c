/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>

#define ADC_BASE_ADDR 			0x40012000UL

#define ADC_CR1_REG_OFFSET 		0x04UL

#define ADC_CR1_REG_ADDR		(ADC_BASE_ADDR + ADC_CR1_REG_OFFSET)

#define RCC_BASE_ADDR			0x40023800UL

#define RCC_APB2_ENR_OFFSET     0x44UL

#define RCC_APB2_ENR_ADDR		(RCC_BASE_ADDR + RCC_APB2_ENR_OFFSET)

int main(void)
{
	uint32_t* pAdcCr1Reg = (uint32_t*)ADC_CR1_REG_ADDR;

	uint32_t* pRccApb2Reg = (uint32_t*)RCC_APB2_ENR_ADDR;

	*pRccApb2Reg |= (1 << 8);

	*pAdcCr1Reg |= (1 << 8);
    /* Loop forever */
	for(;;);
}
