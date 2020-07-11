#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,c, p, flag=9999, i;
    vector<int>v;
    cin>> n >> m;
    for(i=0; i<m; i++){
        cin >> p;
        v.push_back(p);
    }
    sort(v.begin(), v.end());
   /*for(i=0; i<m; i++)
        cout << v[i] << " ";*/
    for(i=n-1; i<m; i++){
        c=v[i]-v[i-(n-1)];
        if(c<flag)
            flag=c;
    }
    cout << flag;


}
