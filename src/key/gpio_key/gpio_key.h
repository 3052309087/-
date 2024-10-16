#ifndef __BSP_gpio_key_H
#define __BSP_gpio_key_H

#include "stm32f10x.h"

/* 开key */
// key1
#define WKUP_KEY1_GPIO_PORT    		GPIOA		                /* GPIO端口 */
#define WKUP_KEY1_GPIO_CLK_PORT 	RCC_APB2Periph_GPIOA			/* GPIO端口时钟 */
#define WKUP_KEY1_GPIO_PIN		    GPIO_Pin_0	       				/* 连接到GPIO */

//key2
#define WKUP_KEY2_GPIO_PORT    		GPIOC		                /* GPIO端口 */
#define WKUP_KEY2_GPIO_CLK_PORT 	RCC_APB2Periph_GPIOC			/* GPIO端口时钟 */
#define WKUP_KEY2_GPIO_PIN		    GPIO_Pin_13	       				/* 连接到GPIO */






/** 触发 板载按键条件 
  * 1 - on
  * 0 - off
  */
#define KEY_ON  1
#define KEY_OFF 0 



void GPIO_KEY_config(void);

uint32_t KEY_SCAN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);


#endif /* __BSP_GPIO_KEY_H  */
