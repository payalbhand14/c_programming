
///////////////////////////////////////////////////////
//     Funtion name :   ChkCapital
//     Description  :   accept character from user and check whether its capital aphabate or not   
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

BOOL ChkCapital(char ch)
{
    if(ch <= 90 && ch >= 65)
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

    printf("Enter characer :");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not a capital character");
    }

    return EXIT_SUCCESS;
}