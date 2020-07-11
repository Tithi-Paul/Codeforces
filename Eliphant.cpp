#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int  n=0, a, b;
    cin >> a;
    while(a>=5){
        a=a-5;
        n++;
    }
    if(a==1|| a==2|| a==3 ||a==4 || a==5)
        n++;
    cout << n << endl;

    return 0;
}




