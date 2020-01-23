#include <iostream>

using namespace std;
int diff(int a,int b)
{
    int sub=0;
    if(a>b){
        sub=a-b;
    }
    else{
        sub=b-a;
    }
    return sub;
}

int main()
{
    int n,t;
    cin>>n;
    int arr[n][n];
    cout<<"Enter the elements\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<"\n";
    }
    int diag=0,sum_a=0,sum_b=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum_a+=arr[i][j];
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n;j++){
                if(i+j==(n-1)){
            sum_b+=arr[i][j];
        }}
    }
    //cout<<sum_a<<" - "<<sum_b<<" = \n";
    t=diff(sum_a,sum_b);
    cout<<t;
    return 0;
}
