#include <stdio.h>

int twosum(int arr[],int n,int target,int result[])
{   
    for (int i=0;i<n;i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if ( arr[i] + arr[j] == target ) 
            {
                result[0]=i;
                result[1]=j;
                return 1;
            }
        }
    }
    return 0;

}

int main()
{
    int arr[]={3,4,5,6,9};
    int result[2];
    if(twosum(arr,5,8,result))
    {
        printf("result: [%d,%d]\n",result[0],result[1]);
    }

    else
    {
        printf("Not found \n");
    }

}