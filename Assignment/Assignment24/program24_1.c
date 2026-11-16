///////////////////////////////////////////////////////
//     Funtion name :   CharChk
//     Description  :   accept string from user and accept character 
//                      check character is present in string og not  
//     Input        :   "Marve8llous"
//                  :    e
//     Output       :    true
//     Input        :   "Marvellous"
//                  :    w
//     Output       :   false
//     Author       :   Payal Machhindra Bhand
//     Date         :   16/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CharChk(char *Str , char ch)
{
   while(*Str != '\0')
   { 
    if(*Str == ch)
    {
        return TRUE;
    }
    Str++;
   }

   return FALSE;
}



int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%19[^\n]", arr);

    printf("Enter character :");
    scanf(" %c",&cValue);

    bRet = CharChk(arr,cValue);

    if(bRet == FALSE)
    {
        printf("Character is not present");
    }
    else
    {
        printf("Character is present");
    }

    return EXIT_SUCCESS;

}
