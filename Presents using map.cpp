#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>a;
    int n,i, k;
    cin>>n;
   for(i=1;i<=n;i++)
   {
   	 cin>>k;
   	 a[k]=i;
   }
   for(i=1;i<=n;i++)
    cout<<a[i]<<" ";
}
