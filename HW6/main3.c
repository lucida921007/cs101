/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


   int main()
{
    int year = 2022;
    if (year%4 == 0 & year%100 != 0) {
        printf("True");
    } else if (year%400 == 0) {
        printf("True");
    } else  {
        printf("false");
    }
    return 0;


}

