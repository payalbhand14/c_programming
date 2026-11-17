///////////////////////////////////////////////////////
//     Funtion name :   ChkSmall
//     Description  :   accept character from user and check whether its small aphabate or not   
//     Input        :   F
//     Output       :   true
//     Input        :   f
//     Output       :   false
//     Author       :   Payal Machhindra Bhand
//     Date         :   17/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if(ch <= 122 && ch >= 97)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter Character : ");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small");
    }
    else
    {
        printf("It is not small");
    }

    return EXIT_SUCCESS;
}
