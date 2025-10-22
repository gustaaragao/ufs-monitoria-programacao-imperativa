#include <stdio.h>

int main() {
    int f, i; scanf("%d %d", &f, &i);
    int resp = 0;
    if (f >= 150 && i >= 12) {
        resp++;
    }  
    if (f >= 140 && i >= 14) {
        resp++;
    }  
    if (f >= 170 || i >= 16) {
        resp++;
    } 
    printf("%d\n", resp); 
    return 0;
}