#include<bits/stdc++.h>
using namespace std;

int query(int l,int r){
     cout<<"? "<<l<<" "<<r<<endl;
     int ans;
     cin>>ans;
     return ans;
}

void print(int ans){
    cout<<"! "<<ans<<endl;
}

int main()
{
   int n;
   cin>>n;
   int l=1,r=n;
   while(l<=r)
   {
      int mid=(l+r)>>1;
      cout<<"? "<<l<<" "<<mid<<endl;
      int fuhao;
      cin>>fuhao;
      if(fuhao==1)
      {
        l=mid+1;
      }
      else if(fuhao==-1)
      {
        r=mid-1;
      }
      else
      {
         int aa=query(l,l);
         int bb=query(mid,mid);
         if(aa==0)
         {
             print(l);
             return 0;
         }
         else
         {
             print(mid);
             return 0;
         }
      }
   }
    return 0;
}
/*
3
-1
0




*/