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
    int n;
    cin>>n;
    long long  a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long sum=0;
    long long max_ele=0;
    for (int i = 0; i < n; ++i)
    {
        sum+=a[i];
        max_ele=max(a[i],max_ele);
        /* code */
    }
    if(sum%2==0&&sum>=2*max_ele)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

	return 0;
}