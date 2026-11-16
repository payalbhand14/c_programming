///////////////////////////////////////////////////////
//     Funtion name :   StrRevx
//     Description  :   accept string from user and reverse the string    
//     Input        :   payal
//     Output       :   layap
//     Input        :   fdsa
//     Output       :   asdf
//     Input        :   abcd   
//     Output       :   dcba
//     Author       :   Payal Machhindra Bhand
//     Date         :   16/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int StrRevx(char *Str)
{
    char *Start = Str;
    char *End = Str;
    char temp;

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        End--;
        Start++;

    }

}

int main()
{
    char arr[20];
    
    printf("Enter string :");
    scanf("%19[^\n]", arr);

    StrRevx(arr);

    printf("Modified string %s", arr);

    return EXIT_SUCCESS;

}