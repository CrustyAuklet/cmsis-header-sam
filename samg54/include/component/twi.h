/**
 * \file
 *
 * \brief Component description for TWI
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
#ifndef _SAMG54_TWI_COMPONENT_H_
#define _SAMG54_TWI_COMPONENT_H_
#define _SAMG54_TWI_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMG_SAMG54 Two-wire Interface
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR TWI */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define TWI_6212                       /**< (TWI) Module ID */
#define REV_TWI Z                      /**< (TWI) Module revision */

/* -------- TWI_CR : (TWI Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t START:1;                   /**< bit:      0  Send a START Condition                   */
    uint32_t STOP:1;                    /**< bit:      1  Send a STOP Condition                    */
    uint32_t MSEN:1;                    /**< bit:      2  TWI Master Mode Enabled                  */
    uint32_t MSDIS:1;                   /**< bit:      3  TWI Master Mode Disabled                 */
    uint32_t SVEN:1;                    /**< bit:      4  TWI Slave Mode Enabled                   */
    uint32_t SVDIS:1;                   /**< bit:      5  TWI Slave Mode Disabled                  */
    uint32_t QUICK:1;                   /**< bit:      6  SMBus Quick Command                      */
    uint32_t SWRST:1;                   /**< bit:      7  Software Reset                           */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_CR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_CR_OFFSET                       (0x00)                                        /**<  (TWI_CR) Control Register  Offset */

#define TWI_CR_START_Pos                    0                                              /**< (TWI_CR) Send a START Condition Position */
#define TWI_CR_START_Msk                    (_U_(0x1) << TWI_CR_START_Pos)                 /**< (TWI_CR) Send a START Condition Mask */
#define TWI_CR_START                        TWI_CR_START_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_CR_START_Msk instead */
#define TWI_CR_STOP_Pos                     1                                              /**< (TWI_CR) Send a STOP Condition Position */
#define TWI_CR_STOP_Msk                     (_U_(0x1) << TWI_CR_STOP_Pos)                  /**< (TWI_CR) Send a STOP Condition Mask */
#define TWI_CR_STOP                         TWI_CR_STOP_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_CR_STOP_Msk instead */
#define TWI_CR_MSEN_Pos                     2                                              /**< (TWI_CR) TWI Master Mode Enabled Position */
#define TWI_CR_MSEN_Msk                     (_U_(0x1) << TWI_CR_MSEN_Pos)                  /**< (TWI_CR) TWI Master Mode Enabled Mask */
#define TWI_CR_MSEN                         TWI_CR_MSEN_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_CR_MSEN_Msk instead */
#define TWI_CR_MSDIS_Pos                    3                                              /**< (TWI_CR) TWI Master Mode Disabled Position */
#define TWI_CR_MSDIS_Msk                    (_U_(0x1) << TWI_CR_MSDIS_Pos)                 /**< (TWI_CR) TWI Master Mode Disabled Mask */
#define TWI_CR_MSDIS                        TWI_CR_MSDIS_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_CR_MSDIS_Msk instead */
#define TWI_CR_SVEN_Pos                     4                                              /**< (TWI_CR) TWI Slave Mode Enabled Position */
#define TWI_CR_SVEN_Msk                     (_U_(0x1) << TWI_CR_SVEN_Pos)                  /**< (TWI_CR) TWI Slave Mode Enabled Mask */
#define TWI_CR_SVEN                         TWI_CR_SVEN_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_CR_SVEN_Msk instead */
#define TWI_CR_SVDIS_Pos                    5                                              /**< (TWI_CR) TWI Slave Mode Disabled Position */
#define TWI_CR_SVDIS_Msk                    (_U_(0x1) << TWI_CR_SVDIS_Pos)                 /**< (TWI_CR) TWI Slave Mode Disabled Mask */
#define TWI_CR_SVDIS                        TWI_CR_SVDIS_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_CR_SVDIS_Msk instead */
#define TWI_CR_QUICK_Pos                    6                                              /**< (TWI_CR) SMBus Quick Command Position */
#define TWI_CR_QUICK_Msk                    (_U_(0x1) << TWI_CR_QUICK_Pos)                 /**< (TWI_CR) SMBus Quick Command Mask */
#define TWI_CR_QUICK                        TWI_CR_QUICK_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_CR_QUICK_Msk instead */
#define TWI_CR_SWRST_Pos                    7                                              /**< (TWI_CR) Software Reset Position */
#define TWI_CR_SWRST_Msk                    (_U_(0x1) << TWI_CR_SWRST_Pos)                 /**< (TWI_CR) Software Reset Mask */
#define TWI_CR_SWRST                        TWI_CR_SWRST_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_CR_SWRST_Msk instead */
#define TWI_CR_MASK                         _U_(0xFF)                                      /**< \deprecated (TWI_CR) Register MASK  (Use TWI_CR_Msk instead)  */
#define TWI_CR_Msk                          _U_(0xFF)                                      /**< (TWI_CR) Register Mask  */


/* -------- TWI_MMR : (TWI Offset: 0x04) (R/W 32) Master Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :8;                        /**< bit:   0..7  Reserved */
    uint32_t IADRSZ:2;                  /**< bit:   8..9  Internal Device Address Size             */
    uint32_t :2;                        /**< bit: 10..11  Reserved */
    uint32_t MREAD:1;                   /**< bit:     12  Master Read Direction                    */
    uint32_t :3;                        /**< bit: 13..15  Reserved */
    uint32_t DADR:7;                    /**< bit: 16..22  Device Address                           */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_MMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_MMR_OFFSET                      (0x04)                                        /**<  (TWI_MMR) Master Mode Register  Offset */

#define TWI_MMR_IADRSZ_Pos                  8                                              /**< (TWI_MMR) Internal Device Address Size Position */
#define TWI_MMR_IADRSZ_Msk                  (_U_(0x3) << TWI_MMR_IADRSZ_Pos)               /**< (TWI_MMR) Internal Device Address Size Mask */
#define TWI_MMR_IADRSZ(value)               (TWI_MMR_IADRSZ_Msk & ((value) << TWI_MMR_IADRSZ_Pos))
#define   TWI_MMR_IADRSZ_NONE_Val           _U_(0x0)                                       /**< (TWI_MMR) No internal device address  */
#define   TWI_MMR_IADRSZ_1_BYTE_Val         _U_(0x1)                                       /**< (TWI_MMR) One-byte internal device address  */
#define   TWI_MMR_IADRSZ_2_BYTE_Val         _U_(0x2)                                       /**< (TWI_MMR) Two-byte internal device address  */
#define   TWI_MMR_IADRSZ_3_BYTE_Val         _U_(0x3)                                       /**< (TWI_MMR) Three-byte internal device address  */
#define TWI_MMR_IADRSZ_NONE                 (TWI_MMR_IADRSZ_NONE_Val << TWI_MMR_IADRSZ_Pos)  /**< (TWI_MMR) No internal device address Position  */
#define TWI_MMR_IADRSZ_1_BYTE               (TWI_MMR_IADRSZ_1_BYTE_Val << TWI_MMR_IADRSZ_Pos)  /**< (TWI_MMR) One-byte internal device address Position  */
#define TWI_MMR_IADRSZ_2_BYTE               (TWI_MMR_IADRSZ_2_BYTE_Val << TWI_MMR_IADRSZ_Pos)  /**< (TWI_MMR) Two-byte internal device address Position  */
#define TWI_MMR_IADRSZ_3_BYTE               (TWI_MMR_IADRSZ_3_BYTE_Val << TWI_MMR_IADRSZ_Pos)  /**< (TWI_MMR) Three-byte internal device address Position  */
#define TWI_MMR_MREAD_Pos                   12                                             /**< (TWI_MMR) Master Read Direction Position */
#define TWI_MMR_MREAD_Msk                   (_U_(0x1) << TWI_MMR_MREAD_Pos)                /**< (TWI_MMR) Master Read Direction Mask */
#define TWI_MMR_MREAD                       TWI_MMR_MREAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_MMR_MREAD_Msk instead */
#define TWI_MMR_DADR_Pos                    16                                             /**< (TWI_MMR) Device Address Position */
#define TWI_MMR_DADR_Msk                    (_U_(0x7F) << TWI_MMR_DADR_Pos)                /**< (TWI_MMR) Device Address Mask */
#define TWI_MMR_DADR(value)                 (TWI_MMR_DADR_Msk & ((value) << TWI_MMR_DADR_Pos))
#define TWI_MMR_MASK                        _U_(0x7F1300)                                  /**< \deprecated (TWI_MMR) Register MASK  (Use TWI_MMR_Msk instead)  */
#define TWI_MMR_Msk                         _U_(0x7F1300)                                  /**< (TWI_MMR) Register Mask  */


/* -------- TWI_SMR : (TWI Offset: 0x08) (R/W 32) Slave Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t :16;                       /**< bit:  0..15  Reserved */
    uint32_t SADR:7;                    /**< bit: 16..22  Slave Address                            */
    uint32_t :9;                        /**< bit: 23..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_SMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_SMR_OFFSET                      (0x08)                                        /**<  (TWI_SMR) Slave Mode Register  Offset */

