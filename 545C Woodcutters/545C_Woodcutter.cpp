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
    pair<long ,long> a[n];
    for(int i=0;i<n;i++)
    {
    	long x,y;
    	cin>>x>>y;
    	a[i]=make_pair(x,y);
    }
    long sol=2;
    long pre=a[0].first;
    for(int i=1;i<n-1;i++)
    {
    	long  x_cur=a[i].first;
    	long  h_cur=a[i].second;
    	long  x_next=a[i+1].first;
    	if(x_cur-h_cur>pre)
    	{
    		sol++;
    		pre=x_cur;
    	}
    	else if(x_cur+h_cur<x_next)
    	{
    		sol++;
    		pre=x_cur+h_cur;
    	}
    	else
    	{
    		pre=x_cur;
    	}


    }
    if(n==1)
    	cout<<1<<endl;
    else 
    	cout<<sol<<endl;
	/* code */
	return 0;
}