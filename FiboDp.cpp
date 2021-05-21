#include <iostream>
using namespace std;
int dp[1000005];
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    return dp[n]=fibo(n-1)+fibo(n-2);
}
int main() {
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
	    dp[i]=-1;
	}
	cout<<fibo(n);
	return 0;
}