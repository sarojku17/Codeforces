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
		int n,k;
		cin>>n>>k;
		double a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int i=0,j=1,l=2;
		unordered_map<double ,long long> f,s;
		long long  sol=0;
		for(;l<n;i++,j++,l++)
		{
			f[a[i]]++;
			if(f.find(a[j]/k)!=f.end())
				{
					s[a[j]]+=f[a[j]/k];
					// cout<<"j "<<j<<" "<<s[a[j]]<<endl;
				}

			if(s.find(a[l]/k)!=s.end())
				sol+=s[a[l]/k];
			// cout<<"sol "<<l<<" "<<sol<<endl;;
		}
		cout<<sol<<endl;
		/* code */
		return 0;
	}