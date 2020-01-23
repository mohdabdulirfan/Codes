#include <bits/stdc++.h>

using namespace std;
int n,m;
int dp[100];
int h(int a[],int b[],int i,int j){
    if(i>=n||j>=m){
        return 0;
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    if(a[i]==b[j])
        return dp[i]=1+h(a,b,i+1,j+1);
    int ans1=h(a,b,i+1,j);
    int ans2=h(a,b,i,j+1);
    return dp[i]=max(ans1,ans2);
}
int lcs(int a[],int b[]){
    memset(dp,-1,sizeof(dp));
    return h(a,b,0,0);
}

int main(){
    int a[n],b[m];
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<lcs(a,b)<<"\n";
    for(int i=0;i<n;i++){
        //for(int j=0;j<m;j++){
                if(dp[i]!=-1){
                    cout<<dp[i];
                }
            }
}
