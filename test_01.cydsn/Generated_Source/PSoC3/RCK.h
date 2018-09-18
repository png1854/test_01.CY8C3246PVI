/*******************************************************************************
* File Name: RCK.h  
* Version 2.0
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_RCK_H) /* Pins RCK_H */
#define CY_PINS_RCK_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "RCK_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    RCK_Write(uint8 value) ;
void    RCK_SetDriveMode(uint8 mode) ;
uint8   RCK_ReadDataReg(void) ;
uint8   RCK_Read(void) ;
uint8   RCK_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define RCK_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define RCK_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define RCK_DM_RES_UP          PIN_DM_RES_UP
#define RCK_DM_RES_DWN         PIN_DM_RES_DWN
#define RCK_DM_OD_LO           PIN_DM_OD_LO
#define RCK_DM_OD_HI           PIN_DM_OD_HI
#define RCK_DM_STRONG          PIN_DM_STRONG
#define RCK_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define RCK_MASK               RCK__MASK
#define RCK_SHIFT              RCK__SHIFT
#define RCK_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define RCK_PS                     (* (reg8 *) RCK__PS)
/* Data Register */
#define RCK_DR                     (* (reg8 *) RCK__DR)
/* Port Number */
#define RCK_PRT_NUM                (* (reg8 *) RCK__PRT) 
/* Connect to Analog Globals */                                                  
#define RCK_AG                     (* (reg8 *) RCK__AG)                       
/* Analog MUX bux enable */
#define RCK_AMUX                   (* (reg8 *) RCK__AMUX) 
/* Bidirectional Enable */                                                        
#define RCK_BIE                    (* (reg8 *) RCK__BIE)
/* Bit-mask for Aliased Register Access */
#define RCK_BIT_MASK               (* (reg8 *) RCK__BIT_MASK)
/* Bypass Enable */
#define RCK_BYP                    (* (reg8 *) RCK__BYP)
/* Port wide control signals */                                                   
#define RCK_CTL                    (* (reg8 *) RCK__CTL)
/* Drive Modes */
#define RCK_DM0                    (* (reg8 *) RCK__DM0) 
#define RCK_DM1                    (* (reg8 *) RCK__DM1)
#define RCK_DM2                    (* (reg8 *) RCK__DM2) 
/* Input Buffer Disable Override */
#define RCK_INP_DIS                (* (reg8 *) RCK__INP_DIS)
/* LCD Common or Segment Drive */
#define RCK_LCD_COM_SEG            (* (reg8 *) RCK__LCD_COM_SEG)
/* Enable Segment LCD */
#define RCK_LCD_EN                 (* (reg8 *) RCK__LCD_EN)
/* Slew Rate Control */
#define RCK_SLW                    (* (reg8 *) RCK__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define RCK_PRTDSI__CAPS_SEL       (* (reg8 *) RCK__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define RCK_PRTDSI__DBL_SYNC_IN    (* (reg8 *) RCK__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define RCK_PRTDSI__OE_SEL0        (* (reg8 *) RCK__PRTDSI__OE_SEL0) 
#define RCK_PRTDSI__OE_SEL1        (* (reg8 *) RCK__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define RCK_PRTDSI__OUT_SEL0       (* (reg8 *) RCK__PRTDSI__OUT_SEL0) 
#define RCK_PRTDSI__OUT_SEL1       (* (reg8 *) RCK__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define RCK_PRTDSI__SYNC_OUT       (* (reg8 *) RCK__PRTDSI__SYNC_OUT) 


#if defined(RCK__INTSTAT)  /* Interrupt Registers */

    #define RCK_INTSTAT                (* (reg8 *) RCK__INTSTAT)
    #define RCK_SNAP                   (* (reg8 *) RCK__SNAP)

#endif /* Interrupt Registers */

#endif /* End Pins RCK_H */


/* [] END OF FILE */
