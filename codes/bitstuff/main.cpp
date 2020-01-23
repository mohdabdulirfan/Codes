#include<bits/stdc++.h>
using namespace std;
#define MAX 1000


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int a[n];
    int b[MAX];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int frame;
    cin>>frame;
    int i=0,j=0,count=0;
    while(i<frame){
        if(a[i]==1){
            b[j]==a[i];
            for(int k=i+1,count=0;count<5,a[k]!=0,k<frame;k++){
                j++;
                b[j]=a[k];
                count++;
                if(count==5){
                    j++;
                    b[j]=0;
                }
                i=k;
            }
    }
    else{
        b[j]=a[i];
    }
    i++;j++;
    }
    cout<<"After framing:\n";
    int no=sizeof(b)/sizeof(b[0]);
    for(int i=0;i<no;i++){
            cout<<b[i]<<" ";
    }
    return 0;
}
