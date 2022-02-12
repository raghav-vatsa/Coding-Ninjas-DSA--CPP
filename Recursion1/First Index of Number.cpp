// Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
// First index means, the index of first occurrence of x in the input array.
// Do this recursively. Indexing in the array starts from 0.


int firstIndex(int input[], int size, int x) 
{
  	if (size == 0)
        return -1;
    
    static int i = 0;
    if(input[0] == x)
        return i;
    else
    {
        i++;
        firstIndex(input+1, size-1, x);
    }
}
