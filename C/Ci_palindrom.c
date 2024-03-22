/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char* arr = (char*)malloc(sizeof(char) * 100);
    scanf("%s", arr);
    int length = strlen(arr);
    int s;
    for (int i = 0; i < length/2; i++){
        if(arr[i] == arr[length - i - 1]){
            s++;
        }
    }
    if(s == length/2){
        printf("palindrom");
    }
    else{
        printf("nu este palindrom");
    }
    return 0;
}

