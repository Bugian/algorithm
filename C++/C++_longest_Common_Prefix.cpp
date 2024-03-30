//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string test1 = arr[0], test2;
        string rez = "";
        string rasp;
        for(int i = 0; i < N-1; i++){
            test2 = arr[i+1];
            for(int j = 0; j < test1.length(); j++){
                if(test1[j] == test2[j]){
                    rez += test1[j];
                } else{
                    break;
                }
            }
            if(rasp != "" && rez.length() > rasp.length()){
                rez = rasp;
            }
            rasp = rez;
            rez = "";
            if(rasp == ""){
                rasp = "-1";
                break;
            }
        }
        
        if(N == 1){
            rasp = arr[0];
        }
            
        return rasp;
    }


//{ Driver Code Starts.
int main()
{
    
        int n = 5;
        string arr[5] = {"abcdef", "abcdef", "abcdefg", "ab", "abc"};
        cout << longestCommonPrefix (arr, n);
}

// Contributed By: Pranay Bansal

// } Driver Code Ends