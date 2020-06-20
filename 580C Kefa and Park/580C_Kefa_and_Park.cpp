#include<bits/stdc++.h>
#define l ((long)(200005) )
using namespace std;
int a[l];
vector<int> edges[l];
int visited[l]={0};
long sol=0;
int n,m;
void dfs(int v,int no_cat)
{

    visited[v]=1;
    if( (n==1) ||( (n>1) && (v!=1) && (edges[v].size()==1) )  )
    {
        
        if(a[v]+no_cat<=m)
        {
            cout<<"cats : "<<a[v]+no_cat<<endl;
            sol++;
        }
    }
    else
    {
        if(a[v]==1)
        {
            for(int i=0;i<edges[v].size();i++)
            {
                if(visited[edges[v][i]]==0)
                    dfs(edges[v][i],no_cat+1);   

            }
        }
        else
        {
            for(int i=0;i<edges[v].size();i++)
            {
                if(visited[edges[v][i]]==0)
                    dfs(edges[v][i],0);            
            }
        }
    }

}
int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        cin>>a[i];
    
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    dfs(1,0);
    cout<<sol<<endl;
    
}