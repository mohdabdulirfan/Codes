#include <bits/stdc++.h>
using namespace std;
int dp[100][100];
int h(string s1,string s2,int i,int j)
{
    if(i>=s1.length()||j>=s2.length())
    {
        return  0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    if(s1[i]==s2[j]){
        return dp[i][j]=1+h(s1,s2,i+1,j+1);
    }
    int ans1=h(s1,s2,i+1,j);
    int ans2=h(s1,s2,i,j+1);
    return dp[i][j]=max(ans1,ans2);

}

int lcs(string s1,string s2)
{
    memset(dp,-1,sizeof(dp));
    return h(s1,s2,0,0);

}
int main()
{
    cout << "Hello world!" << endl;
    string s1,s2;
    cin>>s1>>s2;
    cout<<lcs(s1,s2);
    return 0;
}
