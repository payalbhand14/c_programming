///////////////////////////////////////////////////////
//     Funtion name :   Difference
//     Description  :   Accept String from user return diff of small and capital letters
//     Input        :   Marevellous Multi OS
//     Output       :   4
//     Author       :   Payal Machhindra Bhand
//     Date         :   19/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(char *Str)
{
    int sCount = 0;
    int cCount = 0;

    while(*Str != '\0')
    {
        if(*Str >= 'A' && *Str <= 'Z')
        {
            cCount++;
        }
        else if(*Str >= 'a' && *Str <= 'z')
        {
            sCount++;
        }
        Str++;
    }
    return (sCount - cCount);
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%19[^\n]",arr);

    iRet = Difference(arr);

    printf("Difference betwwen small and capital letters :%d",iRet);
    
    return EXIT_SUCCESS;
}