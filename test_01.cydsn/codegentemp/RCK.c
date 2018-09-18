/*******************************************************************************
* File Name: RCK.c  
* Version 2.0
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "RCK.h"


/*******************************************************************************
* Function Name: RCK_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void RCK_Write(uint8 value) 
{
    uint8 staticBits = (RCK_DR & (uint8)(~RCK_MASK));
    RCK_DR = staticBits | ((uint8)(value << RCK_SHIFT) & RCK_MASK);
}


/*******************************************************************************
* Function Name: RCK_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  RCK_DM_STRONG     Strong Drive 
*  RCK_DM_OD_HI      Open Drain, Drives High 
*  RCK_DM_OD_LO      Open Drain, Drives Low 
*  RCK_DM_RES_UP     Resistive Pull Up 
*  RCK_DM_RES_DWN    Resistive Pull Down 
*  RCK_DM_RES_UPDWN  Resistive Pull Up/Down 
*  RCK_DM_DIG_HIZ    High Impedance Digital 
*  RCK_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void RCK_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(RCK_0, mode);
}


/*******************************************************************************
* Function Name: RCK_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro RCK_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 RCK_Read(void) 
{
    return (RCK_PS & RCK_MASK) >> RCK_SHIFT;
}


/*******************************************************************************
* Function Name: RCK_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 RCK_ReadDataReg(void) 
{
    return (RCK_DR & RCK_MASK) >> RCK_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(RCK_INTSTAT) 

    /*******************************************************************************
    * Function Name: RCK_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 RCK_ClearInterrupt(void) 
    {
        return (RCK_INTSTAT & RCK_MASK) >> RCK_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
