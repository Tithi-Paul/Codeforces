#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int  n=0, a, b;
    cin >> a >> b;
    while(a<=b){
        a=a*3;
        b=b*2;
        n++;
    }
    cout << n << endl;

    return 0;
}



