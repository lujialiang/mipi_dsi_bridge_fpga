/*******************************************************************************
  POWER Peripheral Library Template Implementation

  File Name:
    power_HLVDModeControl_Default.h

  Summary:
    POWER PLIB Template Implementation

  Description:
    This header file contains template implementations
    For Feature : HLVDModeControl
    and its Variant : Default
    For following APIs :
        PLIB_POWER_ExistsHLVDModeControl
        PLIB_POWER_HLVDModeSelect

*******************************************************************************/

//DOM-IGNORE-BEGIN
/*******************************************************************************
Copyright (c) 2013-2014 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*******************************************************************************/

//DOM-IGNORE-END

#ifndef _POWER_HLVDMODECONTROL_DEFAULT_H
#define _POWER_HLVDMODECONTROL_DEFAULT_H

//******************************************************************************
/* Function :  POWER_ExistsHLVDModeControl_Default

  Summary:
    Implements Default variant of PLIB_POWER_ExistsHLVDModeControl

  Description:
    This template implements the Default variant of the PLIB_POWER_ExistsHLVDModeControl function.
*/

#define PLIB_POWER_ExistsHLVDModeControl PLIB_POWER_ExistsHLVDModeControl
PLIB_TEMPLATE bool POWER_ExistsHLVDModeControl_Default( POWER_MODULE_ID index )
{
    return true;
}


//******************************************************************************
/* Function :  POWER_HLVDModeSelect_Default

  Summary:
    Implements Default variant of PLIB_POWER_HLVDModeSelect 

  Description:
    This template implements the Default variant of the PLIB_POWER_HLVDModeSelect function.
*/

PLIB_TEMPLATE void POWER_HLVDModeSelect_Default( POWER_MODULE_ID index , HLVD_MODE mode )
{
   HLVDCON |= _HLVDCON_VDIR_MASK;
}


#endif /*_POWER_HLVDMODECONTROL_DEFAULT_H*/

/******************************************************************************
 End of File
*/
