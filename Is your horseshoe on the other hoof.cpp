#include<bits/stdc++.h>
using namespace std;
int main(){
        set<int>s;
        long long int n, i, sum=0, flag=0;
        long long int a[10];
        for(i=0; i<4; i++){
            cin >> a[i];
        }
        for(i=0; i<4; i++){
            s.insert(a[i]);
        }
        n=s.size();
        cout << 4-n << endl;
}



