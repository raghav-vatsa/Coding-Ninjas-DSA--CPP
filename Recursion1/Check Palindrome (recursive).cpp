//Check whether a given String S is a palindrome using recursion. Return true or false.



bool help(char a[],int start, int end){
    
    if(start >=end )
        return true;
    
    if(a[start]!=a[end])
        return false;
   
    bool smallcheck= help(a,start+1,end-1);
        return smallcheck;
}


bool checkPalindrome(char input[]) {
    
 int start =0;
   // int end = sizeof(input)/sizeof(*input)-1;
    int end = strlen(input)-1;
    
    return help(input, start, end) ;
    
}
