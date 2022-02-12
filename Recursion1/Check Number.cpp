// Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// Do this recursively.



bool checkNumber(int input[], int size, int x) 
{
  	if (size == 1 && input[0] == x)
      	return true;
    else if( size == 1 && input[0] != x)
        return false;
    
	if(input[0] == x)
        return true;
    else
        checkNumber(input+1, size-1, x);
}
