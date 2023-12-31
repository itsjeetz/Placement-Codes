//Array kth min and max-----------------------------------------------------------
#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                A[j]=A[j]^A[j+1];
                A[j+1]=A[j]^A[j+1];
                A[j]=A[j]^A[j+1];
            }
        }
    }
    printf("ENTER K :");
    scanf("%d",&k);
    printf("%dth MAXIMUM : %d\n",k,A[n-k]);
    printf("%dth MINIMUM : %d\n",k,A[k-1]);
    return 0;
}
------------------------------------------------------------------------------------------
//Array peak Element --- peak element means ith element must be larger than its neighbours.

int peakElement(int arr[], int n)
{
   int i;
   for(i=0;i<n;i++)
   {
       if(i==0 && arr[i]>arr[i+1])
       {
           return i;
       }
       if(i==n-1 && arr[i]>arr[i-1])
       {
           return i;
       }
       else if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
       {
           return i;
       }
   }
}
-----------------------------------------------------------------------------------------------
//Array 2nd Largest Element(gfg passed , SAP Labs Passed Solution)
int print2largest(int arr[], int n) {
	    // code here
	    int i,lar,s_lar;
	    lar=s_lar=-1;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i]>lar)
	        {
	            s_lar=lar;
	            lar=arr[i];
	        }
	        
	        if(arr[i]>s_lar && arr[i]<lar)
	        {
	            s_lar=arr[i];
	        }
	    }
	    return s_lar;
	}
----------------------------------------------------------------------------------------------------------
JAVA --- Fibonacci series upto n ; n is user given(GFG , SAP Labs )

class Solution
{
    //Function to return list containing first n fibonacci numbers.
    public static long[] printFibb(int n) 
    {
        //Your code here
        long i=0,j=1,k=0;
           long arr[]=new long[n];
        arr[0]=1;
        int count=1;
       while(count<n)
       
       {
           k=i+j;
           arr[count]=k;
           i=j;
           j=k;
           count++;
           
       }
       return arr;
    }
}
----------------------------------------------------------------------------------------------------------------
JAVA - Nth root of a number m -----always in java .(Accenture PYQ) 
class Solution
{
    public int NthRoot(int n, int m)
    {
        // code here
        int x=0;
        int i=1;
        do
        {
             x = (int)Math.pow(i,n);
            if(x==m)
              return i;
             i++; 
        }while(x<=m);
        return -1;
    }
}
