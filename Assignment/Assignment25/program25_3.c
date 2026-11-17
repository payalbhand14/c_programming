///////////////////////////////////////////////////////
//     Funtion name :   ChkDigit
//     Description  :   accept character from user and check whether its digit or not   
//     Input        :   9
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

BOOL ChkDigit(char ch)
{
    if(ch <= '9' && ch >= '0')
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

    printf("Enter Character :");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return EXIT_SUCCESS;
}