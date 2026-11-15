///////////////////////////////////////////////////////
//     Funtion name :   CountWhite
//     Description  :   accept string from user and display in upper case 
//     Input        :   "Marve8llous 1 2 3"
//     Output       :    3
//     Input        :   "Marvellous"
//     Output       :   0
//     Author       :   Payal Machhindra Bhand
//     Date         :   15/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int CountWhite(char *Str)
{
    int iCount = 0;

    while(*Str != '\0')
    {
        if(isspace((unsigned char)*Str))
        {
            iCount++;
        }
        Str++;
    }
    return iCount;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String:");
    scanf("%19[^\n]",arr);

    iRet = CountWhite(arr);
    printf("%d",iRet);

    return EXIT_SUCCESS;
}