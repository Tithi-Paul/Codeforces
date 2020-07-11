#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n, i, flag=0, a[500];
    string s;
    cin>> t;
    while(t--){
        cin >> n;
        while(n!=0){
            flag++;
            n=n/10;
            a[i]= n;
        }
        cout << flag << endl;
        for(i=0; i<=flag; i++)
            cout << a[i] << " ";
    }
}
