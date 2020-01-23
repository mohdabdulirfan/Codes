#include<bits/stdc++.h>
#include<string>
using namespace std;
long long concat(long long a, long long b)
{

    // Convert both the integers to string
    string s1 = to_string(a);
    string s2 = to_string(b);

    // Concatenate both strings
    string s = s1 + s2;

    // Convert the concatenated string
    // to integer
    long long c = stoll(s);

    // return the formed integer
    return c;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long a,b;
    cin>>a>>b;
    long long s=concat(a,b);
    cout<<s;
    /*for(long long i=a;i<=b;i++){


        if()
    }
}*/
}
