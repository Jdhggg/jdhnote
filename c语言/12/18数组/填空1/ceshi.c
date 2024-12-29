#include <stdio.h>

int StrCmp(const char *str1, const char *str2);

int main()
{
    char a[1024], b[1024];
    int r;
    gets(a);
    gets(b);
    r = StrCmp(a, b);
    if (r > 0)
    {
        puts("a > b");
    }
    else if (r < 0)
    {
        puts("a < b");
    }
    else
    {
        puts("a == b");
    }
    return 0;
}

int StrCmp(const char *str1, const char *str2){
    int m=0;
    int p,q;
    for(int i=0;i<1024;i++){
        p=(int)str1[i];
        q=(int)str2[i];
        if(p!=q)
        {
            m++;
            break;
        }
    }
    if(m!=0){
        return p-q;
    }
    else{
        return 0;
    }
}