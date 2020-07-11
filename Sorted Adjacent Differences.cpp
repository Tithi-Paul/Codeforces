#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, i, a, X;
    cin >> t;
    while(t--){
    vector<int>V;
    vector<int>W;
    cin>> n;
    for(i=0;i<n; i++){
        cin >> a;
        V.push_back(a);
    }
   /* for(i=0;i<n; i++){
        cout << V[i];
    }*/
    sort(V.begin(), V.end());
    int s=n-1,  c=1, m=0;
    while(s>=m){
        if(c%2==1){
            X=V[m];
            m++;
        }
        else{
            X=V[s];
            s--;
        }
        c++;
        W.push_back(X);
    }
    while(!W.empty()){
    int p= W.back();
    cout << p <<" "  ;
    W.pop_back();
    }
    cout << endl;
   }
}