#define TWI_SMR_SADR_Pos                    16                                             /**< (TWI_SMR) Slave Address Position */
#define TWI_SMR_SADR_Msk                    (_U_(0x7F) << TWI_SMR_SADR_Pos)                /**< (TWI_SMR) Slave Address Mask */
#define TWI_SMR_SADR(value)                 (TWI_SMR_SADR_Msk & ((value) << TWI_SMR_SADR_Pos))
#define TWI_SMR_MASK                        _U_(0x7F0000)                                  /**< \deprecated (TWI_SMR) Register MASK  (Use TWI_SMR_Msk instead)  */
#define TWI_SMR_Msk                         _U_(0x7F0000)                                  /**< (TWI_SMR) Register Mask  */


/* -------- TWI_IADR : (TWI Offset: 0x0c) (R/W 32) Internal Address Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IADR:24;                   /**< bit:  0..23  Internal Address                         */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_IADR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_IADR_OFFSET                     (0x0C)                                        /**<  (TWI_IADR) Internal Address Register  Offset */

#define TWI_IADR_IADR_Pos                   0                                              /**< (TWI_IADR) Internal Address Position */
#define TWI_IADR_IADR_Msk                   (_U_(0xFFFFFF) << TWI_IADR_IADR_Pos)           /**< (TWI_IADR) Internal Address Mask */
#define TWI_IADR_IADR(value)                (TWI_IADR_IADR_Msk & ((value) << TWI_IADR_IADR_Pos))
#define TWI_IADR_MASK                       _U_(0xFFFFFF)                                  /**< \deprecated (TWI_IADR) Register MASK  (Use TWI_IADR_Msk instead)  */
#define TWI_IADR_Msk                        _U_(0xFFFFFF)                                  /**< (TWI_IADR) Register Mask  */


/* -------- TWI_CWGR : (TWI Offset: 0x10) (R/W 32) Clock Waveform Generator Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t CLDIV:8;                   /**< bit:   0..7  Clock Low Divider                        */
    uint32_t CHDIV:8;                   /**< bit:  8..15  Clock High Divider                       */
    uint32_t CKDIV:3;                   /**< bit: 16..18  Clock Divider                            */
    uint32_t :5;                        /**< bit: 19..23  Reserved */
    uint32_t HOLD:5;                    /**< bit: 24..28  TWD Hold Time versus TWCK falling        */
    uint32_t :3;                        /**< bit: 29..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_CWGR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_CWGR_OFFSET                     (0x10)                                        /**<  (TWI_CWGR) Clock Waveform Generator Register  Offset */

#define TWI_CWGR_CLDIV_Pos                  0                                              /**< (TWI_CWGR) Clock Low Divider Position */
#define TWI_CWGR_CLDIV_Msk                  (_U_(0xFF) << TWI_CWGR_CLDIV_Pos)              /**< (TWI_CWGR) Clock Low Divider Mask */
#define TWI_CWGR_CLDIV(value)               (TWI_CWGR_CLDIV_Msk & ((value) << TWI_CWGR_CLDIV_Pos))
#define TWI_CWGR_CHDIV_Pos                  8                                              /**< (TWI_CWGR) Clock High Divider Position */
#define TWI_CWGR_CHDIV_Msk                  (_U_(0xFF) << TWI_CWGR_CHDIV_Pos)              /**< (TWI_CWGR) Clock High Divider Mask */
#define TWI_CWGR_CHDIV(value)               (TWI_CWGR_CHDIV_Msk & ((value) << TWI_CWGR_CHDIV_Pos))
#define TWI_CWGR_CKDIV_Pos                  16                                             /**< (TWI_CWGR) Clock Divider Position */
#define TWI_CWGR_CKDIV_Msk                  (_U_(0x7) << TWI_CWGR_CKDIV_Pos)               /**< (TWI_CWGR) Clock Divider Mask */
#define TWI_CWGR_CKDIV(value)               (TWI_CWGR_CKDIV_Msk & ((value) << TWI_CWGR_CKDIV_Pos))
#define TWI_CWGR_HOLD_Pos                   24                                             /**< (TWI_CWGR) TWD Hold Time versus TWCK falling Position */
#define TWI_CWGR_HOLD_Msk                   (_U_(0x1F) << TWI_CWGR_HOLD_Pos)               /**< (TWI_CWGR) TWD Hold Time versus TWCK falling Mask */
#define TWI_CWGR_HOLD(value)                (TWI_CWGR_HOLD_Msk & ((value) << TWI_CWGR_HOLD_Pos))
#define TWI_CWGR_MASK                       _U_(0x1F07FFFF)                                /**< \deprecated (TWI_CWGR) Register MASK  (Use TWI_CWGR_Msk instead)  */
#define TWI_CWGR_Msk                        _U_(0x1F07FFFF)                                /**< (TWI_CWGR) Register Mask  */


/* -------- TWI_SR : (TWI Offset: 0x20) (R/ 32) Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed (cleared by writing TWI_THR) */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready (cleared by reading TWI_RHR) */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready (cleared by writing TWI_THR) */
    uint32_t SVREAD:1;                  /**< bit:      3  Slave Read                               */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access                             */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access (cleared on read)    */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error (cleared on read)          */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledged (cleared on read)       */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost (cleared on read)       */
    uint32_t SCLWS:1;                   /**< bit:     10  Clock Wait State                         */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access (cleared on read)    */
    uint32_t ENDRX:1;                   /**< bit:     12  End of RX buffer (cleared by writing TWI_RCR or TWI_RNCR) */
    uint32_t ENDTX:1;                   /**< bit:     13  End of TX buffer (cleared by writing TWI_TCR or TWI_TNCR) */
    uint32_t RXBUFF:1;                  /**< bit:     14  RX Buffer Full (cleared by writing TWI_RCR or TWI_RNCR) */
    uint32_t TXBUFE:1;                  /**< bit:     15  TX Buffer Empty (cleared by writing TWI_TCR or TWI_TNCR) */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_SR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_SR_OFFSET                       (0x20)                                        /**<  (TWI_SR) Status Register  Offset */

#define TWI_SR_TXCOMP_Pos                   0                                              /**< (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Position */
#define TWI_SR_TXCOMP_Msk                   (_U_(0x1) << TWI_SR_TXCOMP_Pos)                /**< (TWI_SR) Transmission Completed (cleared by writing TWI_THR) Mask */
#define TWI_SR_TXCOMP                       TWI_SR_TXCOMP_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_TXCOMP_Msk instead */
#define TWI_SR_RXRDY_Pos                    1                                              /**< (TWI_SR) Receive Holding Register Ready (cleared by reading TWI_RHR) Position */
#define TWI_SR_RXRDY_Msk                    (_U_(0x1) << TWI_SR_RXRDY_Pos)                 /**< (TWI_SR) Receive Holding Register Ready (cleared by reading TWI_RHR) Mask */
#define TWI_SR_RXRDY                        TWI_SR_RXRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_RXRDY_Msk instead */
#define TWI_SR_TXRDY_Pos                    2                                              /**< (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Position */
#define TWI_SR_TXRDY_Msk                    (_U_(0x1) << TWI_SR_TXRDY_Pos)                 /**< (TWI_SR) Transmit Holding Register Ready (cleared by writing TWI_THR) Mask */
#define TWI_SR_TXRDY                        TWI_SR_TXRDY_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_TXRDY_Msk instead */
#define TWI_SR_SVREAD_Pos                   3                                              /**< (TWI_SR) Slave Read Position */
#define TWI_SR_SVREAD_Msk                   (_U_(0x1) << TWI_SR_SVREAD_Pos)                /**< (TWI_SR) Slave Read Mask */
#define TWI_SR_SVREAD                       TWI_SR_SVREAD_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_SVREAD_Msk instead */
#define TWI_SR_SVACC_Pos                    4                                              /**< (TWI_SR) Slave Access Position */
#define TWI_SR_SVACC_Msk                    (_U_(0x1) << TWI_SR_SVACC_Pos)                 /**< (TWI_SR) Slave Access Mask */
#define TWI_SR_SVACC                        TWI_SR_SVACC_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_SVACC_Msk instead */
#define TWI_SR_GACC_Pos                     5                                              /**< (TWI_SR) General Call Access (cleared on read) Position */
#define TWI_SR_GACC_Msk                     (_U_(0x1) << TWI_SR_GACC_Pos)                  /**< (TWI_SR) General Call Access (cleared on read) Mask */
#define TWI_SR_GACC                         TWI_SR_GACC_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_GACC_Msk instead */
#define TWI_SR_OVRE_Pos                     6                                              /**< (TWI_SR) Overrun Error (cleared on read) Position */
#define TWI_SR_OVRE_Msk                     (_U_(0x1) << TWI_SR_OVRE_Pos)                  /**< (TWI_SR) Overrun Error (cleared on read) Mask */
#define TWI_SR_OVRE                         TWI_SR_OVRE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_OVRE_Msk instead */
#define TWI_SR_NACK_Pos                     8                                              /**< (TWI_SR) Not Acknowledged (cleared on read) Position */
#define TWI_SR_NACK_Msk                     (_U_(0x1) << TWI_SR_NACK_Pos)                  /**< (TWI_SR) Not Acknowledged (cleared on read) Mask */
#define TWI_SR_NACK                         TWI_SR_NACK_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_NACK_Msk instead */
#define TWI_SR_ARBLST_Pos                   9                                              /**< (TWI_SR) Arbitration Lost (cleared on read) Position */
#define TWI_SR_ARBLST_Msk                   (_U_(0x1) << TWI_SR_ARBLST_Pos)                /**< (TWI_SR) Arbitration Lost (cleared on read) Mask */
#define TWI_SR_ARBLST                       TWI_SR_ARBLST_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_ARBLST_Msk instead */
#define TWI_SR_SCLWS_Pos                    10                                             /**< (TWI_SR) Clock Wait State Position */
#define TWI_SR_SCLWS_Msk                    (_U_(0x1) << TWI_SR_SCLWS_Pos)                 /**< (TWI_SR) Clock Wait State Mask */
#define TWI_SR_SCLWS                        TWI_SR_SCLWS_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_SCLWS_Msk instead */
#define TWI_SR_EOSACC_Pos                   11                                             /**< (TWI_SR) End Of Slave Access (cleared on read) Position */
#define TWI_SR_EOSACC_Msk                   (_U_(0x1) << TWI_SR_EOSACC_Pos)                /**< (TWI_SR) End Of Slave Access (cleared on read) Mask */
#define TWI_SR_EOSACC                       TWI_SR_EOSACC_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_EOSACC_Msk instead */
#define TWI_SR_ENDRX_Pos                    12                                             /**< (TWI_SR) End of RX buffer (cleared by writing TWI_RCR or TWI_RNCR) Position */
#define TWI_SR_ENDRX_Msk                    (_U_(0x1) << TWI_SR_ENDRX_Pos)                 /**< (TWI_SR) End of RX buffer (cleared by writing TWI_RCR or TWI_RNCR) Mask */
#define TWI_SR_ENDRX                        TWI_SR_ENDRX_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_ENDRX_Msk instead */
#define TWI_SR_ENDTX_Pos                    13                                             /**< (TWI_SR) End of TX buffer (cleared by writing TWI_TCR or TWI_TNCR) Position */
#define TWI_SR_ENDTX_Msk                    (_U_(0x1) << TWI_SR_ENDTX_Pos)                 /**< (TWI_SR) End of TX buffer (cleared by writing TWI_TCR or TWI_TNCR) Mask */
#define TWI_SR_ENDTX                        TWI_SR_ENDTX_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_ENDTX_Msk instead */
#define TWI_SR_RXBUFF_Pos                   14                                             /**< (TWI_SR) RX Buffer Full (cleared by writing TWI_RCR or TWI_RNCR) Position */
#define TWI_SR_RXBUFF_Msk                   (_U_(0x1) << TWI_SR_RXBUFF_Pos)                /**< (TWI_SR) RX Buffer Full (cleared by writing TWI_RCR or TWI_RNCR) Mask */
#define TWI_SR_RXBUFF                       TWI_SR_RXBUFF_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_RXBUFF_Msk instead */
#define TWI_SR_TXBUFE_Pos                   15                                             /**< (TWI_SR) TX Buffer Empty (cleared by writing TWI_TCR or TWI_TNCR) Position */
#define TWI_SR_TXBUFE_Msk                   (_U_(0x1) << TWI_SR_TXBUFE_Pos)                /**< (TWI_SR) TX Buffer Empty (cleared by writing TWI_TCR or TWI_TNCR) Mask */
#define TWI_SR_TXBUFE                       TWI_SR_TXBUFE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_SR_TXBUFE_Msk instead */
#define TWI_SR_MASK                         _U_(0xFF7F)                                    /**< \deprecated (TWI_SR) Register MASK  (Use TWI_SR_Msk instead)  */
#define TWI_SR_Msk                          _U_(0xFF7F)                                    /**< (TWI_SR) Register Mask  */


