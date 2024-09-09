#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int missingNumber(vector<int>& array, int n) {

    int totalSum = n * (n + 1) / 2;
    
    int arrSum = 0;
    for (int i = 0; i < n; i++){
        arrSum += array[i];
    } 
    return totalSum - arrSum;
}

int main(){
    vector<int> v{1, 3, 4}; 
    int n = 4;
    cout << missingNumber(v,n); 
    return 0;
}
