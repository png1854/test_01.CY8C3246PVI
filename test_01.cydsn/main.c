/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include <project.h>

int main()
{
    uint32 dat=10;
    uint8 k;
    uint8 l;
    for(;;)
    {
        for(l=0;l<8;l++)
        {
            RCK_Write(0);
            for(k=0;k<32;k++)
            {
                SI_Write(dat&1);SCK_Write(1);SCK_Write(0);
                dat=dat>>1;
            }
            for(k=0;k<8;k++)
            {
                SI_Write(l&1);SCK_Write(1);SCK_Write(0);
                l=l>>1;
            }
            RCK_Write(1);
        }
    }
}





