#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,i,j,t,x,n,k=0,flag=0,prime[100];
    char m[20],pp[20];
    float p[20],c[20];
    double e,d;
    for(i=0;i<50;i++){
        flag=0;
        for(j=2;j<i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
            if(flag==0){
                prime[k++]=i;
            }
    }
    a=prime[k-3];
    b=prime[k-10];
    n=a*b;
    t=(a-1)*(b-1);
    e=(double)prime[4];
    d=1/(float)e;
    cout<<"Key of encryption is "<<d<<" \n";
    cin>>m;
    x=strlen(m);
    cout<<"Decryption status from source to destination\n";
    cout<<"char\tnumeric\tcipher\t\tnumeric\t\tchar\n";
    for(i=0;i<x;i++){
            //cout<<m[i]<<"\t"<<m[i]-97;
            printf("%c\t%d\t",m[i],m[i]-97);
            c[i]=pow(m[i]-97,(float)e);
            c[i]=fmod(c[i],(float)n);
            //cout<<c[i]<<"\t";
            printf("%f\t",c[i]);
            p[i]=pow(c[i],(float)d);
            p[i]=fmod(p[i],(float)n);
            //cout<<p[i]<<"\t";
            printf("%f\t",p[i]);
            pp[i]=p[i]+97;
            //cout<<pp[i]<<"\n";
            printf("%c\n",pp[i]);
    }
    return 0;
}
