#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long  a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];        
        long long sol=0,pre=a[0];
        long long max_diff=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]<pre){
                    max_diff=max(max_diff,pre-a[i]);
            }
            pre=max(pre,a[i]);
        }
        if(max_diff==0)
            cout<<0<<endl;
        else
            cout<<(long)(log2(max_diff))+1<<endl;

    }


	return 0;
}