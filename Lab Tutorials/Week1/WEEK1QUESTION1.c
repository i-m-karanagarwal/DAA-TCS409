#include<stdio.h>
#define max 20

int main()
{
    int T;
    int arr[max];
    printf("Enter number of test cases: ");
    scanf("%d",&T);
    while(T)
    {
        int n,key,i,com=0,flag=0;
        arr[n];
        printf("Enter number of elements: ");
        scanf("%d",&n);
        printf("Enter elements of the array: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Enter key to be found: ");
        scanf("%d",&key);

        for(i=0;i<n;i++)
        {
            com++;
            if(key==arr[i])
            {
                flag=1;
                break;
            }
        }

        if(flag==1)
            printf("%d found in %d comparisions\n",key,com);
        else
            printf("Key Not found in %d comparisions\n",com);
        T--;
    }
}