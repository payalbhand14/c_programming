///////////////////////////////////////////////////////
//     Funtion name :   Display
//     Description  :   Accept charcter from user and display intput from still  z 
//                      corresponding capital or small character  
//     Input        :   w
//     Output       :   w   x   y   y   z
//     Author       :   Payal Machhindra Bhand
//     Date         :   18/11/2026
// 
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void Display(char ch)
{
    char i;
    if(ch >= 'A' && ch <= 'Z')
    {
        for(i = ch; i <= 'Z'; i++)
        {
            printf("%c\t",i);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(i = ch;i <= 'z'; i++)
        {
            printf("%c\t",i);
        }
    }
    else
    {
        printf("Invalid character \n");
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