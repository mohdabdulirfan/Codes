#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        string thor_words[n];
        for(int i=0;i<n;i++){
            cin>>thor_words[i];
        }
        int mt=0;
        for(int i=0;i<n;i++){
            char c=thor_words[i][0];
            cout<<c<<"\n";
            mt+='c';
        }

        string loki_words[m];
        for(int i=0;i<m;i++){
            cin>>loki_words[i];
        }
        int ml=0;
        for(int i=0;i<m;i++){
            char x=loki_words[i][0];
            cout<<x<<"\n";
            ml+='x';
        }
        cout<<mt;
        cout<<"\n"<<ml;
        if(mt > ml){
            cout<<"Thor";
        }
        else if(mt < ml){
            cout<<"Loki";
        }
        else{
            cout<<"None";
        }
    }
    return 0;
}
