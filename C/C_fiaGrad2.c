/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

double grad2(int a, int b, int c){
    double x1, x2, delta;
    if(a != 0){
        delta = b*b - 4*a*c;
        if(delta>0){
            x1 = (-b - sqrt(delta))/(2*a);
            x2 = (-b + sqrt(delta))/(2*a);
            printf ("%.2f, %.2f", x1, x2);
            
        }
        else if (delta == 0){
            x1 = -b/(2*a);
            printf ("%.2f", x1);
        }
        else{
            printf ("\ndelta < 0");
        }
    }
    else{
        if (b != 0){
            x1 = -(double)c/b;
            printf("\n%.2f", x1);
        }
        else{
            printf("\nnu se poate calcula");
        }
        
    }
    
    return 0;
}

int main()
{
    grad2(3,4,5);

    return 0;
}
