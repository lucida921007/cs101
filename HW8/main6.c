/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void print_house(int n);
void print_roof(int n);
void print_block(int n);
void print_stars(int n);
void print_spaces(int n);

int main() {
    int n = 4;
    print_house(n);
}


void print_house(int n) {
    print_roof(n);
    print_block(n);
}

void print_roof(int n) {
    for (int i = 0; i < n; i++) {
        print_spaces(n - i - 1);
        print_stars(i * 2 + 1);
        printf("\n");
    }
    return;
}

void print_block(int n) {
    int m = n * 2 - 1;
    print_stars(m);
    printf("\n");

    for (int i = 0; i < n; i++) {
        print_stars(1);
        print_spaces(m - 2);
        print_stars(1);
        printf("\n");
    }

    print_stars(m);
    printf("\n");

    return;
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


