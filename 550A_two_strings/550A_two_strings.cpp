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
	float f1=0,f2=0;
	for(int i=0;i<n;)
	{
		if(i+2<n&&s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')
			{
				f1+=0.5;f2+=0.5;i+=3;
			}
		else if(i+2<n&&s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B')
			{
				f1+=0.5;f2+=0.5;i+=3;
			}
		else if(s[i]=='A'&&s[i+1]=='B')
			{f1+=1;i+=2;}
		else if(s[i]=='B'&&s[i+1]=='A')
			{f2+=1;i+=2;}
		else
			i++;
		// cout<<f1<<" "<<f2<<endl;

	}
	if((f1>0.5&&f2>=0.5)||(f1>=0.5&&f2>0.5))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	/* code */
	return 0;
}