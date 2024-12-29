#include <stdio.h>

int main() {
    int n, b;
    scanf("%d %d", &n, &b);
    int shu[n];
    int found = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &shu[i]);
        if (shu[i] == b) {
            printf("%d", i);
            found = 1; 
            break;
        }
    }
    
    if (!found) {
        printf("Not Found");
    }
    
    return 0;    
}
