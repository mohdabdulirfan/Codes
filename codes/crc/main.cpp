#include <bits/stdc++.h>

using namespace std;

int main()
{
    int dlen,glen;
    string data,gen,temp,rem,gent1,qout;
    cout<<"Enter the data\n";
    cin>>data;
    for(int i=0;i<data.length();i++){
        if(data[i]=='0'||data[i]=='1')
            continue;
        else
            exit(0);
    }
    cout<<"Enter the generator\n";
    cin>>gen;
    for(int i=0;i<gen.length();i++){
        if(gen[i]=='0'||gen[i]=='1')
            continue;
        else
            exit(0);
    }
    if(data.length()+gen.length()<12){
            exit(0);
    }
    strcpy(temp,data);
    dlen=data.length();
    glen=gen.length();
    for(int i=dlen-1;i<glen-1;i++){
        temp+='0';
    }
    cout<<temp;










    return 0;
}
