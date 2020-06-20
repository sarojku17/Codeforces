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
	    while(t--)
	    {
	    	long long n;
	    	cin>>n;
	    	n=2*n;
	    	int a[n+1];
	    	for(int i=1;i<=n;i++)
	    	{
	    		cin>>a[i];
	    	}
	    	std::vector<int> o,e;
	    	for(int i=1;i<=n;i++)
	    	{
	    		if(a[i]%2==0)
	    			e.push_back(i);
	    		else
	    			o.push_back(i);
	    	}
	    	int no=o.size();
	    	int ne=e.size();
/*	    	cout<<"odd"<<endl;
	    	for(int i=0;i<no;i++)
	    	{
	    		cout<<o[i]<<" ";
	    	}
	    	cout<<endl;
	    	cout<<"even"<<endl;
	    	for(int i=0;i<ne;i++)
	    	{
	    		cout<<e[i]<<" ";
	    	}
	    	cout<<endl;*/
	    	if((no%2==0)&&(ne%2==0))
	    	{
	    		if(ne>no)
	    			ne-=2;
	    		else
	    			no-=2;
	    		for(int i=0;i<no;i+=2)
	    			cout<<o[i]<<" "<<o[i+1]<<endl;
	    		for(int i=0;i<ne;i+=2)
	    			cout<<e[i]<<" "<<e[i+1]<<endl;	    		
	    	}
	    	else
	    	{
	    		// cout<<"yo"<<endl;
	    		for(int i=0;i<no-1;i+=2)
	    			cout<<o[i]<<" "<<o[i+1]<<endl;
	    		for(int i=0;i<ne-1;i+=2)
	    			cout<<e[i]<<" "<<e[i+1]<<endl;	  
	    	}


	    }
	    
		/* code */
		return 0;
	}