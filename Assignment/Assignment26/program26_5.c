///////////////////////////////////////////////////////
//     Funtion name :   ChkSpecial
//     Description  :   Accept charcter from user and Display ASCII values in 
//                      Decimal, octal and hexadecimal format 
//     Input        :   A
//     Output       :   decimal      65
//                      octal        0101
//                      hexadecimal  0x41
//     Author       :   Payal Machhindra Bhand
//     Date         :   18/11/2026
// 
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>


void Display(char ch)
{
    printf("Decimal :%d\n",((unsigned char)ch));
    printf("Octal :0%o\n",((unsigned char)ch));
    printf("Hexadeciaml :0x%x\n",((unsigned char)ch));

}

int main()
{
    char cValue = '\0';

    printf("Enter Character :");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}