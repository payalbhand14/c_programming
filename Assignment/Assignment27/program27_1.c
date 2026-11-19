///////////////////////////////////////////////////////
//     Funtion name :   CountCapital
//     Description  :   Accept String from user count the number of capital letter
//     Input        :   Marevellous Multi OS
//     Output       :   4
//     Author       :   Payal Machhindra Bhand
//     Date         :   19/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *Str)
{
    int iCount = 0;

    while(*Str != '\0')
    {
    if(*Str <= 'Z' && *Str >= 'A')
    {
        iCount++;
    }
    Str++;
    }
    return iCount;
}
    

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String :");
    scanf("%19[^\n]",arr);

    iRet = CountCapital(arr);

    printf("Number of capital letters :%d\n",iRet);
    
    return EXIT_SUCCESS;

}
