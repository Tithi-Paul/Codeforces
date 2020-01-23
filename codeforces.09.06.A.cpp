#include<bits/stdc++.h>
using namespace std;
int main()
{

    int q;
    long long int n, count;
    cin >> q;
    while(q--){
            count=0;
        cin >> n;
        while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else if((n*2)%3==0){
            n= (n*2)/3;
        }
        else if((n*4)%5==0){
            n=(n*4)/5;
        }
        else
            break;
        count++;
    }
    if(n==1)
        cout << count << endl;
    else
        cout << "-1" << endl;
}
return 0;
}
