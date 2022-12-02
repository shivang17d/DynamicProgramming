// Memoization   TC --> O(n)       SC --> O(n) + O(n)  ---> (Recursion Stack Space and Array)
// Recursion (Top-Down Approach)

#include<bits/stdc++.h>
using namespace std;
int fib(int n,vector<int> &dp)
{
  if(n<=1)return n;

  if(dp[n] != -1) return dp[n];

  return dp[n] = fib(n-1,dp) + fib(n-2,dp);
} 
int main() {
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  cout<<"Fibonacci of the given number is  ";
  vector<int> dp(n+1,-1);
  cout<<fib(n,dp)<<endl;
  
  return 0;
  
}



// Tabulation (Bottom-Up Approach)   TC --> O(n)       SC --> O(1)

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  cout<<"Fibonacci of the given number is  ";
  int prev2=0;
  int prev1=1;
  for(int i = 2 ; i <=n ; i++) {
    int curr = prev1 + prev2;
    prev2 = prev1;
    prev1 = curr;
  }
  cout<<prev1; 
  
  return 0;
}
