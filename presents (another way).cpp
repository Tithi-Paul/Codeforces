#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i, k, a[105];
    cin>>n;
   for(i=1;i<=n;i++)
   {
   	 cin>>k;
   	 a[k]=i;
   }
   for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
