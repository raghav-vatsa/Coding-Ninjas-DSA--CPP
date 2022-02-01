// Given a positive integer 'n', find and return the minimum number of steps that 'n' has to take to get reduced to 1. You can perform any one of the following 3 steps:
// 1.) Subtract 1 from it. (n = n - ­1) ,
// 2.) If its divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
// 3.) If its divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).  
// Write brute-force recursive solution for this.
// Input format :
// The first and the only line of input contains an integer value, 'n'.
// Output format :
// Print the minimum number of steps.
// Constraints :
// 1 <= n <= 200

// Time Limit: 1 sec
// Sample Input 1 :
// 4
// Sample Output 1 :
// 2 
// Explanation of Sample Output 1 :
// For n = 4
// Step 1 :  n = 4 / 2  = 2
// Step 2 : n = 2 / 2  =  1 
// Sample Input 2 :
// 7
// Sample Output 2 :
// 3
// Explanation of Sample Output 2 :
// For n = 7
// Step 1 :  n = 7 ­- 1 = 6
// Step 2 : n = 6  / 3 = 2 
// Step 3 : n = 2 / 2 = 1  

//Brute Force
int countMinStepsToOne(int n)
{
	// Base condition
    if ( n == 1 )
        return 0 ;
    
    
    // initializing the values of count2 and count3 since they won't be initialized for every case
    int count2 = n+5;
    int count3 = n+5;
    // subtraction
    int count1 = countMinStepsToOne(n-1)+1;
    
    
    // division by 2 if possible
    if(n%2 == 0)
        count2 = countMinStepsToOne(n/2)+1;
    
    // division by 3 if possible
    if(n%3 == 0)
        count3 = countMinStepsToOne(n/3)+1;
    
    // return the minimum of all 3 st
    return std::min({count1, count2,count3}) ;
        
    
}

//Memoization

int countStepsToOne(int n)
{
	//creating an array to store values
    int arr[n+1];
     
    //initializing first 3 indexes
    arr[1]=0; 
    arr[2]=arr[3]=1;
   int b,c;
    for(int i=4 ;i<n+1;i++)
    {   
        b=c=n;
     
      	if(i%2==0) 
            b=arr[i/2];
    	if(i%3==0) 
            c=arr[i/3];
     
      arr[i]=1+ std::min({arr[i-1], b,c});
    }
return arr[n];
}

//dp
long staircase(int n)
{
    long arr[n + 1];
    arr[0] = 1;
    arr[1] = 1;
    arr[2] = 2;
    for (int i = 3; i <= n; i++)
        arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
 
    return arr[n];
}



#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int n;
	cin >> n;
	cout << staircase(n);
}
