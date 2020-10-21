#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int CatalanBST(int n)
{
    if(n==0)
    {
        dp[n]=1;
        return 1;
    }
    if(dp[n]!=-1) return dp[n];
    int ans=0;
    for(int i =1;i<=n;i++)
    {
       ans += CatalanBST(i-1)*CatalanBST(n-i);
    }
    dp[n] =ans;
    return ans;

}

int main()
{

    int n;
    cin>>n;
    memset(dp,-1,sizeof dp);
    //cout<<catalanBST(n);
    for(int i=0;i<=n;i++)
    {
        cout<<CatalanBST(i)<<" ";
    }
    return 0;

}
