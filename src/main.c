#include "stm32f10x.h"
#include "main.h"
#include "bsp_delay.h"
#include "gpio_led.h"

// #define LED_PERIPH RCC_APB2Periph_GPIOA
// #define LED_PORT GPIOA
// #define LED_PIN GPIO_Pin_1

/**
  * @brief  粗略阻塞延时函数接口
  * @param  ncount :传入计数值
  * @note   软件延时函数，使用不同的系统时钟，延时不一样（系统时钟72m时钟下，单位：1/72000000 s），由于函数调用等会损耗时间，只能粗略使用
  * @retval 无
  */

/**
  * @brief  粗略阻塞延时函数接口  单位：S
  * @param  time :传入计数值
  * @note   软件延时函数，使用不同的系统时钟，延时不一样（系统时钟72m时钟下，单位：1/72000000 s），由于函数调用等会损耗时间，只能粗略使用
  * @retval 无
  */


int main(void)
 {   //GPIO_InitTypeDef gpio_initstruct = {0};
//     RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);//开启时钟
//     GPIO_SetBits(GPIOA, GPIO_Pin_1); //关闭LED
//     GPIO_SetBits(GPIOA, GPIO_Pin_2); //关闭LED
//     GPIO_SetBits(GPIOA, GPIO_Pin_3); //关闭LED
    
//     gpio_initstruct.GPIO_Mode = GPIO_Mode_Out_PP;//设置GPIO工作方式为推挽输出
//     gpio_initstruct.GPIO_Pin = GPIO_Pin_1;//设置GPIO引脚为PA1
//     gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;//设置GPIO速度为50MHz
//      GPIO_Init(GPIOA, &gpio_initstruct);//初始化GPIO

//     gpio_initstruct.GPIO_Mode = GPIO_Mode_Out_PP;
//     gpio_initstruct.GPIO_Pin = GPIO_Pin_2;
   
    
//     gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;
//      GPIO_Init(GPIOA, &gpio_initstruct);

//     gpio_initstruct.GPIO_Mode = GPIO_Mode_Out_PP;
//     gpio_initstruct.GPIO_Pin = GPIO_Pin_3;
//     gpio_initstruct.GPIO_Speed = GPIO_Speed_50MHz;
//     GPIO_Init(GPIOA, &gpio_initstruct); //初始化GPIO
    
   
   
    GPIO_LED_config();//初始化GPIOLED
   
    while (1)
    {
    //R_LED(R_G_B_LED_ON); //点亮LED1
    R_LED_ON
   Rough_Delay_ms(2000);
  GPIO_SetBits(GPIOA, GPIO_Pin_1); //关闭LED
  G_LED(R_G_B_LED_ON); //点亮LED2
  Rough_Delay_ms(2000);
  GPIO_SetBits(GPIOA, GPIO_Pin_2); //关闭LED
  B_LED(R_G_B_LED_ON); //点亮LED3
  Rough_Delay_ms(2000);
    GPIO_SetBits(GPIOA, GPIO_Pin_3); //关闭LED
    Rough_Delay_ms(2000);
    
   
 
    }
      
}
