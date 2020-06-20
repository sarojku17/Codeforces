	#include<bits/stdc++.h>
	using namespace std;
	bool prime(long long x)
	{
		if(x==1)
			return false;
		for(int i=2;i*i<=x;i++)
		{
			if(x%i==0)
				return false;
		}	
		return true;
	}
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
	    	if(n==1)
	    		cout<<"FastestFinger"<<endl;
	    	else if(n==2)
	    		cout<<"Ashishgup"<<endl;
	    	else if(n%2==1)	
	    		cout<<"Ashishgup"<<endl;
	    	else 
	    	{
	    		long long t=n;
	    		long long count2=0;
	    		while(t%2==0)
	    			{
	    				t=(t/2);
	    				count2++;
	    			}
	    		if(t==1)
	    			cout<<"FastestFinger"<<endl;
	    		else if(count2==1&&prime(t))
	    			cout<<"FastestFinger"<<endl;
	    		else 
	    			cout<<"Ashishgup"<<endl;
	    	}
	    }
	    
		/* code */
		return 0;
	}