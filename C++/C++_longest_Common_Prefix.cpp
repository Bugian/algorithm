#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        if(N == 0) return "-1";
        string prefix = arr[0];
        for(int i = 1; i < N; i++){
            string current = arr[i];
            int j = 0;
            
            while (j < prefix.size() && j < current.size() && 
                    prefix[i] == current[i]){
                        j++;
                    }
            prefix = prefix.substr(0, j);
        }
        return prefix;
    }

int main()
{
    
        int n = 5;
        string arr[5] = {"abcdwef", "abcdwef", "abcdwefg", "abcdw", "abcdww"};
        cout << longestCommonPrefix (arr, n);
}
