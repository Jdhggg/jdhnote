#include <stdio.h>
#include <math.h>
int prime(int x) {
    if (x <= 1) {
        return 0; 
    }
    for (int i = 2; i <= sqrt(x); i++) { 
        if (x % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int count = 0;

    printf("21\n");
    for (int x = 100; x <= 200; x++) {
        if (prime(x)) {
            if (count == 0) {
                printf("%d", x); 
            } else {
                printf(" %d", x); 
            }
            count++;
        }
    }
    return 0;
}
