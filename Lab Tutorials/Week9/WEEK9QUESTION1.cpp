#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define INF 2147483647

int main(){
    int v;
    cin>>v;

    int d[v][v];
    for(int i=0;i<v;i++)
        for(int j=0; j<v; j++)
            cin>>d[i][j];


    for(int i=0;i<v; i++)
        {for(int j=0;j<v;j++)
            cout<<d[i][j]<<" ";
        cout<<endl;
        }
}