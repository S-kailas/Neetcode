#include <stdio.h>

int containsduplicate(int arr[],int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[i]==arr[j])
            {
                return 1;
            }
            
        }
    }
    return 0;
}

int main()
{
    int arr[5]={1,2,2,3,4};
    int value=containsduplicate(arr,5);

    printf("%d",value);
}