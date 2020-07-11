#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m, res, flag=0;
    cin >> n >> m;
    res =min(n, m);
    if(res%2==0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
}

