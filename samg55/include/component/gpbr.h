/**
 * \file
 *
 * \brief Component description for GPBR
 *
 * Copyright (c) 2017 Atmel Corporation, a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2017-07-05T18:00:00Z */
#ifndef _SAMG55_GPBR_COMPONENT_H_
#define _SAMG55_GPBR_COMPONENT_H_
#define _SAMG55_GPBR_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMG_SAMG55 General Purpose Backup Registers
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR GPBR */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define GPBR_6378                       /**< (GPBR) Module ID */
#define REV_GPBR G                      /**< (GPBR) Module revision */

/* -------- GPBR_SYS_GPBR : (GPBR Offset: 0x00) (R/W 32) General Purpose Backup Register 0 -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t GPBR_VALUE:32;             /**< bit:  0..31  Value of GPBR x                          */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} GPBR_SYS_GPBR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define GPBR_SYS_GPBR_OFFSET                (0x00)                                        /**<  (GPBR_SYS_GPBR) General Purpose Backup Register 0  Offset */

#define GPBR_SYS_GPBR_GPBR_VALUE_Pos        0                                              /**< (GPBR_SYS_GPBR) Value of GPBR x Position */
#define GPBR_SYS_GPBR_GPBR_VALUE_Msk        (_U_(0xFFFFFFFF) << GPBR_SYS_GPBR_GPBR_VALUE_Pos)  /**< (GPBR_SYS_GPBR) Value of GPBR x Mask */
#define GPBR_SYS_GPBR_GPBR_VALUE(value)     (GPBR_SYS_GPBR_GPBR_VALUE_Msk & ((value) << GPBR_SYS_GPBR_GPBR_VALUE_Pos))
#define GPBR_SYS_GPBR_MASK                  _U_(0xFFFFFFFF)                                /**< \deprecated (GPBR_SYS_GPBR) Register MASK  (Use GPBR_SYS_GPBR_Msk instead)  */
#define GPBR_SYS_GPBR_Msk                   _U_(0xFFFFFFFF)                                /**< (GPBR_SYS_GPBR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief GPBR hardware registers */
typedef struct {
  __IO uint32_t SYS_GPBR[8];    /**< (GPBR Offset: 0x00) General Purpose Backup Register 0 */
} Gpbr;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief GPBR hardware registers */
typedef struct {
  __IO GPBR_SYS_GPBR_Type             SYS_GPBR[8];    /**< Offset: 0x00 (R/W  32) General Purpose Backup Register 0 */
} Gpbr;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of General Purpose Backup Registers */

#endif /* _SAMG55_GPBR_COMPONENT_H_ */
