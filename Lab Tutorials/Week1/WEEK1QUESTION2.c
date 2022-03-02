#include <stdio.h>

int binarysearch(int a[], int n, int key)
{
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
        else if(a[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,flag;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int key;
    printf("Enter key to be found: ");
    scanf("%d",&key);
    flag=binarysearch(a, n, key);

    if(flag!=-1)
        printf("Key found");
    else
        printf("Key not found");
}