/* -------- TWI_IER : (TWI Offset: 0x24) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed Interrupt Enable  */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready Interrupt Enable */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready Interrupt Enable */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access Interrupt Enable            */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access Interrupt Enable     */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error Interrupt Enable           */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledge Interrupt Enable         */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost Interrupt Enable        */
    uint32_t SCL_WS:1;                  /**< bit:     10  Clock Wait State Interrupt Enable        */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access Interrupt Enable     */
    uint32_t ENDRX:1;                   /**< bit:     12  End of Receive Buffer Interrupt Enable   */
    uint32_t ENDTX:1;                   /**< bit:     13  End of Transmit Buffer Interrupt Enable  */
    uint32_t RXBUFF:1;                  /**< bit:     14  Receive Buffer Full Interrupt Enable     */
    uint32_t TXBUFE:1;                  /**< bit:     15  Transmit Buffer Empty Interrupt Enable   */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_IER_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_IER_OFFSET                      (0x24)                                        /**<  (TWI_IER) Interrupt Enable Register  Offset */

#define TWI_IER_TXCOMP_Pos                  0                                              /**< (TWI_IER) Transmission Completed Interrupt Enable Position */
#define TWI_IER_TXCOMP_Msk                  (_U_(0x1) << TWI_IER_TXCOMP_Pos)               /**< (TWI_IER) Transmission Completed Interrupt Enable Mask */
#define TWI_IER_TXCOMP                      TWI_IER_TXCOMP_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_TXCOMP_Msk instead */
#define TWI_IER_RXRDY_Pos                   1                                              /**< (TWI_IER) Receive Holding Register Ready Interrupt Enable Position */
#define TWI_IER_RXRDY_Msk                   (_U_(0x1) << TWI_IER_RXRDY_Pos)                /**< (TWI_IER) Receive Holding Register Ready Interrupt Enable Mask */
#define TWI_IER_RXRDY                       TWI_IER_RXRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_RXRDY_Msk instead */
#define TWI_IER_TXRDY_Pos                   2                                              /**< (TWI_IER) Transmit Holding Register Ready Interrupt Enable Position */
#define TWI_IER_TXRDY_Msk                   (_U_(0x1) << TWI_IER_TXRDY_Pos)                /**< (TWI_IER) Transmit Holding Register Ready Interrupt Enable Mask */
#define TWI_IER_TXRDY                       TWI_IER_TXRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_TXRDY_Msk instead */
#define TWI_IER_SVACC_Pos                   4                                              /**< (TWI_IER) Slave Access Interrupt Enable Position */
#define TWI_IER_SVACC_Msk                   (_U_(0x1) << TWI_IER_SVACC_Pos)                /**< (TWI_IER) Slave Access Interrupt Enable Mask */
#define TWI_IER_SVACC                       TWI_IER_SVACC_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_SVACC_Msk instead */
#define TWI_IER_GACC_Pos                    5                                              /**< (TWI_IER) General Call Access Interrupt Enable Position */
#define TWI_IER_GACC_Msk                    (_U_(0x1) << TWI_IER_GACC_Pos)                 /**< (TWI_IER) General Call Access Interrupt Enable Mask */
#define TWI_IER_GACC                        TWI_IER_GACC_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_GACC_Msk instead */
#define TWI_IER_OVRE_Pos                    6                                              /**< (TWI_IER) Overrun Error Interrupt Enable Position */
#define TWI_IER_OVRE_Msk                    (_U_(0x1) << TWI_IER_OVRE_Pos)                 /**< (TWI_IER) Overrun Error Interrupt Enable Mask */
#define TWI_IER_OVRE                        TWI_IER_OVRE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_OVRE_Msk instead */
#define TWI_IER_NACK_Pos                    8                                              /**< (TWI_IER) Not Acknowledge Interrupt Enable Position */
#define TWI_IER_NACK_Msk                    (_U_(0x1) << TWI_IER_NACK_Pos)                 /**< (TWI_IER) Not Acknowledge Interrupt Enable Mask */
#define TWI_IER_NACK                        TWI_IER_NACK_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_NACK_Msk instead */
#define TWI_IER_ARBLST_Pos                  9                                              /**< (TWI_IER) Arbitration Lost Interrupt Enable Position */
#define TWI_IER_ARBLST_Msk                  (_U_(0x1) << TWI_IER_ARBLST_Pos)               /**< (TWI_IER) Arbitration Lost Interrupt Enable Mask */
#define TWI_IER_ARBLST                      TWI_IER_ARBLST_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_ARBLST_Msk instead */
#define TWI_IER_SCL_WS_Pos                  10                                             /**< (TWI_IER) Clock Wait State Interrupt Enable Position */
#define TWI_IER_SCL_WS_Msk                  (_U_(0x1) << TWI_IER_SCL_WS_Pos)               /**< (TWI_IER) Clock Wait State Interrupt Enable Mask */
#define TWI_IER_SCL_WS                      TWI_IER_SCL_WS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_SCL_WS_Msk instead */
#define TWI_IER_EOSACC_Pos                  11                                             /**< (TWI_IER) End Of Slave Access Interrupt Enable Position */
#define TWI_IER_EOSACC_Msk                  (_U_(0x1) << TWI_IER_EOSACC_Pos)               /**< (TWI_IER) End Of Slave Access Interrupt Enable Mask */
#define TWI_IER_EOSACC                      TWI_IER_EOSACC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_EOSACC_Msk instead */
#define TWI_IER_ENDRX_Pos                   12                                             /**< (TWI_IER) End of Receive Buffer Interrupt Enable Position */
#define TWI_IER_ENDRX_Msk                   (_U_(0x1) << TWI_IER_ENDRX_Pos)                /**< (TWI_IER) End of Receive Buffer Interrupt Enable Mask */
#define TWI_IER_ENDRX                       TWI_IER_ENDRX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_ENDRX_Msk instead */
#define TWI_IER_ENDTX_Pos                   13                                             /**< (TWI_IER) End of Transmit Buffer Interrupt Enable Position */
#define TWI_IER_ENDTX_Msk                   (_U_(0x1) << TWI_IER_ENDTX_Pos)                /**< (TWI_IER) End of Transmit Buffer Interrupt Enable Mask */
#define TWI_IER_ENDTX                       TWI_IER_ENDTX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_ENDTX_Msk instead */
#define TWI_IER_RXBUFF_Pos                  14                                             /**< (TWI_IER) Receive Buffer Full Interrupt Enable Position */
#define TWI_IER_RXBUFF_Msk                  (_U_(0x1) << TWI_IER_RXBUFF_Pos)               /**< (TWI_IER) Receive Buffer Full Interrupt Enable Mask */
#define TWI_IER_RXBUFF                      TWI_IER_RXBUFF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_RXBUFF_Msk instead */
#define TWI_IER_TXBUFE_Pos                  15                                             /**< (TWI_IER) Transmit Buffer Empty Interrupt Enable Position */
#define TWI_IER_TXBUFE_Msk                  (_U_(0x1) << TWI_IER_TXBUFE_Pos)               /**< (TWI_IER) Transmit Buffer Empty Interrupt Enable Mask */
#define TWI_IER_TXBUFE                      TWI_IER_TXBUFE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IER_TXBUFE_Msk instead */
#define TWI_IER_MASK                        _U_(0xFF77)                                    /**< \deprecated (TWI_IER) Register MASK  (Use TWI_IER_Msk instead)  */
#define TWI_IER_Msk                         _U_(0xFF77)                                    /**< (TWI_IER) Register Mask  */


