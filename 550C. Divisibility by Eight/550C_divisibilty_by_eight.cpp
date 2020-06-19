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
	    string s;
	    cin>>s;
	    int n=s.length();
	    int pro=1;
	    string ans="";
	   	for(int i=0;i<n;i++)
	    {
	    	int x=s[i]-'0';
	    	if(x%8==0)
	    	{
				cout<<"YES"<<endl;
	    		cout<<x<<endl;
	    		return 0;
	    	}
	    	for(int j=i+1;j<n;j++)
	    	{
	    		int y=s[j]-'0';
	    		int m=(x*10+y);
	    		if(m%8==0)
	    		{
	    			cout<<"YES"<<endl;
	    			cout<<m<<endl;
	    			return 0;	    			
	    		}
	    		for(int k=j+1;k<n;k++)
	    		{
	    			int z=s[k]-'0';
	    			int n=(x*100+y*10+z);
		    		if(n%8==0)
		    		{
		    			cout<<"YES"<<endl;
		    			cout<<n<<endl;
		    			return 0;	    			
		    		}
	    		}
	    	}
	    }

		cout<<"NO"<<endl;
		/* code */
		return 0;
	}