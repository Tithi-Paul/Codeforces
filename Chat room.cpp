#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j, m, n, k, l;
    string s;
    cin >> s;
    m=s.size();
    for(i=0; i<m; i++){
        if(s[i]=='h'){
            for(j=i+1; j<m; j++){
                if(s[j]=='e'){
                    for(k=j+1; k<m; k++){
                        if(s[k]=='l'){
                            for(l=k+1; l<m; l++){
                                if(s[l]=='l'){
                                        for(n=l+1; n<m; n++){
                                            if(s[n]=='o'){
                                                cout << "YES" << endl;
                                                return 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        cout << "NO" << endl;
        return 0;

    }

