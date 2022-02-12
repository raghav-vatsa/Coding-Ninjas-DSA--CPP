// Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.



int multiplyNumbers(int m, int n) 
{
    if (m == 0 || n == 0)
        return 0;
    if (n == 1)
        return m;
    
    return m+ multiplyNumbers(m,n-1);

}
