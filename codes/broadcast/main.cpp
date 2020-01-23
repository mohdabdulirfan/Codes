#include<bits/stdc++.h>
using namespace std;
int nv, ne;
void printGraph(map< int, vector<int> > g)
{
    for(int i=0;i<nv;i++)
    {
        cout<<i<<" : ";
        for(int j=0;j<g[i].size();j++)
        {
            sort(g[i].begin(),g[i].end());
            cout<<g[i][j]<<" ";
        }
         cout<<"\n";
    }
cout<<"\n";
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    scanf("%d", &t);
    while(t--){

    scanf("%d %d", &nv, &ne);
    map< int, vector<int> > g;
    for(int i=0;i<ne;i++)
    {
    int u, v;
    scanf("%d %d", &u, &v);
    g[u].push_back(v);
    //g[v].push_back(u);
    }
    printGraph(g);
    printf("\n");
    }
    return 0;
}
