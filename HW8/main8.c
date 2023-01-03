/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_stars(int n);
void print_spaces(int n);
void print_the_triangle(int n);

int main() {
    int i = 4;
    print_the_triangle(i);
}



void print_stars(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    return;
}

void print_spaces(int n) {
    if (n > 0) {
        printf("%*c", n, ' ');
    }
    return;
}

void print_the_triangle(int n) {
    for (int i = 0; i < n * 2 - 1; i++) {
        int count = i > (n-1) ? i - (n-1) : (n-1) - i;
        print_spaces(n - 1 - count);
        print_stars(count * 2 + 1);
        printf("\n");
    }
    return;
}

