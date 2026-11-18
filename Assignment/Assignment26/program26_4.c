///////////////////////////////////////////////////////
//     Funtion name :   ChkSpecial
//     Description  :   Accept charcter from user and check special symbol 
//                      !   @   #   $   %   ^   &   * 
//     Input        :   &
//     Output       :   TRUE
//     Author       :   Payal Machhindra Bhand
//     Date         :   18/11/2026
// 
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if(ch == '!' ||  ch == '@'||  ch == '#' ||  ch == '$' ||  
       ch == '%'||  ch == '^' ||  ch == '&' ||  ch == '*')
    {
        return TRUE;
    }
    return FALSE;

}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE; 

    printf("Enter Character :");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special symbol");
    }
    else
    {
        printf("It is not special symbol");
    }

    return EXIT_SUCCESS;
}