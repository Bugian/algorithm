/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int eq = -1;
        if(n == 1){
            eq = 1; 
        }
        for (int i = 1; i < n-1; i++){
            long long sum_left = 0, sum_right = 0;
            
            for(int j = 0; j < i; j++){
                sum_left += a[j];
            }
            
            for(int j = i+1; j < n; j++){
                sum_right += a[j];
            }
            
            if(sum_left == sum_right){
                eq = i+1;
                break;
            }
            
        }
        
        return eq;
    }

    int main(){
        long long a[] = {8, 8, 3, 7, 8, 2, 7, 2};
        int n = 8;
        int rez = equilibriumPoint(a,n);
        cout << rez << endl;
        return 0;
    }