/* -------- TWI_IDR : (TWI Offset: 0x28) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed Interrupt Disable */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready Interrupt Disable */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready Interrupt Disable */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access Interrupt Disable           */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access Interrupt Disable    */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error Interrupt Disable          */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledge Interrupt Disable        */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost Interrupt Disable       */
    uint32_t SCL_WS:1;                  /**< bit:     10  Clock Wait State Interrupt Disable       */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access Interrupt Disable    */
    uint32_t ENDRX:1;                   /**< bit:     12  End of Receive Buffer Interrupt Disable  */
    uint32_t ENDTX:1;                   /**< bit:     13  End of Transmit Buffer Interrupt Disable */
    uint32_t RXBUFF:1;                  /**< bit:     14  Receive Buffer Full Interrupt Disable    */
    uint32_t TXBUFE:1;                  /**< bit:     15  Transmit Buffer Empty Interrupt Disable  */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_IDR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_IDR_OFFSET                      (0x28)                                        /**<  (TWI_IDR) Interrupt Disable Register  Offset */

#define TWI_IDR_TXCOMP_Pos                  0                                              /**< (TWI_IDR) Transmission Completed Interrupt Disable Position */
#define TWI_IDR_TXCOMP_Msk                  (_U_(0x1) << TWI_IDR_TXCOMP_Pos)               /**< (TWI_IDR) Transmission Completed Interrupt Disable Mask */
#define TWI_IDR_TXCOMP                      TWI_IDR_TXCOMP_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_TXCOMP_Msk instead */
#define TWI_IDR_RXRDY_Pos                   1                                              /**< (TWI_IDR) Receive Holding Register Ready Interrupt Disable Position */
#define TWI_IDR_RXRDY_Msk                   (_U_(0x1) << TWI_IDR_RXRDY_Pos)                /**< (TWI_IDR) Receive Holding Register Ready Interrupt Disable Mask */
#define TWI_IDR_RXRDY                       TWI_IDR_RXRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_RXRDY_Msk instead */
#define TWI_IDR_TXRDY_Pos                   2                                              /**< (TWI_IDR) Transmit Holding Register Ready Interrupt Disable Position */
#define TWI_IDR_TXRDY_Msk                   (_U_(0x1) << TWI_IDR_TXRDY_Pos)                /**< (TWI_IDR) Transmit Holding Register Ready Interrupt Disable Mask */
#define TWI_IDR_TXRDY                       TWI_IDR_TXRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_TXRDY_Msk instead */
#define TWI_IDR_SVACC_Pos                   4                                              /**< (TWI_IDR) Slave Access Interrupt Disable Position */
#define TWI_IDR_SVACC_Msk                   (_U_(0x1) << TWI_IDR_SVACC_Pos)                /**< (TWI_IDR) Slave Access Interrupt Disable Mask */
#define TWI_IDR_SVACC                       TWI_IDR_SVACC_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_SVACC_Msk instead */
#define TWI_IDR_GACC_Pos                    5                                              /**< (TWI_IDR) General Call Access Interrupt Disable Position */
#define TWI_IDR_GACC_Msk                    (_U_(0x1) << TWI_IDR_GACC_Pos)                 /**< (TWI_IDR) General Call Access Interrupt Disable Mask */
#define TWI_IDR_GACC                        TWI_IDR_GACC_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_GACC_Msk instead */
#define TWI_IDR_OVRE_Pos                    6                                              /**< (TWI_IDR) Overrun Error Interrupt Disable Position */
#define TWI_IDR_OVRE_Msk                    (_U_(0x1) << TWI_IDR_OVRE_Pos)                 /**< (TWI_IDR) Overrun Error Interrupt Disable Mask */
#define TWI_IDR_OVRE                        TWI_IDR_OVRE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_OVRE_Msk instead */
#define TWI_IDR_NACK_Pos                    8                                              /**< (TWI_IDR) Not Acknowledge Interrupt Disable Position */
#define TWI_IDR_NACK_Msk                    (_U_(0x1) << TWI_IDR_NACK_Pos)                 /**< (TWI_IDR) Not Acknowledge Interrupt Disable Mask */
#define TWI_IDR_NACK                        TWI_IDR_NACK_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_NACK_Msk instead */
#define TWI_IDR_ARBLST_Pos                  9                                              /**< (TWI_IDR) Arbitration Lost Interrupt Disable Position */
#define TWI_IDR_ARBLST_Msk                  (_U_(0x1) << TWI_IDR_ARBLST_Pos)               /**< (TWI_IDR) Arbitration Lost Interrupt Disable Mask */
#define TWI_IDR_ARBLST                      TWI_IDR_ARBLST_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_ARBLST_Msk instead */
#define TWI_IDR_SCL_WS_Pos                  10                                             /**< (TWI_IDR) Clock Wait State Interrupt Disable Position */
#define TWI_IDR_SCL_WS_Msk                  (_U_(0x1) << TWI_IDR_SCL_WS_Pos)               /**< (TWI_IDR) Clock Wait State Interrupt Disable Mask */
#define TWI_IDR_SCL_WS                      TWI_IDR_SCL_WS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_SCL_WS_Msk instead */
#define TWI_IDR_EOSACC_Pos                  11                                             /**< (TWI_IDR) End Of Slave Access Interrupt Disable Position */
#define TWI_IDR_EOSACC_Msk                  (_U_(0x1) << TWI_IDR_EOSACC_Pos)               /**< (TWI_IDR) End Of Slave Access Interrupt Disable Mask */
#define TWI_IDR_EOSACC                      TWI_IDR_EOSACC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_EOSACC_Msk instead */
#define TWI_IDR_ENDRX_Pos                   12                                             /**< (TWI_IDR) End of Receive Buffer Interrupt Disable Position */
#define TWI_IDR_ENDRX_Msk                   (_U_(0x1) << TWI_IDR_ENDRX_Pos)                /**< (TWI_IDR) End of Receive Buffer Interrupt Disable Mask */
#define TWI_IDR_ENDRX                       TWI_IDR_ENDRX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_ENDRX_Msk instead */
#define TWI_IDR_ENDTX_Pos                   13                                             /**< (TWI_IDR) End of Transmit Buffer Interrupt Disable Position */
#define TWI_IDR_ENDTX_Msk                   (_U_(0x1) << TWI_IDR_ENDTX_Pos)                /**< (TWI_IDR) End of Transmit Buffer Interrupt Disable Mask */
#define TWI_IDR_ENDTX                       TWI_IDR_ENDTX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_ENDTX_Msk instead */
#define TWI_IDR_RXBUFF_Pos                  14                                             /**< (TWI_IDR) Receive Buffer Full Interrupt Disable Position */
#define TWI_IDR_RXBUFF_Msk                  (_U_(0x1) << TWI_IDR_RXBUFF_Pos)               /**< (TWI_IDR) Receive Buffer Full Interrupt Disable Mask */
#define TWI_IDR_RXBUFF                      TWI_IDR_RXBUFF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_RXBUFF_Msk instead */
#define TWI_IDR_TXBUFE_Pos                  15                                             /**< (TWI_IDR) Transmit Buffer Empty Interrupt Disable Position */
#define TWI_IDR_TXBUFE_Msk                  (_U_(0x1) << TWI_IDR_TXBUFE_Pos)               /**< (TWI_IDR) Transmit Buffer Empty Interrupt Disable Mask */
#define TWI_IDR_TXBUFE                      TWI_IDR_TXBUFE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IDR_TXBUFE_Msk instead */
#define TWI_IDR_MASK                        _U_(0xFF77)                                    /**< \deprecated (TWI_IDR) Register MASK  (Use TWI_IDR_Msk instead)  */
#define TWI_IDR_Msk                         _U_(0xFF77)                                    /**< (TWI_IDR) Register Mask  */


