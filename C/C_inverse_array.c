/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* s = (char*)malloc(sizeof(char) * 10);
    fgets(s, 10, stdin);
    int length = strlen(s);

    for (int i = 0; i < length/2; i++){
        char temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
        
    }
    puts(s);
    free(s);
}
