#include "stm32f10x.h"
#include "gpio_led.h"
//初始化配置GPIO_LED
void GPIO_LED_config(void)
{
    
    GPIO_InitTypeDef gpio_initstruct = {0};
    RCC_APB2PeriphClockCmd(R_LED_GPIO_CLK_PORT,ENABLE);//开启时钟
    RCC_APB2PeriphClockCmd(G_LED_GPIO_CLK_PORT,ENABLE);//开启时钟
    RCC_APB2PeriphClockCmd(B_LED_GPIO_CLK_PORT,ENABLE);//开启时钟
    GPIO_SetBits(GPIOA, GPIO_Pin_1); //关闭LED
    GPIO_SetBits(GPIOA, GPIO_Pin_2); //关闭LED
    GPIO_SetBits(GPIOA, GPIO_Pin_3); //关闭LED
    
    gpio_initstruct.GPIO_Mode = GPIO_Mode_Out_PP;//设置GPIO工作方式为推挽输出
    gpio_initstruct.GPIO_Pin = GPIO_Pin_1;//设置GPIO引脚为PA1
    gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;//设置GPIO速度为50MHz
    GPIO_Init(R_LED_GPIO_PORT, &gpio_initstruct);//初始化GPIO

    gpio_initstruct.GPIO_Mode = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Pin = GPIO_Pin_2;
   
    
    gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(G_LED_GPIO_PORT, &gpio_initstruct);

    gpio_initstruct.GPIO_Mode = GPIO_Mode_Out_PP;
    gpio_initstruct.GPIO_Pin = GPIO_Pin_3;
    gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(B_LED_GPIO_PORT, &gpio_initstruct); //初始化GPIO
    }



