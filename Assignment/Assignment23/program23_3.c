///////////////////////////////////////////////////////
//     Funtion name :   Strlwrx
//     Description  :   accept string from user and display in upper case 
//     Input        :   "Marvellous Multi OS"
//     Output       :   mARVELLOUS mULTI OS
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
        if(isupper((unsigned char)*Str))
        {
            *Str = tolower((unsigned char)*Str);
        }
        else if(islower((unsigned char)*Str))
        {
            *Str = toupper((unsigned char)*Str);
        }
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