/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n=1;
    double err = 0.000001;
    const double PI = 3.1415926535; 
    double sum = 0;
    

    
    while(fabs(sum - PI) > err){
        sum += 4 * (pow(-1, n+1))/(2*n-1);
        n++;
    
        
    }
    printf("%f, %d", sum, n);

    return 0;
}