/* -------- TWI_IMR : (TWI Offset: 0x2c) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXCOMP:1;                  /**< bit:      0  Transmission Completed Interrupt Mask    */
    uint32_t RXRDY:1;                   /**< bit:      1  Receive Holding Register Ready Interrupt Mask */
    uint32_t TXRDY:1;                   /**< bit:      2  Transmit Holding Register Ready Interrupt Mask */
    uint32_t :1;                        /**< bit:      3  Reserved */
    uint32_t SVACC:1;                   /**< bit:      4  Slave Access Interrupt Mask              */
    uint32_t GACC:1;                    /**< bit:      5  General Call Access Interrupt Mask       */
    uint32_t OVRE:1;                    /**< bit:      6  Overrun Error Interrupt Mask             */
    uint32_t :1;                        /**< bit:      7  Reserved */
    uint32_t NACK:1;                    /**< bit:      8  Not Acknowledge Interrupt Mask           */
    uint32_t ARBLST:1;                  /**< bit:      9  Arbitration Lost Interrupt Mask          */
    uint32_t SCL_WS:1;                  /**< bit:     10  Clock Wait State Interrupt Mask          */
    uint32_t EOSACC:1;                  /**< bit:     11  End Of Slave Access Interrupt Mask       */
    uint32_t ENDRX:1;                   /**< bit:     12  End of Receive Buffer Interrupt Mask     */
    uint32_t ENDTX:1;                   /**< bit:     13  End of Transmit Buffer Interrupt Mask    */
    uint32_t RXBUFF:1;                  /**< bit:     14  Receive Buffer Full Interrupt Mask       */
    uint32_t TXBUFE:1;                  /**< bit:     15  Transmit Buffer Empty Interrupt Mask     */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_IMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_IMR_OFFSET                      (0x2C)                                        /**<  (TWI_IMR) Interrupt Mask Register  Offset */

#define TWI_IMR_TXCOMP_Pos                  0                                              /**< (TWI_IMR) Transmission Completed Interrupt Mask Position */
#define TWI_IMR_TXCOMP_Msk                  (_U_(0x1) << TWI_IMR_TXCOMP_Pos)               /**< (TWI_IMR) Transmission Completed Interrupt Mask Mask */
#define TWI_IMR_TXCOMP                      TWI_IMR_TXCOMP_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_TXCOMP_Msk instead */
#define TWI_IMR_RXRDY_Pos                   1                                              /**< (TWI_IMR) Receive Holding Register Ready Interrupt Mask Position */
#define TWI_IMR_RXRDY_Msk                   (_U_(0x1) << TWI_IMR_RXRDY_Pos)                /**< (TWI_IMR) Receive Holding Register Ready Interrupt Mask Mask */
#define TWI_IMR_RXRDY                       TWI_IMR_RXRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_RXRDY_Msk instead */
#define TWI_IMR_TXRDY_Pos                   2                                              /**< (TWI_IMR) Transmit Holding Register Ready Interrupt Mask Position */
#define TWI_IMR_TXRDY_Msk                   (_U_(0x1) << TWI_IMR_TXRDY_Pos)                /**< (TWI_IMR) Transmit Holding Register Ready Interrupt Mask Mask */
#define TWI_IMR_TXRDY                       TWI_IMR_TXRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_TXRDY_Msk instead */
#define TWI_IMR_SVACC_Pos                   4                                              /**< (TWI_IMR) Slave Access Interrupt Mask Position */
#define TWI_IMR_SVACC_Msk                   (_U_(0x1) << TWI_IMR_SVACC_Pos)                /**< (TWI_IMR) Slave Access Interrupt Mask Mask */
#define TWI_IMR_SVACC                       TWI_IMR_SVACC_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_SVACC_Msk instead */
#define TWI_IMR_GACC_Pos                    5                                              /**< (TWI_IMR) General Call Access Interrupt Mask Position */
#define TWI_IMR_GACC_Msk                    (_U_(0x1) << TWI_IMR_GACC_Pos)                 /**< (TWI_IMR) General Call Access Interrupt Mask Mask */
#define TWI_IMR_GACC                        TWI_IMR_GACC_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_GACC_Msk instead */
#define TWI_IMR_OVRE_Pos                    6                                              /**< (TWI_IMR) Overrun Error Interrupt Mask Position */
#define TWI_IMR_OVRE_Msk                    (_U_(0x1) << TWI_IMR_OVRE_Pos)                 /**< (TWI_IMR) Overrun Error Interrupt Mask Mask */
#define TWI_IMR_OVRE                        TWI_IMR_OVRE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_OVRE_Msk instead */
#define TWI_IMR_NACK_Pos                    8                                              /**< (TWI_IMR) Not Acknowledge Interrupt Mask Position */
#define TWI_IMR_NACK_Msk                    (_U_(0x1) << TWI_IMR_NACK_Pos)                 /**< (TWI_IMR) Not Acknowledge Interrupt Mask Mask */
#define TWI_IMR_NACK                        TWI_IMR_NACK_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_NACK_Msk instead */
#define TWI_IMR_ARBLST_Pos                  9                                              /**< (TWI_IMR) Arbitration Lost Interrupt Mask Position */
#define TWI_IMR_ARBLST_Msk                  (_U_(0x1) << TWI_IMR_ARBLST_Pos)               /**< (TWI_IMR) Arbitration Lost Interrupt Mask Mask */
#define TWI_IMR_ARBLST                      TWI_IMR_ARBLST_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_ARBLST_Msk instead */
#define TWI_IMR_SCL_WS_Pos                  10                                             /**< (TWI_IMR) Clock Wait State Interrupt Mask Position */
#define TWI_IMR_SCL_WS_Msk                  (_U_(0x1) << TWI_IMR_SCL_WS_Pos)               /**< (TWI_IMR) Clock Wait State Interrupt Mask Mask */
#define TWI_IMR_SCL_WS                      TWI_IMR_SCL_WS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_SCL_WS_Msk instead */
#define TWI_IMR_EOSACC_Pos                  11                                             /**< (TWI_IMR) End Of Slave Access Interrupt Mask Position */
#define TWI_IMR_EOSACC_Msk                  (_U_(0x1) << TWI_IMR_EOSACC_Pos)               /**< (TWI_IMR) End Of Slave Access Interrupt Mask Mask */
#define TWI_IMR_EOSACC                      TWI_IMR_EOSACC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_EOSACC_Msk instead */
#define TWI_IMR_ENDRX_Pos                   12                                             /**< (TWI_IMR) End of Receive Buffer Interrupt Mask Position */
#define TWI_IMR_ENDRX_Msk                   (_U_(0x1) << TWI_IMR_ENDRX_Pos)                /**< (TWI_IMR) End of Receive Buffer Interrupt Mask Mask */
#define TWI_IMR_ENDRX                       TWI_IMR_ENDRX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_ENDRX_Msk instead */
#define TWI_IMR_ENDTX_Pos                   13                                             /**< (TWI_IMR) End of Transmit Buffer Interrupt Mask Position */
#define TWI_IMR_ENDTX_Msk                   (_U_(0x1) << TWI_IMR_ENDTX_Pos)                /**< (TWI_IMR) End of Transmit Buffer Interrupt Mask Mask */
#define TWI_IMR_ENDTX                       TWI_IMR_ENDTX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_ENDTX_Msk instead */
#define TWI_IMR_RXBUFF_Pos                  14                                             /**< (TWI_IMR) Receive Buffer Full Interrupt Mask Position */
#define TWI_IMR_RXBUFF_Msk                  (_U_(0x1) << TWI_IMR_RXBUFF_Pos)               /**< (TWI_IMR) Receive Buffer Full Interrupt Mask Mask */
#define TWI_IMR_RXBUFF                      TWI_IMR_RXBUFF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_RXBUFF_Msk instead */
#define TWI_IMR_TXBUFE_Pos                  15                                             /**< (TWI_IMR) Transmit Buffer Empty Interrupt Mask Position */
#define TWI_IMR_TXBUFE_Msk                  (_U_(0x1) << TWI_IMR_TXBUFE_Pos)               /**< (TWI_IMR) Transmit Buffer Empty Interrupt Mask Mask */
#define TWI_IMR_TXBUFE                      TWI_IMR_TXBUFE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_IMR_TXBUFE_Msk instead */
#define TWI_IMR_MASK                        _U_(0xFF77)                                    /**< \deprecated (TWI_IMR) Register MASK  (Use TWI_IMR_Msk instead)  */
#define TWI_IMR_Msk                         _U_(0xFF77)                                    /**< (TWI_IMR) Register Mask  */


/* -------- TWI_RHR : (TWI Offset: 0x30) (R/ 32) Receive Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXDATA:8;                  /**< bit:   0..7  Master or Slave Receive Holding Data     */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_RHR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_RHR_OFFSET                      (0x30)                                        /**<  (TWI_RHR) Receive Holding Register  Offset */

