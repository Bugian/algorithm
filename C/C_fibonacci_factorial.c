/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int factorial(int n){
    int prod = 1;
    for(int i = 1; i<=n; i++){
        prod *= i;
    }
    return prod;
    //printf ("\n%d", prod);
    
}

double sir(int n, int x){
    double sum = 1;
    for(int i = 1; i<n; i++){
        sum += (pow(x,i))/factorial(i);
    }
    return sum;
}

int main()
{
    int n, v1 = 0, v2 = 1, temp;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        printf("%d ", v2);
        temp = v1;
        v1 = v2;
        v2 += temp;
        
    }
    printf("\n%d", factorial(n));
    printf ("\n%f", sir(n,5));

    return 0;
}
