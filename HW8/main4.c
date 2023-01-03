/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int round_func(float f) {
    int value = f + (((int) (f * 10)) % 10) / 5;
    printf("%f -> %d\n", f, value);
    return value;
}

int main() {
    round_func(1.4);
    round_func(2.6);
    round_func(2.34);
    round_func(9.2344567789);
}


