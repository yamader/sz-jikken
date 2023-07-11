/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1778
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set L0 aliases
#define L0_TRIS                 TRISBbits.TRISB0
#define L0_LAT                  LATBbits.LATB0
#define L0_PORT                 PORTBbits.RB0
#define L0_WPU                  WPUBbits.WPUB0
#define L0_ANS                  ANSELBbits.ANSB0
#define L0_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define L0_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define L0_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define L0_GetValue()           PORTBbits.RB0
#define L0_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define L0_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define L0_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define L0_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define L0_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define L0_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set L1 aliases
#define L1_TRIS                 TRISBbits.TRISB1
#define L1_LAT                  LATBbits.LATB1
#define L1_PORT                 PORTBbits.RB1
#define L1_WPU                  WPUBbits.WPUB1
#define L1_ANS                  ANSELBbits.ANSB1
#define L1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define L1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define L1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define L1_GetValue()           PORTBbits.RB1
#define L1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define L1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define L1_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define L1_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define L1_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define L1_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set R1 aliases
#define R1_TRIS                 TRISBbits.TRISB2
#define R1_LAT                  LATBbits.LATB2
#define R1_PORT                 PORTBbits.RB2
#define R1_WPU                  WPUBbits.WPUB2
#define R1_ANS                  ANSELBbits.ANSB2
#define R1_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define R1_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define R1_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define R1_GetValue()           PORTBbits.RB2
#define R1_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define R1_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define R1_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define R1_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define R1_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define R1_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set R0 aliases
#define R0_TRIS                 TRISBbits.TRISB3
#define R0_LAT                  LATBbits.LATB3
#define R0_PORT                 PORTBbits.RB3
#define R0_WPU                  WPUBbits.WPUB3
#define R0_ANS                  ANSELBbits.ANSB3
#define R0_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define R0_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define R0_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define R0_GetValue()           PORTBbits.RB3
#define R0_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define R0_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define R0_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define R0_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define R0_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define R0_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetPullup()             do { WPUCbits.WPUC7 = 1; } while(0)
#define RC7_ResetPullup()           do { WPUCbits.WPUC7 = 0; } while(0)
#define RC7_SetAnalogMode()         do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()        do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/