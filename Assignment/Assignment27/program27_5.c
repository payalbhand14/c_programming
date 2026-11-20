///////////////////////////////////////////////////////
//     Funtion name :   Reverse
//     Description  :   Accept String from user and reverse the string
//     Input        :   payal
//     Output       :   layap
//     Author       :   Payal Machhindra Bhand
//     Date         :   19/11/2026
// 
////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Reverse(char *Str)
{
    char *End = Str;
    char *Start = Str;
    char Temp = '\0'; 

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Start < End)
    {
        Temp = *Start;
        *Start = *End;
        *End = Temp;

        Start++;
        End--;
        
    }

}

int main()
{
    char arr[20];

    printf("Enter String :");
    scanf("%29[^\n]",arr);

    Reverse(arr);

    printf("Reversed String : %s\n", arr);

    return EXIT_SUCCESS;
}