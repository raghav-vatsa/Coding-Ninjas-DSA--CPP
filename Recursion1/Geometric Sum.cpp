// Given k, find the geometric sum i.e.



double geometricSum(int k) 
{
    if (k == 0)
        return 1;
    double sump = (1/pow(2,k));
    return sump + geometricSum(k-1);

}
