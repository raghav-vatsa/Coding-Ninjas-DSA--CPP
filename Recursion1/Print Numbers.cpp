//Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs that you need to rectify such that all the test cases pass.
  
  void print(int n)
{
    static int i = 1;
    if(n == 1)
    {
        cout << i << " ";
        return;
    }
    cout << i << " ";
    i++;
    print(n - 1);
}
