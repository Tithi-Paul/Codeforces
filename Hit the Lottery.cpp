#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, m, flag=0;
    cin >> n;
    while(n>0){
        if(n>=100){
            flag++;
            n=n-100;
        }
        if(n>=20 && n<100){
            flag++;
            n=n-20;
        }
        if(n>=10 && n<20){
            flag++;
            n=n-10;
        }
        if(n>=5 && n<10){
            flag++;
            n=n-5;
        }
        if(n>=1 && n<5){
            flag++;
            n=n-1;
        }
        //cout << n << " ";
    }
    cout << flag << endl;
    return 0;
}

