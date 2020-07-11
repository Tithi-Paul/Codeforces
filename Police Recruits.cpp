#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, events, crime, hiring=0, untreated=0;
    cin >> events;
    for(i=0; i<events; i++){
        cin >> crime;
        if(crime == -1 && hiring == 0)
            untreated++;
        else
            hiring = hiring + crime;
    }
    cout << untreated << endl;
    return 0;
}
