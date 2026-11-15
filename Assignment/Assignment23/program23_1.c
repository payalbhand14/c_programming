////////////////////////////////////////////////////////
//     Funtion name :   Strlwrx
//     Description  :   accept string from user and display in lower case 
//     Input        :   "MARVELLOUS MULTI OS"
//     Output       :   marvellous multi os
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
    *Str = tolower(*Str);
    Str++;
   } 
}

int main()
{
    char arr[20];

    printf("Enter String :");
    scanf("%[^'\n']s",arr);

    Strlwrx(arr);

    printf("Modified string is :%s",arr);


    return EXIT_SUCCESS;
}