#define TWI_RHR_RXDATA_Pos                  0                                              /**< (TWI_RHR) Master or Slave Receive Holding Data Position */
#define TWI_RHR_RXDATA_Msk                  (_U_(0xFF) << TWI_RHR_RXDATA_Pos)              /**< (TWI_RHR) Master or Slave Receive Holding Data Mask */
#define TWI_RHR_RXDATA(value)               (TWI_RHR_RXDATA_Msk & ((value) << TWI_RHR_RXDATA_Pos))
#define TWI_RHR_MASK                        _U_(0xFF)                                      /**< \deprecated (TWI_RHR) Register MASK  (Use TWI_RHR_Msk instead)  */
#define TWI_RHR_Msk                         _U_(0xFF)                                      /**< (TWI_RHR) Register Mask  */


/* -------- TWI_THR : (TWI Offset: 0x34) (/W 32) Transmit Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXDATA:8;                  /**< bit:   0..7  Master or Slave Transmit Holding Data    */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_THR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_THR_OFFSET                      (0x34)                                        /**<  (TWI_THR) Transmit Holding Register  Offset */

#define TWI_THR_TXDATA_Pos                  0                                              /**< (TWI_THR) Master or Slave Transmit Holding Data Position */
#define TWI_THR_TXDATA_Msk                  (_U_(0xFF) << TWI_THR_TXDATA_Pos)              /**< (TWI_THR) Master or Slave Transmit Holding Data Mask */
#define TWI_THR_TXDATA(value)               (TWI_THR_TXDATA_Msk & ((value) << TWI_THR_TXDATA_Pos))
#define TWI_THR_MASK                        _U_(0xFF)                                      /**< \deprecated (TWI_THR) Register MASK  (Use TWI_THR_Msk instead)  */
#define TWI_THR_Msk                         _U_(0xFF)                                      /**< (TWI_THR) Register Mask  */


/* -------- TWI_WPMR : (TWI Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_WPMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_WPMR_OFFSET                     (0xE4)                                        /**<  (TWI_WPMR) Write Protection Mode Register  Offset */

#define TWI_WPMR_WPEN_Pos                   0                                              /**< (TWI_WPMR) Write Protection Enable Position */
#define TWI_WPMR_WPEN_Msk                   (_U_(0x1) << TWI_WPMR_WPEN_Pos)                /**< (TWI_WPMR) Write Protection Enable Mask */
#define TWI_WPMR_WPEN                       TWI_WPMR_WPEN_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_WPMR_WPEN_Msk instead */
#define TWI_WPMR_WPKEY_Pos                  8                                              /**< (TWI_WPMR) Write Protection Key Position */
#define TWI_WPMR_WPKEY_Msk                  (_U_(0xFFFFFF) << TWI_WPMR_WPKEY_Pos)          /**< (TWI_WPMR) Write Protection Key Mask */
#define TWI_WPMR_WPKEY(value)               (TWI_WPMR_WPKEY_Msk & ((value) << TWI_WPMR_WPKEY_Pos))
#define   TWI_WPMR_WPKEY_PASSWD_Val         _U_(0x545749)                                  /**< (TWI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0  */
#define TWI_WPMR_WPKEY_PASSWD               (TWI_WPMR_WPKEY_PASSWD_Val << TWI_WPMR_WPKEY_Pos)  /**< (TWI_WPMR) Writing any other value in this field aborts the write operation of the WPEN bit.Always reads as 0 Position  */
#define TWI_WPMR_MASK                       _U_(0xFFFFFF01)                                /**< \deprecated (TWI_WPMR) Register MASK  (Use TWI_WPMR_Msk instead)  */
#define TWI_WPMR_Msk                        _U_(0xFFFFFF01)                                /**< (TWI_WPMR) Register Mask  */


/* -------- TWI_WPSR : (TWI Offset: 0xe8) (R/ 32) Write Protection Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t WPVS:1;                    /**< bit:      0  Write Protection Violation Status        */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPVSRC:24;                 /**< bit:  8..31  Write Protection Violation Source        */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_WPSR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_WPSR_OFFSET                     (0xE8)                                        /**<  (TWI_WPSR) Write Protection Status Register  Offset */

#define TWI_WPSR_WPVS_Pos                   0                                              /**< (TWI_WPSR) Write Protection Violation Status Position */
#define TWI_WPSR_WPVS_Msk                   (_U_(0x1) << TWI_WPSR_WPVS_Pos)                /**< (TWI_WPSR) Write Protection Violation Status Mask */
#define TWI_WPSR_WPVS                       TWI_WPSR_WPVS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_WPSR_WPVS_Msk instead */
#define TWI_WPSR_WPVSRC_Pos                 8                                              /**< (TWI_WPSR) Write Protection Violation Source Position */
#define TWI_WPSR_WPVSRC_Msk                 (_U_(0xFFFFFF) << TWI_WPSR_WPVSRC_Pos)         /**< (TWI_WPSR) Write Protection Violation Source Mask */
#define TWI_WPSR_WPVSRC(value)              (TWI_WPSR_WPVSRC_Msk & ((value) << TWI_WPSR_WPVSRC_Pos))
#define TWI_WPSR_MASK                       _U_(0xFFFFFF01)                                /**< \deprecated (TWI_WPSR) Register MASK  (Use TWI_WPSR_Msk instead)  */
#define TWI_WPSR_Msk                        _U_(0xFFFFFF01)                                /**< (TWI_WPSR) Register Mask  */


/* -------- TWI_RPR : (TWI Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXPTR:32;                  /**< bit:  0..31  Receive Pointer Register                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_RPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_RPR_OFFSET                      (0x100)                                       /**<  (TWI_RPR) Receive Pointer Register  Offset */

#define TWI_RPR_RXPTR_Pos                   0                                              /**< (TWI_RPR) Receive Pointer Register Position */
#define TWI_RPR_RXPTR_Msk                   (_U_(0xFFFFFFFF) << TWI_RPR_RXPTR_Pos)         /**< (TWI_RPR) Receive Pointer Register Mask */
#define TWI_RPR_RXPTR(value)                (TWI_RPR_RXPTR_Msk & ((value) << TWI_RPR_RXPTR_Pos))
#define TWI_RPR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (TWI_RPR) Register MASK  (Use TWI_RPR_Msk instead)  */
#define TWI_RPR_Msk                         _U_(0xFFFFFFFF)                                /**< (TWI_RPR) Register Mask  */


/* -------- TWI_RCR : (TWI Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXCTR:16;                  /**< bit:  0..15  Receive Counter Register                 */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_RCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_RCR_OFFSET                      (0x104)                                       /**<  (TWI_RCR) Receive Counter Register  Offset */

#define TWI_RCR_RXCTR_Pos                   0                                              /**< (TWI_RCR) Receive Counter Register Position */
#define TWI_RCR_RXCTR_Msk                   (_U_(0xFFFF) << TWI_RCR_RXCTR_Pos)             /**< (TWI_RCR) Receive Counter Register Mask */
#define TWI_RCR_RXCTR(value)                (TWI_RCR_RXCTR_Msk & ((value) << TWI_RCR_RXCTR_Pos))
#define TWI_RCR_MASK                        _U_(0xFFFF)                                    /**< \deprecated (TWI_RCR) Register MASK  (Use TWI_RCR_Msk instead)  */
#define TWI_RCR_Msk                         _U_(0xFFFF)                                    /**< (TWI_RCR) Register Mask  */


/* -------- TWI_TPR : (TWI Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXPTR:32;                  /**< bit:  0..31  Transmit Counter Register                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_TPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_TPR_OFFSET                      (0x108)                                       /**<  (TWI_TPR) Transmit Pointer Register  Offset */

#define TWI_TPR_TXPTR_Pos                   0                                              /**< (TWI_TPR) Transmit Counter Register Position */
#define TWI_TPR_TXPTR_Msk                   (_U_(0xFFFFFFFF) << TWI_TPR_TXPTR_Pos)         /**< (TWI_TPR) Transmit Counter Register Mask */
#define TWI_TPR_TXPTR(value)                (TWI_TPR_TXPTR_Msk & ((value) << TWI_TPR_TXPTR_Pos))
#define TWI_TPR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (TWI_TPR) Register MASK  (Use TWI_TPR_Msk instead)  */
#define TWI_TPR_Msk                         _U_(0xFFFFFFFF)                                /**< (TWI_TPR) Register Mask  */


/* -------- TWI_TCR : (TWI Offset: 0x10c) (R/W 32) Transmit Counter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXCTR:16;                  /**< bit:  0..15  Transmit Counter Register                */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_TCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_TCR_OFFSET                      (0x10C)                                       /**<  (TWI_TCR) Transmit Counter Register  Offset */

#define TWI_TCR_TXCTR_Pos                   0                                              /**< (TWI_TCR) Transmit Counter Register Position */
#define TWI_TCR_TXCTR_Msk                   (_U_(0xFFFF) << TWI_TCR_TXCTR_Pos)             /**< (TWI_TCR) Transmit Counter Register Mask */
#define TWI_TCR_TXCTR(value)                (TWI_TCR_TXCTR_Msk & ((value) << TWI_TCR_TXCTR_Pos))
#define TWI_TCR_MASK                        _U_(0xFFFF)                                    /**< \deprecated (TWI_TCR) Register MASK  (Use TWI_TCR_Msk instead)  */
#define TWI_TCR_Msk                         _U_(0xFFFF)                                    /**< (TWI_TCR) Register Mask  */


/* -------- TWI_RNPR : (TWI Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXNPTR:32;                 /**< bit:  0..31  Receive Next Pointer                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_RNPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_RNPR_OFFSET                     (0x110)                                       /**<  (TWI_RNPR) Receive Next Pointer Register  Offset */

