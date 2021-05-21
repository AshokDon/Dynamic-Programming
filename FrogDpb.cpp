#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int k;
int a[100005];
int dp[100005];
int func(int ind)
{
    if(ind==(n-1))
    {
        return 0;
    }
    if(dp[ind]!=-1)
    {
        return dp[ind];
    }
    int val=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        if(i+ind<n)
        {
            val=min(val,abs(a[ind]-a[ind+i])+func(ind+i));
        }
    }
    return dp[ind]=val;
}
int main()
{
    
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        dp[i]=-1;
    }
    cout<<func(0);

}