#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, n, m;
    cin>> a >> b;
    if(a>b){
        n=b;
        m=(a-b)/2;
    }
    else if(b>a){
        n=a;
        m=(b-a)/2;
    }
    else{
        n=a;
        m=0;
    }
    cout << n << " " << m;
}
