#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count=0;
    string s,d;
    cin>>s;
    for(int i=0;i<s.length();i++){
        d+=s[i];
        if(s[i]=='1')
            count++;
        else
            count=0;
        if(count==5){
            d+='0';
            count=0;
        }
    }
        cout<<d;
    return 0;
}
