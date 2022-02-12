// Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
// Do this recursively. Indexing in the array starts from 0.



int allIndexes(int input[], int size, int x, int output[]) 
{
  	static int index=-1;
    static int s = 0;
    if(size==0)
    {
        return 0;
    }
    else
    {

        if(input[0]==x)
        {
            ++s;
            output[0]=++index;
            allIndexes(input+1,size-1,x,output+1);
        }
        else
        {
            ++index;
            allIndexes(input+1,size-1,x,output);
        }
    }
    return s;
    
}
