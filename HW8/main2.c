/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
int main() {
    int i = 15;
    int flag = 1;
    int qty = 0;
    for (int j = 0; j < sizeof(i) * 8; j++) {
        if (i & flag) {
            qty++;
        }
        flag = flag << 1;
    }
    char beVerb1[] = "is";
    char beVerb2[] = "are";
    printf("There %s %d binary '1' in the number i = %d.\n", 
        qty == 1 ? beVerb1 : beVerb2, qty, i);
    return 0;
}
