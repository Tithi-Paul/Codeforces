#include<bits/stdc++.h>
using namespace std;
int main(){
    set<char>s;
    string a;
    int n, m, l, i, x;
    cin >> n;
    cin >> a;
    for(i=0; i<n; i++){
        if(a[i]>='A' && a[i]<='Z'){
            a[i]=a[i]+32;
            s.insert(a[i]);
        }
        else if(a[i]>='a' && a[i]<='z'){
            s.insert(a[i]);
        }
    }
    /*for(auto i : s){
        cout<<i<<" ";
    }
     cout<<endl;*/
     l=s.size();
     if(l==26)
        cout << "YES" << endl;
     else
        cout << "NO" << endl;
}


