///////////////////////////////////////////////////////
//     Funtion name :   DisplayDigit
//     Description  :   accept string from user and display in upper case 
//     Input        :   "Marve8llous 123"
//     Output       :   8123
//     Input        :   "Marvellous"
//     Output       :   
//     Author       :   Payal Machhindra Bhand
//     Date         :   15/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

void DisplayDigit(char *Str)
{
    while(*Str != '\0')
    {
        if(*Str >= '0' && *Str <= '9')
        {
            printf("%c",*Str);
        }
        
        Str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String:");
    scanf("%49[^\n]",arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}