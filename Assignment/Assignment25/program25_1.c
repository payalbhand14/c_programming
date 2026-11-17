
///////////////////////////////////////////////////////
//     Funtion name :   ChkAlpha
//     Description  :   accept character from user and check whether its alphabet or not  
//     Input        :   F
//     Output       :   true
//     Input        :   &
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

BOOL ChkAlpha(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
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
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter Character :");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character ");
    }
    else
    {
        printf("It is not a character");
    }

    return EXIT_SUCCESS;
}