#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,d;
    cin>>s;
    d="ds";
    for(int i=0;i<s.length();i++){
        d+=s[i];
        if(s[i]=='d'||s[i]=='s'||s[i]=='e'){
            d+="*d*";
        }
    }
        d+="de";
    cout<<d;
    return 0;
}
