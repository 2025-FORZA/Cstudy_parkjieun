#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int height[1001];
    for (int i = 0; i < N; i++) {
        scanf("%d", &height[i]); 
    }

    int max_up = 0;     
    int current = 0;   

    for (int i = 1; i < N; i++) {
        if (height[i] > height[i - 1]) {
            current += height[i] - height[i - 1];
        }
        else {
            if (current > max_up)
                max_up = current;
            current = 0;  
        }
    }
    if (current > max_up)
        max_up = current;

    printf("%d\n", max_up);
    return 0;
}