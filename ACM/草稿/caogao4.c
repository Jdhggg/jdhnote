#include <stdio.h>

int main() 
    {
        int a, sum = 0, count_positive = 0, count_negative = 0;
        for (int i = 0; i < 20; i++) 
    {
        scanf("%d", &a);

        if (a > 0) {
            sum += a;           
            count_positive++;   
        } else if (a < 0) {
            count_negative++;  
        }
    }


    printf("%d\n", count_negative);

  
    if (count_positive > 0) 
    {
        printf("%.2f\n", (double)sum / count_positive); 
    } 
        else 
    {
        printf("0.00\n"); 
    }

    return 0;
}

/*
1 2 3 4 5 6 7 8 9 10 11
-2 -3 -4 -5 -6 -7 -8 -9 -10
*/