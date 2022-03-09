#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,m,key,flag=-1;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    m=sqrt(n);
    printf("Enter key to be found: ");
    scanf("%d",&key);

    for(i=0; i<n; i+=m)
    {
        if(arr[i]==key)
        {
            flag=i;
            break;
        }
        else if(arr[i]>key)
        {
            for(j=(i/m)+1; j<i;j++)
            {
                if(arr[j]==key)
                    flag=j;
                    break;
            }
        }
    }

    if(flag==-1)
        printf("Key not found");
    else
        printf("Key found at %d index",flag);
}