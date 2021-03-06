/*******************************************************************************
  Copyright (C), 2011, 712.Co.,Ltd.
  FileName: RxTxCtrl.h
  Author: lq       Version : V1.00        Date: 2014.05.06
  Description:     收发控制
  Version:         V1.00
  Function List:   // 主要函数及其功能
  			
  History:         // 历史修改记录
      <author>  <time>   <version >   <desc>
*******************************************************************************/
#ifndef _RXTXCTRL_H
#define _RXTXCTRL_H

/* Include ------------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/
#define RXTX_CTRL_TYPE_TX       0
#define RXTX_CTRL_TYPE_RX       1

/* Private typedef -----------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/
/* Private  function  ---------------------------------------------------------*/
/* Public define ------------------------------------------------------------*/
/* Public  variables ---------------------------------------------------------*/

/* Public  function  ---------------------------------------------------------*/
extern void RxTxCtrl(U8 CtrlType, U32 Freq1, U32 Freq2);
#endif
