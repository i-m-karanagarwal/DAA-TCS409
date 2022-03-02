#include <stdio.h>

int binarysearch(int a[], int n, int key, int *c)
{
    int s=0;
    int e=n;
    while(s<=e){
        (*c)++;
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
    int n,flag,com=0;
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
    flag=binarysearch(a, n, key ,&com);

    if(flag!=-1)
        printf("Key found in %d comparision",com);
    else
        printf("Key not found in %d compaision",com);
}