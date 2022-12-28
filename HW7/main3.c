/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for (int i=1, j=0; i<=9; ) {
        printf("%d*%d=%d\t", i, j, i*++j);
        (j==9) ? (i++, j=0, printf("\n")) : i ;
    }

    return 0;
}
