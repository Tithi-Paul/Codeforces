#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>V;
    int n, s;
    cin>> s >> n;
    for(int i = 0 ; i  < n; i++){
        int x,y;
        cin>>x>>y;
        V.push_back(make_pair(x,y));
    }
    /*for(int i = 0 ; i < n; i++){
        cout<<V[i].first <<" "<< V[i].second<<endl;
    }*/
    sort(V.begin(), V.end());
    for(int i = 0 ; i  < n; i++){
        if(s>V[i].first){
            s=s+V[i].second;
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}

