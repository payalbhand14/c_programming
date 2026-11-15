///////////////////////////////////////////////////////
//     Funtion name :   Strlwrx
//     Description  :   accept string from user and display in upper case 
//     Input        :   "marvellous multi os"
//     Output       :   MARVELLOUS MULTI OS
//     Author       :   Payal Machhindra Bhand
//     Date         :   15/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void Strlwrx(char *Str)
{
    while(*Str != '\0')
    {
        *Str = toupper(*Str);
        Str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    Strlwrx(arr);

    printf("Modified string :%s",arr);

    return EXIT_SUCCESS;
}