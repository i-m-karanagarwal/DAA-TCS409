#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cout<<"Enter number of test cases: ";
    cin>>t;
    while(t){

        int n;
        cout<<"Enter number of elements: ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n; i++){
            cin>>arr[i];
        }

        sort(arr, arr+n);

        int sum=0,flag=0;
        cout<<"Enter sum: ";
        cin>>sum;

        int i=0,j=n-1;
        while(i<=j){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<sum;
                flag=1;
                break;
                }
            else if(arr[i]+arr[j]<sum)
                i++;
            else
                j--;
        }

        if(flag==0)
            cout<<"No such elements.";
        t--;
    }
}