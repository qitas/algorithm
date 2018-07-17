#ifndef __SPI2_H
#define __SPI2_H
#include "sys.h"
				    
// SPI�����ٶ����� 
#define SPI2_SPEED_2   		0
#define SPI2_SPEED_4   		1
#define SPI2_SPEED_8   		2
#define SPI2_SPEED_16  		3
#define SPI2_SPEED_32 		4
#define SPI2_SPEED_64 		5
#define SPI2_SPEED_128 		6
#define SPI2_SPEED_256 		7
						  	    													  
void SPI2_Init(void);			 //��ʼ��SPI2��
void SPI2_SetSpeed(u8 SpeedSet); //����SPI2�ٶ�   
u8 SPI2_ReadWriteByte(u8 TxData);//SPI2���߶�дһ���ֽ�
		 
#endif
