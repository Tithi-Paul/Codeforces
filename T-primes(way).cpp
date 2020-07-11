#include<bits/stdc++.h>
using namespace std;
int a[1000006];
int main(){
    int n, i, flag=0,j;
    cin >> n;
    for(i=1; i<=1000007; i++){
        cin >> a[i];
    }
    for(i=1; i<=1000007; i++){
        for(j=2; j<=1000007; j++){
            if(a[i]%j==0)
                a[i]=0;
            else
                a[i]=1;
        }
    }
    //for(i=1; i<=10; i++)
       // cout << a[i] << " ";
    while(n--){

    root= sqrt(n);
    if()

}


