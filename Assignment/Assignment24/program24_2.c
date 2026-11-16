///////////////////////////////////////////////////////
//     Funtion name :   CountChar
//     Description  :   accept string from user and accept character 
//                      return frequency  
//     Input        :   "Marve8llous"
//                  :    e
//     Output       :    1
//     Input        :   "Marvellous"
//                  :    w
//     Output       :   0
//     Author       :   Payal Machhindra Bhand
//     Date         :   16/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *Str, char ch)
{
    int iCount = 0;

    while(*Str != '\0')
    {
        if(*Str == ch)
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
    char cValue;
    int iRet = 0;

    printf("Enter String :");
    scanf("%19[^\n]s",arr);

    printf("Enter Character :");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);

    printf("Frequency of character is :%d",iRet);

}