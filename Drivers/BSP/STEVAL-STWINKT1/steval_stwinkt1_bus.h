/**
  ******************************************************************************
  * @file           : steval_stwinkt1_bus.h
  * @brief          : header file for the BSP BUS IO driver
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STEVAL_STWINKT1_BUS_H
#define STEVAL_STWINKT1_BUS_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "steval_stwinkt1_conf.h"
#include "steval_stwinkt1_errno.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STEVAL_STWINKT1
  * @{
  */

/** @defgroup STEVAL_STWINKT1_BUS STEVAL_STWINKT1 BUS
  * @{
  */

/** @defgroup STEVAL_STWINKT1_BUS_Exported_Constants STEVAL_STWINKT1 BUS Exported Constants
  * @{
  */

#define BUS_I2C2_INSTANCE I2C2
#define BUS_I2C2_SMBA_GPIO_CLK_DISABLE() __HAL_RCC_GPIOF_CLK_DISABLE()
#define BUS_I2C2_SMBA_GPIO_CLK_ENABLE() __HAL_RCC_GPIOF_CLK_ENABLE()
#define BUS_I2C2_SMBA_GPIO_AF GPIO_AF4_I2C2
#define BUS_I2C2_SMBA_GPIO_PIN GPIO_PIN_2
#define BUS_I2C2_SMBA_GPIO_PORT GPIOF
#define BUS_I2C2_SCL_GPIO_AF GPIO_AF4_I2C2
#define BUS_I2C2_SCL_GPIO_PORT GPIOF
#define BUS_I2C2_SCL_GPIO_CLK_DISABLE() __HAL_RCC_GPIOF_CLK_DISABLE()
#define BUS_I2C2_SCL_GPIO_PIN GPIO_PIN_1
#define BUS_I2C2_SCL_GPIO_CLK_ENABLE() __HAL_RCC_GPIOF_CLK_ENABLE()
#define BUS_I2C2_SDA_GPIO_CLK_DISABLE() __HAL_RCC_GPIOF_CLK_DISABLE()
#define BUS_I2C2_SDA_GPIO_CLK_ENABLE() __HAL_RCC_GPIOF_CLK_ENABLE()
#define BUS_I2C2_SDA_GPIO_PORT GPIOF
#define BUS_I2C2_SDA_GPIO_PIN GPIO_PIN_0
#define BUS_I2C2_SDA_GPIO_AF GPIO_AF4_I2C2

#ifndef BUS_I2C2_POLL_TIMEOUT
   #define BUS_I2C2_POLL_TIMEOUT                0x1000U
#endif
/* I2C2 Frequeny in Hz  */
#ifndef BUS_I2C2_FREQUENCY
   #define BUS_I2C2_FREQUENCY  1000000U /* Frequency of I2Cn = 100 KHz*/
#endif

/**
  * @}
  */

/** @defgroup STEVAL_STWINKT1_BUS_Private_Types STEVAL_STWINKT1 BUS Private types
  * @{
  */
#if (USE_HAL_I2C_REGISTER_CALLBACKS == 1U)
typedef struct
{
  pI2C_CallbackTypeDef  pMspInitCb;
  pI2C_CallbackTypeDef  pMspDeInitCb;
}BSP_I2C_Cb_t;
#endif /* (USE_HAL_I2C_REGISTER_CALLBACKS == 1U) */
/**
  * @}
  */

/** @defgroup STEVAL_STWINKT1_LOW_LEVEL_Exported_Variables LOW LEVEL Exported Constants
  * @{
  */

extern I2C_HandleTypeDef hi2c2;

/**
  * @}
  */

/** @addtogroup STEVAL_STWINKT1_BUS_Exported_Functions
  * @{
  */

/* BUS IO driver over I2C Peripheral */
HAL_StatusTypeDef MX_I2C2_Init(I2C_HandleTypeDef* hi2c);
int32_t BSP_I2C2_Init(void);
int32_t BSP_I2C2_DeInit(void);
int32_t BSP_I2C2_IsReady(uint16_t DevAddr, uint32_t Trials);
int32_t BSP_I2C2_WriteReg(uint16_t Addr, uint16_t Reg, uint8_t *pData, uint16_t Length);
int32_t BSP_I2C2_ReadReg(uint16_t Addr, uint16_t Reg, uint8_t *pData, uint16_t Length);
int32_t BSP_I2C2_WriteReg16(uint16_t Addr, uint16_t Reg, uint8_t *pData, uint16_t Length);
int32_t BSP_I2C2_ReadReg16(uint16_t Addr, uint16_t Reg, uint8_t *pData, uint16_t Length);
int32_t BSP_I2C2_Send(uint16_t DevAddr, uint8_t *pData, uint16_t Length);
int32_t BSP_I2C2_Recv(uint16_t DevAddr, uint8_t *pData, uint16_t Length);
int32_t BSP_I2C2_SendRecv(uint16_t DevAddr, uint8_t *pTxdata, uint8_t *pRxdata, uint16_t Length);
#if (USE_HAL_I2C_REGISTER_CALLBACKS == 1U)
int32_t BSP_I2C2_RegisterDefaultMspCallbacks (void);
int32_t BSP_I2C2_RegisterMspCallbacks (BSP_I2C_Cb_t *Callbacks);
#endif /* (USE_HAL_I2C_REGISTER_CALLBACKS == 1U) */

int32_t BSP_GetTick(void);

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */
#ifdef __cplusplus
}
#endif

#endif /* STEVAL_STWINKT1_BUS_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
