    #include<bits/stdc++.h>
    using namespace std;
    int main(int argc, char const *argv[])
    {
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        #endif
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long sol=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]+a[i-1]<k)
            {
                sol+=k-(a[i]+a[i-1]);
                a[i]+=k-(a[i]+a[i-1]);
            }
        }

        cout<<sol<<endl;
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;


    }