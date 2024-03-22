#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char* s = (char*)malloc(sizeof(char) * 10);
    
    // scanf("%s", s);
    fgets(s, 10
    , stdin);
    for(int i = 0; i < 10; i++){
        if (s[i] > 96 && s[i] < 123){
            s[i] -= 32;
        }
        // else if(s[i] == 32){
        //     s[i] = s[i];
        // }
        
    }
    puts(s);
}