///////////////////////////////////////////////////////
//     Funtion name :   DisplayAscii
//     Description  :   Display Ascii table   
//     Input        :   Ascii value
//     Output       :   Ascii value
//     Author       :   Payal Machhindra Bhand
//     Date         :   18/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void DisplayAscii()
{
    int i = 0;

    for(i = 0; i <= 255; i++)
    {
        printf("%d\t%c\n",i,i);
    }
}

int main()
{
    DisplayAscii();

    return EXIT_SUCCESS;
}