#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>V;
    int n;
    cin>>n;
    for(int i = 0 ; i  < n; i++){
        int x,y;
        cin>>x>>y;
        V.push_back(make_pair(x,y));
    }
    for(int i = 0 ; i < n; i++){
        cout<<V[i].first <<" "<< V[i].second<<endl;
    }
    /*
    input
    3
    20 30
    2 6
    -10 -20
    */
}
