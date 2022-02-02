// Given two strings s and t of lengths m and n respectively, find the edit distance between the strings.
// Edit Distance
// Edit Distance of two strings is minimum number of operations required to make one string equal to other. In order to do so you can perform any of the following three operations only :
// 1. Delete a character
// 2. Replace a character with another one
// 3. Insert a character
// Note
// Strings don't contain spaces
// Input Format :
// The first line of input contains a string, that denotes the value of s. The following line contains a string, that denotes the value of t.
// Output Format :
// The first and only line of output contains the edit distance value between the given strings.
// Constraints :
// 1<= m,n <= 10
// Time Limit: 1 second
// Sample Input 1 :
// abc
// dc
// Sample Output 1 :
// 2


// Brute force
#include<cmath>
int editDistance(string s1, string s2) 
{
	// Base Cases
    
    if(s1.size() == 0 || s2.size()== 0 )
        return max( s1.size() , s2.size() );
    
    if( s1[0] == s2[0] )
        return editDistance( s1.substr(1), s2.substr(1) );
    
    int x , y , z;
    
    // Insertion
    x = editDistance( s1.substr(1), s2 );
    
    // Deletion
    y = editDistance( s1 , s2.substr(1) );
    
    // Replacring
    z = editDistance( s1.substr(1) , s2.substr(1) );
    
    return min( x,min( y, z ) )+1;        
}



//Memoization
int editDistance_mem(string s, string t, int **output) {
	int m = s.size();
	int n = t.size();
	
	if(s.size() == 0 || t.size() == 0) {
		return max(s.size(), t.size());
	}

	// Check if ans already exists
	if(output[m][n] != -1) {
		return output[m][n];
	}

	int ans;
	if(s[0] == t[0]) {
		ans = editDistance_mem(s.substr(1), t.substr(1), output);
	}
	else {
		// Insert
		int x = editDistance_mem(s.substr(1), t, output) + 1;
		// Delete
		int y = editDistance_mem(s, t.substr(1), output) + 1;
		// Replace
		int z = editDistance_mem(s.substr(1), t.substr(1), output) + 1;

		ans =  min(x, min(y, z));
	}

	// Save the ans
	output[m][n] = ans;

	// Return the ans
	return ans;
}
int editDistance(string s, string t){

    int m = s.size();
    int n = t.size();
    int **ans = new int*[m+1];
    for(int i = 0; i <= m; i++) {
        ans[i] = new int[n+1];
        for(int j = 0; j <= n; j++) {
            ans[i][j] = -1;
        }
    }
    return editDistance_mem(s, t, ans);


}