#define TWI_RNPR_RXNPTR_Pos                 0                                              /**< (TWI_RNPR) Receive Next Pointer Position */
#define TWI_RNPR_RXNPTR_Msk                 (_U_(0xFFFFFFFF) << TWI_RNPR_RXNPTR_Pos)       /**< (TWI_RNPR) Receive Next Pointer Mask */
#define TWI_RNPR_RXNPTR(value)              (TWI_RNPR_RXNPTR_Msk & ((value) << TWI_RNPR_RXNPTR_Pos))
#define TWI_RNPR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (TWI_RNPR) Register MASK  (Use TWI_RNPR_Msk instead)  */
#define TWI_RNPR_Msk                        _U_(0xFFFFFFFF)                                /**< (TWI_RNPR) Register Mask  */


/* -------- TWI_RNCR : (TWI Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXNCTR:16;                 /**< bit:  0..15  Receive Next Counter                     */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_RNCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_RNCR_OFFSET                     (0x114)                                       /**<  (TWI_RNCR) Receive Next Counter Register  Offset */

#define TWI_RNCR_RXNCTR_Pos                 0                                              /**< (TWI_RNCR) Receive Next Counter Position */
#define TWI_RNCR_RXNCTR_Msk                 (_U_(0xFFFF) << TWI_RNCR_RXNCTR_Pos)           /**< (TWI_RNCR) Receive Next Counter Mask */
#define TWI_RNCR_RXNCTR(value)              (TWI_RNCR_RXNCTR_Msk & ((value) << TWI_RNCR_RXNCTR_Pos))
#define TWI_RNCR_MASK                       _U_(0xFFFF)                                    /**< \deprecated (TWI_RNCR) Register MASK  (Use TWI_RNCR_Msk instead)  */
#define TWI_RNCR_Msk                        _U_(0xFFFF)                                    /**< (TWI_RNCR) Register Mask  */


/* -------- TWI_TNPR : (TWI Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXNPTR:32;                 /**< bit:  0..31  Transmit Next Pointer                    */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_TNPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_TNPR_OFFSET                     (0x118)                                       /**<  (TWI_TNPR) Transmit Next Pointer Register  Offset */

#define TWI_TNPR_TXNPTR_Pos                 0                                              /**< (TWI_TNPR) Transmit Next Pointer Position */
#define TWI_TNPR_TXNPTR_Msk                 (_U_(0xFFFFFFFF) << TWI_TNPR_TXNPTR_Pos)       /**< (TWI_TNPR) Transmit Next Pointer Mask */
#define TWI_TNPR_TXNPTR(value)              (TWI_TNPR_TXNPTR_Msk & ((value) << TWI_TNPR_TXNPTR_Pos))
#define TWI_TNPR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (TWI_TNPR) Register MASK  (Use TWI_TNPR_Msk instead)  */
#define TWI_TNPR_Msk                        _U_(0xFFFFFFFF)                                /**< (TWI_TNPR) Register Mask  */


/* -------- TWI_TNCR : (TWI Offset: 0x11c) (R/W 32) Transmit Next Counter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t TXNCTR:16;                 /**< bit:  0..15  Transmit Counter Next                    */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_TNCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_TNCR_OFFSET                     (0x11C)                                       /**<  (TWI_TNCR) Transmit Next Counter Register  Offset */

#define TWI_TNCR_TXNCTR_Pos                 0                                              /**< (TWI_TNCR) Transmit Counter Next Position */
#define TWI_TNCR_TXNCTR_Msk                 (_U_(0xFFFF) << TWI_TNCR_TXNCTR_Pos)           /**< (TWI_TNCR) Transmit Counter Next Mask */
#define TWI_TNCR_TXNCTR(value)              (TWI_TNCR_TXNCTR_Msk & ((value) << TWI_TNCR_TXNCTR_Pos))
#define TWI_TNCR_MASK                       _U_(0xFFFF)                                    /**< \deprecated (TWI_TNCR) Register MASK  (Use TWI_TNCR_Msk instead)  */
#define TWI_TNCR_Msk                        _U_(0xFFFF)                                    /**< (TWI_TNCR) Register Mask  */


/* -------- TWI_PTCR : (TWI Offset: 0x120) (/W 32) Transfer Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXTEN:1;                   /**< bit:      0  Receiver Transfer Enable                 */
    uint32_t RXTDIS:1;                  /**< bit:      1  Receiver Transfer Disable                */
    uint32_t :6;                        /**< bit:   2..7  Reserved */
    uint32_t TXTEN:1;                   /**< bit:      8  Transmitter Transfer Enable              */
    uint32_t TXTDIS:1;                  /**< bit:      9  Transmitter Transfer Disable             */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t RXCBEN:1;                  /**< bit:     16  Receiver Circular Buffer Enable          */
    uint32_t RXCBDIS:1;                 /**< bit:     17  Receiver Circular Buffer Disable         */
    uint32_t TXCBEN:1;                  /**< bit:     18  Transmitter Circular Buffer Enable       */
    uint32_t TXCBDIS:1;                 /**< bit:     19  Transmitter Circular Buffer Disable      */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t ERRCLR:1;                  /**< bit:     24  Transfer Bus Error Clear                 */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_PTCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_PTCR_OFFSET                     (0x120)                                       /**<  (TWI_PTCR) Transfer Control Register  Offset */

#define TWI_PTCR_RXTEN_Pos                  0                                              /**< (TWI_PTCR) Receiver Transfer Enable Position */
#define TWI_PTCR_RXTEN_Msk                  (_U_(0x1) << TWI_PTCR_RXTEN_Pos)               /**< (TWI_PTCR) Receiver Transfer Enable Mask */
#define TWI_PTCR_RXTEN                      TWI_PTCR_RXTEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_RXTEN_Msk instead */
#define TWI_PTCR_RXTDIS_Pos                 1                                              /**< (TWI_PTCR) Receiver Transfer Disable Position */
#define TWI_PTCR_RXTDIS_Msk                 (_U_(0x1) << TWI_PTCR_RXTDIS_Pos)              /**< (TWI_PTCR) Receiver Transfer Disable Mask */
#define TWI_PTCR_RXTDIS                     TWI_PTCR_RXTDIS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_RXTDIS_Msk instead */
#define TWI_PTCR_TXTEN_Pos                  8                                              /**< (TWI_PTCR) Transmitter Transfer Enable Position */
#define TWI_PTCR_TXTEN_Msk                  (_U_(0x1) << TWI_PTCR_TXTEN_Pos)               /**< (TWI_PTCR) Transmitter Transfer Enable Mask */
#define TWI_PTCR_TXTEN                      TWI_PTCR_TXTEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_TXTEN_Msk instead */
#define TWI_PTCR_TXTDIS_Pos                 9                                              /**< (TWI_PTCR) Transmitter Transfer Disable Position */
#define TWI_PTCR_TXTDIS_Msk                 (_U_(0x1) << TWI_PTCR_TXTDIS_Pos)              /**< (TWI_PTCR) Transmitter Transfer Disable Mask */
#define TWI_PTCR_TXTDIS                     TWI_PTCR_TXTDIS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_TXTDIS_Msk instead */
#define TWI_PTCR_RXCBEN_Pos                 16                                             /**< (TWI_PTCR) Receiver Circular Buffer Enable Position */
#define TWI_PTCR_RXCBEN_Msk                 (_U_(0x1) << TWI_PTCR_RXCBEN_Pos)              /**< (TWI_PTCR) Receiver Circular Buffer Enable Mask */
#define TWI_PTCR_RXCBEN                     TWI_PTCR_RXCBEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_RXCBEN_Msk instead */
#define TWI_PTCR_RXCBDIS_Pos                17                                             /**< (TWI_PTCR) Receiver Circular Buffer Disable Position */
#define TWI_PTCR_RXCBDIS_Msk                (_U_(0x1) << TWI_PTCR_RXCBDIS_Pos)             /**< (TWI_PTCR) Receiver Circular Buffer Disable Mask */
#define TWI_PTCR_RXCBDIS                    TWI_PTCR_RXCBDIS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_RXCBDIS_Msk instead */
#define TWI_PTCR_TXCBEN_Pos                 18                                             /**< (TWI_PTCR) Transmitter Circular Buffer Enable Position */
#define TWI_PTCR_TXCBEN_Msk                 (_U_(0x1) << TWI_PTCR_TXCBEN_Pos)              /**< (TWI_PTCR) Transmitter Circular Buffer Enable Mask */
#define TWI_PTCR_TXCBEN                     TWI_PTCR_TXCBEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_TXCBEN_Msk instead */
#define TWI_PTCR_TXCBDIS_Pos                19                                             /**< (TWI_PTCR) Transmitter Circular Buffer Disable Position */
#define TWI_PTCR_TXCBDIS_Msk                (_U_(0x1) << TWI_PTCR_TXCBDIS_Pos)             /**< (TWI_PTCR) Transmitter Circular Buffer Disable Mask */
#define TWI_PTCR_TXCBDIS                    TWI_PTCR_TXCBDIS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_TXCBDIS_Msk instead */
#define TWI_PTCR_ERRCLR_Pos                 24                                             /**< (TWI_PTCR) Transfer Bus Error Clear Position */
#define TWI_PTCR_ERRCLR_Msk                 (_U_(0x1) << TWI_PTCR_ERRCLR_Pos)              /**< (TWI_PTCR) Transfer Bus Error Clear Mask */
#define TWI_PTCR_ERRCLR                     TWI_PTCR_ERRCLR_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTCR_ERRCLR_Msk instead */
#define TWI_PTCR_MASK                       _U_(0x10F0303)                                 /**< \deprecated (TWI_PTCR) Register MASK  (Use TWI_PTCR_Msk instead)  */
#define TWI_PTCR_Msk                        _U_(0x10F0303)                                 /**< (TWI_PTCR) Register Mask  */


