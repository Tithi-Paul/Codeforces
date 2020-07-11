#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c,n,p=0, X[106], i;
    cin >> a >> b >> c;
    X[0]=a+b+c;
    X[1]=a*b*c;
    X[2]=(a+b)*c;
    X[3]= a*(b+c);
    X[4]=a*b+c;
    X[5]=a+b*c;
    for(i=0; i<=5; i++)
        if(X[i]>p){
            p=X[i];
        }
        cout << p << endl;
}
