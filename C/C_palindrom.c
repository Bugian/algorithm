/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

_Bool palindrom(char* c){
    int length = strlen(c);
    int s;
    for (int i = 0; i < length/2; i++){
        if(c[i] == c[length - i - 1]){
            s++;
        } else {
            return 0;
        }
    }
    return 1;
} 

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
    
    //functie
    char str[] = "radar";
    
    palindrom(str);
    printf("\n%d", palindrom(str));
    return 0;
}



