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
    int bag[101]={0};
    for(int i=0;i<n;i++)
        bag[a[i]]++;
    int cnt1=0,cntg2=0;
    for(int i=1;i<=100;i++)
        if(bag[i]==1)
            cnt1++;
        else if(bag[i]>2)
            cntg2++;

    if(cnt1%2!=0&&cntg2==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        int c=0;
        bool f=(cnt1%2!=0);
        for(int i=0;i<n;i++)
        if(bag[a[i]]==1)
        {
            if(c%2==0)
                cout<<"A";
            else
                cout<<"B";
                c++;       
        }
        else if(bag[a[i]]==2)
        {
            cout<<"A";
        }
        else if(f)
        {
            cout<<"B";
            f=false;
        }
        else
        {
            cout<<"A";
        }

        cout<<endl;
    }

	return 0;
}