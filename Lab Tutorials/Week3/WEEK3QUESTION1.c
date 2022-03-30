#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while(t){
        int n,comp=0, shift=0;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        for(int i=1; i<n; i++){
            int temp = arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
                comp++;
                shift++;
            }
            arr[j+1]=temp;
            shift++;
        }

    printf("No of sifts and no of comparisions: %d %d\n", shift, comp);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

        t--;
    }
}