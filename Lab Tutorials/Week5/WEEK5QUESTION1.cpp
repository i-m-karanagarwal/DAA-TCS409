#include <iostream>
using namespace std;

int main(){
    int t;
    cout<<"Enter number of test cases: ";
    cin>>t;

    while(t){

        int n;
        cout<<endl<<"Enter number of elements: ";
        cin>>n;

        char arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        char max=arr[0];

        for(int i=0; i<n; i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }

        int count_index=((int)max - 97) + 1;
        int count[count_index]={0};

        for(int i=0; i<n; i++){
            count[(int)arr[i]-97]++;
        }
        
        int occurMax=count[0],maxIndex=0;

        for(int i=0; i<count_index; i++){
            if(occurMax<count[i]){
                occurMax=count[i];
                maxIndex=i;
                
            }
        }

        if(occurMax>1){
            char maxOccurElement=(char)(maxIndex+97);
            cout<<maxOccurElement<<"-"<<occurMax<<endl;
        }
        else
            cout<<"No duplicate element";
        t--;
    }
}