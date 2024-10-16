#include "stm32f10x.h"
#include "gpio_key.h"
//初始化配置GPIO_key
void GPIO_KEY_config(void)
{
    
    GPIO_InitTypeDef gpio_initstruct = {0};
    RCC_APB2PeriphClockCmd(WKUP_KEY1_GPIO_CLK_PORT,ENABLE);//开启时钟
    RCC_APB2PeriphClockCmd(WKUP_KEY2_GPIO_CLK_PORT,ENABLE);//开启时钟

   
    
    gpio_initstruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;//设置GPIO工作方式为浮空输入
    gpio_initstruct.GPIO_Pin = WKUP_KEY1_GPIO_PIN;//设置GPIO引脚
    gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;//设置GPIO速度为50MHz
    GPIO_Init(WKUP_KEY1_GPIO_PORT, &gpio_initstruct);//初始化GPIO

    gpio_initstruct.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    gpio_initstruct.GPIO_Pin = WKUP_KEY2_GPIO_PIN;
    gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(WKUP_KEY2_GPIO_PORT, &gpio_initstruct);

 
}

  /**
  * @brief  检测按键是否按下
  * @param  GPIOx：x 可以是 A，B，C，D或者 E  
  * @param  GPIO_Pin：待读取的端口位  
  * @note   无
  * @retval KEY_OFF(没按下按键)、KEY_ON（按下按键）
  */
uint32_t KEY_SCAN(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin)
{
    if(GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == KEY_ON)
    {
        while(GPIO_ReadInputDataBit(GPIOx, GPIO_Pin) == KEY_ON);
        return KEY_ON;  
    }
    return KEY_OFF;
}




