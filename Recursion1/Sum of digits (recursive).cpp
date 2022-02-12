//Write a recursive function that returns the sum of the digits of a given integer.


int sumOfDigits(int n) 
{
	if(n<10)
        return n;
    
    return (n%10) + sumOfDigits(n/10);
}
