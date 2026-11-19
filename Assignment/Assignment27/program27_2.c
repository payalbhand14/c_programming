///////////////////////////////////////////////////////
//     Funtion name :   CountSmall
//     Description  :   Accept String from user count the number of Small letter
//     Input        :   Marvellous 
//     Output       :   9
//     Author       :   Payal Machhindra Bhand
//     Date         :   19/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountSmall(char *Str)
{
    int iCount = 0;

    while(*Str != 0)
    {
        if(*Str >= 'a' && *Str <= 'z')
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

    iRet = CountSmall(arr);

    printf("Number of small letters :%d\n",iRet);

    return EXIT_SUCCESS;
}