/* -------- TWI_PTSR : (TWI Offset: 0x124) (R/ 32) Transfer Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t RXTEN:1;                   /**< bit:      0  Receiver Transfer Enable                 */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t TXTEN:1;                   /**< bit:      8  Transmitter Transfer Enable              */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t RXCBEN:1;                  /**< bit:     16  Receiver Circular Buffer Enable          */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TXCBEN:1;                  /**< bit:     18  Transmitter Circular Buffer Enable       */
    uint32_t :5;                        /**< bit: 19..23  Reserved */
    uint32_t ERR:1;                     /**< bit:     24  Transfer Bus Error                       */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} TWI_PTSR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define TWI_PTSR_OFFSET                     (0x124)                                       /**<  (TWI_PTSR) Transfer Status Register  Offset */

#define TWI_PTSR_RXTEN_Pos                  0                                              /**< (TWI_PTSR) Receiver Transfer Enable Position */
#define TWI_PTSR_RXTEN_Msk                  (_U_(0x1) << TWI_PTSR_RXTEN_Pos)               /**< (TWI_PTSR) Receiver Transfer Enable Mask */
#define TWI_PTSR_RXTEN                      TWI_PTSR_RXTEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTSR_RXTEN_Msk instead */
#define TWI_PTSR_TXTEN_Pos                  8                                              /**< (TWI_PTSR) Transmitter Transfer Enable Position */
#define TWI_PTSR_TXTEN_Msk                  (_U_(0x1) << TWI_PTSR_TXTEN_Pos)               /**< (TWI_PTSR) Transmitter Transfer Enable Mask */
#define TWI_PTSR_TXTEN                      TWI_PTSR_TXTEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTSR_TXTEN_Msk instead */
#define TWI_PTSR_RXCBEN_Pos                 16                                             /**< (TWI_PTSR) Receiver Circular Buffer Enable Position */
#define TWI_PTSR_RXCBEN_Msk                 (_U_(0x1) << TWI_PTSR_RXCBEN_Pos)              /**< (TWI_PTSR) Receiver Circular Buffer Enable Mask */
#define TWI_PTSR_RXCBEN                     TWI_PTSR_RXCBEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTSR_RXCBEN_Msk instead */
#define TWI_PTSR_TXCBEN_Pos                 18                                             /**< (TWI_PTSR) Transmitter Circular Buffer Enable Position */
#define TWI_PTSR_TXCBEN_Msk                 (_U_(0x1) << TWI_PTSR_TXCBEN_Pos)              /**< (TWI_PTSR) Transmitter Circular Buffer Enable Mask */
#define TWI_PTSR_TXCBEN                     TWI_PTSR_TXCBEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTSR_TXCBEN_Msk instead */
#define TWI_PTSR_ERR_Pos                    24                                             /**< (TWI_PTSR) Transfer Bus Error Position */
#define TWI_PTSR_ERR_Msk                    (_U_(0x1) << TWI_PTSR_ERR_Pos)                 /**< (TWI_PTSR) Transfer Bus Error Mask */
#define TWI_PTSR_ERR                        TWI_PTSR_ERR_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use TWI_PTSR_ERR_Msk instead */
#define TWI_PTSR_MASK                       _U_(0x1050101)                                 /**< \deprecated (TWI_PTSR) Register MASK  (Use TWI_PTSR_Msk instead)  */
#define TWI_PTSR_Msk                        _U_(0x1050101)                                 /**< (TWI_PTSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief TWI hardware registers */
typedef struct {
  __O  uint32_t TWI_CR;         /**< (TWI Offset: 0x00) Control Register */
  __IO uint32_t TWI_MMR;        /**< (TWI Offset: 0x04) Master Mode Register */
  __IO uint32_t TWI_SMR;        /**< (TWI Offset: 0x08) Slave Mode Register */
  __IO uint32_t TWI_IADR;       /**< (TWI Offset: 0x0C) Internal Address Register */
  __IO uint32_t TWI_CWGR;       /**< (TWI Offset: 0x10) Clock Waveform Generator Register */
  RoReg8  Reserved1[0xC];
  __I  uint32_t TWI_SR;         /**< (TWI Offset: 0x20) Status Register */
  __O  uint32_t TWI_IER;        /**< (TWI Offset: 0x24) Interrupt Enable Register */
  __O  uint32_t TWI_IDR;        /**< (TWI Offset: 0x28) Interrupt Disable Register */
  __I  uint32_t TWI_IMR;        /**< (TWI Offset: 0x2C) Interrupt Mask Register */
  __I  uint32_t TWI_RHR;        /**< (TWI Offset: 0x30) Receive Holding Register */
  __O  uint32_t TWI_THR;        /**< (TWI Offset: 0x34) Transmit Holding Register */
  RoReg8  Reserved2[0xAC];
  __IO uint32_t TWI_WPMR;       /**< (TWI Offset: 0xE4) Write Protection Mode Register */
  __I  uint32_t TWI_WPSR;       /**< (TWI Offset: 0xE8) Write Protection Status Register */
  RoReg8  Reserved3[0x14];
  __IO uint32_t TWI_RPR;        /**< (TWI Offset: 0x100) Receive Pointer Register */
  __IO uint32_t TWI_RCR;        /**< (TWI Offset: 0x104) Receive Counter Register */
  __IO uint32_t TWI_TPR;        /**< (TWI Offset: 0x108) Transmit Pointer Register */
  __IO uint32_t TWI_TCR;        /**< (TWI Offset: 0x10C) Transmit Counter Register */
  __IO uint32_t TWI_RNPR;       /**< (TWI Offset: 0x110) Receive Next Pointer Register */
  __IO uint32_t TWI_RNCR;       /**< (TWI Offset: 0x114) Receive Next Counter Register */
  __IO uint32_t TWI_TNPR;       /**< (TWI Offset: 0x118) Transmit Next Pointer Register */
  __IO uint32_t TWI_TNCR;       /**< (TWI Offset: 0x11C) Transmit Next Counter Register */
  __O  uint32_t TWI_PTCR;       /**< (TWI Offset: 0x120) Transfer Control Register */
  __I  uint32_t TWI_PTSR;       /**< (TWI Offset: 0x124) Transfer Status Register */
} Twi;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief TWI hardware registers */
typedef struct {
  __O  TWI_CR_Type                    TWI_CR;         /**< Offset: 0x00 ( /W  32) Control Register */
  __IO TWI_MMR_Type                   TWI_MMR;        /**< Offset: 0x04 (R/W  32) Master Mode Register */
  __IO TWI_SMR_Type                   TWI_SMR;        /**< Offset: 0x08 (R/W  32) Slave Mode Register */
  __IO TWI_IADR_Type                  TWI_IADR;       /**< Offset: 0x0C (R/W  32) Internal Address Register */
  __IO TWI_CWGR_Type                  TWI_CWGR;       /**< Offset: 0x10 (R/W  32) Clock Waveform Generator Register */
  __I  uint32_t                       Reserved1[3];
  __I  TWI_SR_Type                    TWI_SR;         /**< Offset: 0x20 (R/   32) Status Register */
  __O  TWI_IER_Type                   TWI_IER;        /**< Offset: 0x24 ( /W  32) Interrupt Enable Register */
  __O  TWI_IDR_Type                   TWI_IDR;        /**< Offset: 0x28 ( /W  32) Interrupt Disable Register */
  __I  TWI_IMR_Type                   TWI_IMR;        /**< Offset: 0x2C (R/   32) Interrupt Mask Register */
  __I  TWI_RHR_Type                   TWI_RHR;        /**< Offset: 0x30 (R/   32) Receive Holding Register */
  __O  TWI_THR_Type                   TWI_THR;        /**< Offset: 0x34 ( /W  32) Transmit Holding Register */
  __I  uint32_t                       Reserved2[43];
  __IO TWI_WPMR_Type                  TWI_WPMR;       /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  TWI_WPSR_Type                  TWI_WPSR;       /**< Offset: 0xE8 (R/   32) Write Protection Status Register */
  __I  uint32_t                       Reserved3[5];
  __IO TWI_RPR_Type                   TWI_RPR;        /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO TWI_RCR_Type                   TWI_RCR;        /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO TWI_TPR_Type                   TWI_TPR;        /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO TWI_TCR_Type                   TWI_TCR;        /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO TWI_RNPR_Type                  TWI_RNPR;       /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO TWI_RNCR_Type                  TWI_RNCR;       /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO TWI_TNPR_Type                  TWI_TNPR;       /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO TWI_TNCR_Type                  TWI_TNCR;       /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O  TWI_PTCR_Type                  TWI_PTCR;       /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I  TWI_PTSR_Type                  TWI_PTSR;       /**< Offset: 0x124 (R/   32) Transfer Status Register */
} Twi;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Two-wire Interface */

#endif /* _SAMG54_TWI_COMPONENT_H_ */
