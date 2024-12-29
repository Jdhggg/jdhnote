#include<stdio.h>
void ok(int *t,int *v){
    int temp;
    temp=*t;
    *t=*v;
    *v=temp;
}
int main()
{
    int n,p,q,z,x;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);}

     for(int k=0;k<n;k++){
        printf("#%d\n",a[k]);
    }

    p=q=a[0];
    for(int j=0;j<n;j++){
        if(a[j]>p){
            p=a[j];
            z=j;
        }
        if(a[j]<q){
            q=a[j];
            x=j;
        }
    }
    printf("---x ---%d\n",x);
    printf("---z ---%d\n",z);
    ok(&a[0],&a[x]);

     for(int k=0;k<n;k++){
        printf("*%d\n",a[k]);
    }

    ok(&a[n-1],&a[z]);
    
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
    return 0;
}