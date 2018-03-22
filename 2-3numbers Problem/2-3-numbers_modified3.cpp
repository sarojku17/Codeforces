#include<bits/stdc++.h>
using namespace std;
int main(){
long long l,r;
cin>>l>>r;
long long temp1=1,temp2;
long sol=0;
long long x;
for(long i=0;i<=31;i++)
{
    temp2=1;
    for(long i=0;i<21;i++)
    {
        x=temp2*temp1;
        if(x>r)
            break;
        if(x>=l&&x<=r)
            sol++;
        temp2*=3;
        //cout<<x<<endl;
    }
    temp1*=2;
    if(temp1>r)
        break;
}
cout<<sol<<endl;

}

