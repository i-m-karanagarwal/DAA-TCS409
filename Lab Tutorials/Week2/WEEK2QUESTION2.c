#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t){

        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        int flag=0;
        for(int i=0,j=i+1; i<n, j<n; i++,j++){
            for(int k=0;k<n;k++){
                if(arr[i]+arr[j]==arr[k]){
                    printf("%d + %d is equal to %d\n", arr[i], arr[j], arr[k]);
                    flag=1;
                }
            }
        }

        if(flag==0)
            printf("No Sequence found");
        t--;

    }
}