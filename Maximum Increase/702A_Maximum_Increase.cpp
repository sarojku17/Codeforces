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
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    int pre=a[0];
    int max_l=1,cur_l=1;
    for(int i=1;i<n;i++)
    {
    	if(a[i]>pre)
    		{
    			cur_l++;
    			max_l=max(cur_l,max_l);
    		}
    	else
    		cur_l=1;
    	pre=a[i];
    }
    cout<<max_l<<endl;
	return 0;
}