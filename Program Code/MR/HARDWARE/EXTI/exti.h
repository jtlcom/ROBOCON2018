#ifndef _EXTI_H
#define _EXTI_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK STM32F429开发板
//外部中断驱动代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//创建日期:2015/1/5
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2014-2024
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 	

extern u8  PE2flag;   //0:表示不执行 1：表示要执行
extern u8  PE4flag;   //0:表示不执行 1：表示要执行
extern u8  PE5flag;   //0:表示不执行 1：表示要执行
extern u8  PG3flag;   //0:表示不执行 1：表示要执行
extern u8  PG13flag;   //0:表示不执行 1：表示要执行


void EXTI_Init(void);
#endif
