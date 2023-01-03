/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#include <stdio.h>
int main() {
    int rows = 10;
    int base = rows * 2 - 1;
    for (int i = 0; i < base * rows; i++) {
        int r = i % base;
        if (r < rows - i / base - 1) {
            printf("  ");
        } else if (r > base - rows + i / base) {
            i = (i / base + 1) * base - 1;
            printf("\n");
        } else {
            printf(" *");
        }
    }
    printf("\n");
    return 0;
}


