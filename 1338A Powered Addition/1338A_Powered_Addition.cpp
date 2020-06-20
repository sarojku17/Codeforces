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
        long long pre=LLONG_MIN ;
        for(int i=0;i<n;i++)
            cin>>a[i];        
        long long sol=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]<pre){
                long long diff=pre-a[i];
                // cout<<"diff "<<diff<<endl;
                long long cur=ceil(log2(diff+1));
                // cout<<"cur : "<<i<<" "<<cur<<endl;
                sol=max(cur,sol);
                a[i]+=(pow(2,cur)-1);
            }
            cout<<a[i]<<" ";
            pre=a[i];
        }
        cout<<endl;
        cout<<sol<<endl;

    }


	return 0;
}