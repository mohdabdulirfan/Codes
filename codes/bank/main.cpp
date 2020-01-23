#include <iostream>

using namespace std;
int maxi(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    //cout << "Hello world!" << endl;
    int t,n,k,x,d,m=0,sum=0,per=0;
    cin>>t;
    int q=0;
    while(q<t)
    {
        cin>>n>>k>>x>>d;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            per=arr[i]*(x*0.01);
            m=maxi(k,per);
            sum+=m;
        }
        if(d<sum)
        {
            cout<<"\nUpfront";
        }
        else
        {
            cout<<"\nFee";
        }
        q++;
    }
    return 0;
}
