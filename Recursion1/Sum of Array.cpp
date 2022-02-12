// Given an array of length N, you need to find and return the sum of all elements of the array.
// Do this recursively.



int sum(int input[], int n) 
{
    if (n == 1)
        return input[0];
    if(n== 0)
        return 0;
    int total,;
	total  = input[0] + sum(input +1, n-1);
    return total;
}
