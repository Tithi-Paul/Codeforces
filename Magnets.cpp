#include<bits/stdc++.h>
using namespace std;
//print the number of groups of magnets.
int main(){
    long long int n, i, m=0, j, a[100005];
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    for(i=0; i<n-1; i++){
            if(a[i]!=a[i+1])
                m++;
    }
        cout << m+1 << endl;
}
