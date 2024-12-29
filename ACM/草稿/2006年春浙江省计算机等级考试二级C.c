#include <stdio.h>
int main()
{
    int cj;
    int _85=0,_60_84=0,_60=0;
    while(scanf("%d",&cj) == 1)
    {
        if (cj <= 0)
            break;
        if (cj >= 85)
            _85++;
        else if (cj >= 60 && cj <= 84)
            _60_84++;
        else 
            _60++;
    }
    printf(">=85:%d\n60-84:%d\n<60:%d\n",_85,_60_84,_60);
}
