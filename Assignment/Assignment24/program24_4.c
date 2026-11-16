///////////////////////////////////////////////////////
//     Funtion name :   lastChar
//     Description  :   accept string from user and accept character 
//                      return index of last occurance of that charcter   
//     Input        :   "Marvellous"
//                  :    e
//     Output       :    4
//     Input        :   "Marvellous"
//                  :   w
//     Output       :   -1
//     Input        :   "Marvellous Multi"
//                  :   
//     Output       :   11
//     Author       :   Payal Machhindra Bhand
//     Date         :   16/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *Str, char ch)
{
    int index = 0;
    int iLast = -1;

    while(*Str != 0)
    {
        if(*Str == ch)
        {
            iLast = index;
        }
        Str++;
        index++;
    }
    return iLast;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string :");
    scanf("%19[^\n]", arr);

    printf("Enter character :");
    scanf(" %c",&cValue);

    iRet = LastChar(arr , cValue);

    printf("Charcter location is :%d",iRet);

    return EXIT_SUCCESS;

}
