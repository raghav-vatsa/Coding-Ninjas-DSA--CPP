// Given an integer N, count and return the number of zeros that are present in the given integer using recursion.




int countZeros(int n) 
{
    if(n==0)
        return 1;
    else if (n<10)
        return 0;
    else if (n%10 == 0)
        return countZeros(n/10) +1;
    else
        countZeros(n/10);
        

}
