#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	char a;
	int i, j, l;
	cin >> s;
	l= s.length();

	for (i = 0; i < l; i++)
        {
            for (j = i + 1; j < l; j++)
            {
               // if(s[i]>0){

                if (s[i] > s[j])
                {
                    a =  s[i];
                    s[i] = s[j];
                    s[j] = a;

                }
                //}

            }

        }
        for (i = 1; i < l-1; ++i){
          if(s[i]=='+')
            continue;
           cout << s[i] << "+";

        }
        cout << s[l-1];
}
