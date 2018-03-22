#include<bits/stdc++.h>
using namespace std;
bool check(long x)
{

    while(x%6==0)
    {
        x/=6;
    }
    while(x%3==0)
    {
        x/=3;
    }
    while(x%2==0)
    {
        x/=2;
    }
    return x==1;
}
int main(){
long l,r;
cin>>l>>r;
long counter=0;
for(long i=l;i<=r;i++)
{
    if(check(i))
        counter++;
}
 cout<<counter<<endl;
}
