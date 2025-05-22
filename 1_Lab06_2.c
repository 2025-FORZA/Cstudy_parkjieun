#define _CRT_SECURE_NO_WARNINGSf
#include <stdio.h>
#include <string.h>


int main() {
    char S[100];
    scanf("%s", S);

    int position[26];
    for (int i = 0; i < 26; i++) {
        position[i] = -1;
    }
    
    int len = strlen(S);

    for (int j = 0; j < len; j++) {
        char alphabet = S[j];
      
        if (position[alphabet - 'a'] == -1)
            position[alphabet - 'a'] = j;
        else
            continue; 
    }

    for (int k = 0; k < 26; k++) {
        printf("%d ", position[k]);
    }
}