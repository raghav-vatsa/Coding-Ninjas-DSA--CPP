// Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the count of possible binary trees which are balanced.
// This number can be huge, so, return output modulus 10^9 + 7.
// Write a simple recursive solution.
// Input Format :
// The first and only line of input contains an integer, that denotes the value of h. Here, h is the height of the tree.
// Output Format :
// The first and only line of output contains the count of balanced binary trees modulus 10^9 + 7.
// Constraints :
// 1 <= h <= 24
// Time Limit: 1 sec
// Sample Input 1:
// 3
// Sample Output 1:
// 15
// Sample Input 2:
// 4
// Sample Output 2:
// 315




#include<cmath>
int balancedBTs(int n) 
{
    int dp[n+1];
    
    dp[0]=1;
    dp[1]=1;
    
    int mod = (int) (pow(10,9)+ 7);
    for(int i=2 ;i<=n; i++)
    {
        dp[i]=(int)( ( (long)(dp[i-1])*dp[i-1] )%mod + (2*(long)(dp[i-1])*dp[i-2])%mod  ) % mod;
        
    }
        
return dp[n];
}



#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}
