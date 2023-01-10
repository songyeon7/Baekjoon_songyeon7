#include<bits/stdc++.h>
using namespace std;
int  dp[1001], n;
int main()
{
    dp[0]=1;
    dp[1]=1;
    scanf("%d", &n);
    for(int i=2; i<=n; i++)
    {
        dp[i]=(dp[i-1]+dp[i-2])%10007;
    }
    printf("%d ", dp[n]);
    return 0;
}