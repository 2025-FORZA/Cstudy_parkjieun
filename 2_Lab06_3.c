#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y); 

    int month_days[12] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };


    char* days[7] = {
        "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"
    };

    int total_days = 0;
    for (int i = 0; i < x - 1; i++) {
        total_days += month_days[i];  
    }
    total_days += y;  

    printf("%s\n", days[total_days % 7]);

    return 0;
}