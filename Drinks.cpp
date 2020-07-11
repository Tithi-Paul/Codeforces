#include<bits/stdc++.h>
using namespace std;
int main(){
int a[1010], n,i;
float sum=0, ans;
cin >> n;
for(i=0; i<n; i++){
    cin>> a[i];
}
for(i=0; i<n; i++){
    sum=sum+a[i];
    ans=sum/n;
    }
printf("%0.12f", ans);
}

