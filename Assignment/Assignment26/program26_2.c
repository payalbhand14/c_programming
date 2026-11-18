///////////////////////////////////////////////////////
//     Funtion name :   Display
//     Description  :   Accept charcter from user and display its 
//                      corresponding capital or small character  
//     Input        :   A
//     Output       :   a
//     Author       :   Payal Machhindra Bhand
//     Date         :   18/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void Display(char ch)
{
    if(isupper((unsigned char)ch))
    {
        printf("Convert Alphate : %c",tolower((unsigned char)ch));
    }
    else if(islower((unsigned char)ch))
    {
        printf("convert Alphate : %c",toupper((unsigned char)ch));
    }
    else
    {
        printf("invalide Alphate \n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character :");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}