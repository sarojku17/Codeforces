#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
    string s;
    cin>>s;
    int n=s.length();
    int a[n]={0};
    int cnt=0;
    for(int i=n-1;i>=0;i--)
        if(s[i]=='Q')
            cnt++;
        else if(s[i]=='A')
            a[i]=cnt;
        
    for(int i=n-2;i>=0;i--)
        a[i]+=a[i+1];
    long sol=0;
    for(int i=0;i<n-2;i++)
        if(s[i]=='Q')
            sol+=a[i+1];
    cout<<sol<<endl;
	return 0;
}