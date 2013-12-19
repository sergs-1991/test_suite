/**
  ******************************************************************************
  * @file    ADC/3ADCs_DMA/stm32f10x_it.c
  * @author  MCD Application Team
  * @version V3.1.0 
  * @date    06/19/2009
  * @brief   Main Interrupt Service Routines.
  *          This file provides template for all exceptions handler and peripherals
  *          interrupt service routine.
  ******************************************************************************
  * @copy
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, STMICROELECTRONICS SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2009 STMicroelectronics</center></h2>
  */

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x_it.h"

//#include "stm32f10x.h"

/** @addtogroup STM32F10x_StdPeriph_Examples
  * @{
  */

/** @addtogroup ADC_3ADCs_DMA
  * @{
  */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*            Cortex-M3 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
  * @brief  This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
}

/**
  * @brief  This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
    ;
  }
}

/**
  * @brief  This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/**
  * @brief  This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{
}

/**
  * @brief  This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
}

/**
  * @brief  This function handles PendSV_Handler exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{
}

/**
  * @brief  This function handles SysTick Handler.
  * @param  None
  * @retval None
  */
void SysTick_Handler(void)
{
}

/******************************************************************************/
/*                 STM32F10x Peripherals Interrupt Handlers                   */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_stm32f10x_xx.s).                                            */
/******************************************************************************/

/**
  * @brief  This function handles PPP interrupt request.
  * @param  None
  * @retval None
  */
/*void PPP_IRQHandler(void)
{
}*/

/**
  * @}
  */

/**
  * @}
  */

/*
//���������� ���������� �� DMA1_Channel1 
//==============================================================================
void DMA1_Channel1_IRQHandler( void )     
{ 
  portBASE_TYPE rez = pdFALSE;  // ����������� !!!
  unsigned short* temp = NULL;  // ����������  
  
  //if( DMA_GetITStatus( DMA1_IT_HT1 ) )
  if ( DMA1->ISR &  0x04 )    //( 1 << 2 )
  {
    temp = p_beg_adc_buff;
  }
  //else if( DMA_GetITStatus( DMA1_IT_TC1 ) )
  else if( DMA1->ISR & 0x02)  //( 1 << 1 )
  {
    temp = p_beg_adc_buff + ADC_NUM_DIV_2; 
  }
  
  //�������� � "������" �������
  xQueueSendToFrontFromISR( queu_to_calc, (void *)&temp, &rez );
  
  //���� � ���������� ������� ��������� ���� �������������� ������, ����� ������������, ��� ��,
  //������� �������� ������ ����������, �� ����������� �������� �� ��������� ��������� ������ ������� 
  if( rez == pdTRUE )
  {
    portEND_SWITCHING_ISR( rez ); 
  }   
 
  //���������� ���� ���������� global interrupt 1 ������ DMA 1
  //DMA_ClearITPendingBit( DMA1_IT_GL1 );
  DMA1->IFCR |= 1; //DMA1_IT_GL1;
}

//���������� ���������� �� ������� TIM5. (10 ms)     ___ for FatFS purpose ___
//==============================================================================
void TIM5_IRQHandler(void)
{  
  TIM_ClearITPendingBit(TIM5, TIM_IT_Update);	//__Clear TIM5 update interrupt__ 
}
*/


//*******************************************************************************



/******************* (C) COPYRIGHT 2009 STMicroelectronics *****END OF FILE****/
