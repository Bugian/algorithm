/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matrice;
    int n, m;
    printf("randuri = ");
    scanf("%d", &n);
    printf("coloane = ");
    scanf("%d", &m);
    
    matrice = (int**)malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++){
        matrice[i] = (int*)malloc(sizeof(int) * m);
    }
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("elementul[%d][%d]: ", i+1,j+1);
            scanf("%d", &matrice[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < n; i++){
        free(matrice[i]);
    }
    free(matrice);

    return 0;
}
