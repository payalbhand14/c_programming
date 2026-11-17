///////////////////////////////////////////////////////
//     Funtion name :   DisplaySchedule
//     Description  :   accept Dividion of Student and display exam time   
//     Input        :   c
//     Output       :   your exam time is 9.20am
//     Input        :   a
//     Output       :   your exam time is 7am
//     Author       :   Payal Machhindra Bhand
//     Date         :   17/11/2026
// 
////////////////////////////////////////////////////////////

// a --> 7 am , b -->8.30 am , c --> 9.20 am , d --> 10.30

#include<stdio.h>
#include<stdlib.h>


void DisplaySchedule(char chDiv)
{
    if(chDiv == 'a' || chDiv == 'A')
    {
        printf("your exam time is 7am");
    }
    else if(chDiv == 'b' || chDiv == 'B' )
    {
        printf("your exam time is 8.30 am");
    }
    else if(chDiv == 'c' || chDiv == 'C' )
    {
        printf("your exam time is 9.20 am");
    }
    else if(chDiv == 'd' || chDiv == 'D' )
    {
        printf("your exam time is 10.30 am");
    }
    else
    {
        printf("Invalid Division");
    }
    
}

int main()
{
    char cValue = '\0';
    
    printf("Enter Division :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return EXIT_SUCCESS;
}