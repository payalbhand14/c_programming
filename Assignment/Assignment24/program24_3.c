///////////////////////////////////////////////////////
//     Funtion name :   FirstChar
//     Description  :   accept string from user and accept character 
//                      return index of first occurance of that charcter   
//     Input        :   "Marvellous"
//                  :    e
//     Output       :    4
//     Input        :   "Marvellous"
//                  :   w
//     Output       :   -1
//     Author       :   Payal Machhindra Bhand
//     Date         :   16/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *Str, char ch)
{
    int index = 0;

    while(*Str != '\0')
    {
        if(*Str == ch)
        {
            return index;
        }
        Str++;
        index++;
    }
    return -1;
      
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String :");
    scanf("%19[^\n]s", arr);

    printf("Enter charcter :");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr,cValue);

    printf("Character location is :%d",iRet);

    return EXIT_SUCCESS;
}
