///////////////////////////////////////////////////////
//     Funtion name :   Checkvowels
//     Description  :   Accept String from user and checkwhether vowels are present or not
//     Input        :   Marevellous Multi OS
//     Output       :   true
//     Author       :   Payal Machhindra Bhand
//     Date         :   19/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowels(char *Str)
{
    while(*Str != '\0')
    {
        if(*Str == 'A' || *Str == 'E' || *Str == 'I' || *Str == 'O' || *Str == 'U' ||
           *Str == 'a' || *Str == 'e' || *Str == 'i' || *Str == 'o' || *Str == 'u' )
       {
            return TRUE;          
       }
       else
       {
            return FALSE;
       }
    }
}

int main()
{
    char arr[20];
    BOOL bRet = 0;

    printf("Enter string :");
    scanf("%19[^\n]",arr);

    bRet = ChkVowels(arr);

    if(bRet == TRUE)
    {
        printf("Vowels are present");
    }
    else
    {
        printf("Vowels are not present");
    }

    return EXIT_SUCCESS;
}