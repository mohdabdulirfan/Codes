#include <bits/stdc++.h>

using namespace std;
struct node{
    unsigned dist[20];
    unsigned from[20];
}rt[10];
int main()
{
    int dmat[20][20];
    int n,i,j,k,count=0;
    cout<<"Enter the no. of nodes\n";
    cin>>n;
    cout<<"\nenter the cost matrix\n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>dmat[i][j];
            //dmat[i][j]=0;
            rt[i].dist[j]=dmat[i][j];
            rt[i].from[j]=i;
        }
    }
    do{
        count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                    for(int k=0;k<n;k++){
                        if(rt[i].dist[j]>dmat[i][k]+rt[k].dist[j]){
                            rt[i].dist[j]=rt[i].dist[k]+rt[k].dist[j];
                            rt[i].from[j]=k;
                            count++;
                        }
        }
    }
}

}while(count!=0);
for(int i=0;i<n;i++){
    cout<<"\nState value for router "<<i+1<<" is\n";
    for(int j=0;j<n;j++){
        cout<<"\n\tNode"<<j+1<<" via "<<rt[i].from[j]+1<<" with distance "<<rt[i].dist[j]<<"\n";
    }
}
}
