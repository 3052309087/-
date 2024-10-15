/**
  * @brief  粗略阻塞延时函数接口
  * @param  ncount :传入计数值
  * @note   软件延时函数，使用不同的系统时钟，延时不一样（系统时钟72m时钟下，单位：1/72000000 s），由于函数调用等会损耗时间，只能粗略使用
  * @retval 无
  */

#include "bsp_delay.h"
void Rough_Delay(__IO uint32_t ncount)
{
  __NOP();
  for (uint32_t i = 0; i < ncount; i++)
  {
    __NOP();
  }
  
}

void Rough_Delay_us(__IO uint32_t ncount)
{
  __NOP();
  for (uint32_t i = 0; i < ncount; i++)
  {
    __NOP();
  }
  
}

void Rough_Delay_ms(__IO uint32_t ncount)
{
 Rough_Delay_us(0x3e8*8*ncount);
  
}

void Rough_Delay_s(__IO uint32_t ncount)
{
 Rough_Delay_ms(0x3e8*ncount);
  
}