#include "stm32f10x.h"
#include "main.h"
#include "bsp_delay.h"
#include "gpio_key.h"
#include "gpio_led.h"




int main(void)
 {   
    
   
   
GPIO_LED_config();//初始化GPIOLED
GPIO_KEY_config();//初始化GPIOKEY
    while (1)
    {

      
        if (KEY_SCAN(GPIOA, GPIO_Pin_0) == KEY_ON)
        {
         R_LED_TOGGLE;   
        }
        
         if (KEY_SCAN(WKUP_KEY2_GPIO_PORT, WKUP_KEY2_GPIO_PIN) == KEY_ON)
        {
         G_LED_TOGGLE;   
        }
    }
      
}
