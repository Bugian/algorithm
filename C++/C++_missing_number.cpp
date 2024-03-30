#include <stdlib.h>
#include <vector>
#include <bits/stdc++.h> 

using namespace std;

int missingNumber(vector<int>& array, int n) {
        // Your code goes here
    sort(array.begin(), array.end());
    int control = 1;
    int view;
    for(int i = 0; i < n-1; i++){
        if(array[i] == control){
            control++;
            view = array[i];
            continue;
        }
        else{
            break;
        }
    }
    cout << control << endl;
    return control;
}


int main(){
    vector<int> v{1, 2};
    //sorted array {1,2,3,4,5,6,7,8,10};
    int n = 3;
    missingNumber(v,n);
    
    
    return 0;
}
