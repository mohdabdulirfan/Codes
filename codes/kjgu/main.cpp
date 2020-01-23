
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int length(string str)
{
    int i=0;
    while(str[i]!='\0')
    {
        ++i;
    }
    return i;
}
int main()
{
  int n,p,q,i=1,count=0;
  cin>>n;
  string s;
  cout<<"Enter the string"<<endl;
  cin>>s;
  int len=length(s);
  while(len==n)
  {
      cout<<"Enter the query"<<endl;
      cin>>q;
      while(i<=q)
      {
          cout<<"enter the pos:"<<endl;
          cin>>p;
          char ch=s[p];
          for(i=0;i<p;i++)
            if(ch==s[i])
          {
              count++;
          }
          cout<<count<<endl;
      }
  }
  return 0;
}
