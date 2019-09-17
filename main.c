#include <stdio.h>
//MARY NJERI NYORO

int mostrepeated(int* array , int n, int k)
{
    int max = array[0], result = 0;
    for (int i = 0; i< n; i++)
        array[array[i]%k] += k;

    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            result = i;
        }
    }
    return result;
}

int main()
{
    int arr[10],n,i;
    int num,count;
    int large, small;

    printf("Enter your 10 elements: ");
    for (n = 0; n<10; n++)
    {
        printf("\n Enter number : ");
        scanf("%d", &arr[n]);
    }
    large = small = arr[0];
    for(n=1;n<10; n++)
    {
        if(large<arr[n])
            large=arr[n];
        if(small>arr[n])
            small=arr[n];
    }
    printf("\nThe largest number is %d", large);
    printf("\nThe smallest number is %d", small);

    count=0;
    for(i=0;i< n;i++)
    {
        if(arr[i]==n)
            count++;
    }
    printf("The most repeated number is: %d", mostrepeated(arr, n, i));
    return 0;
}