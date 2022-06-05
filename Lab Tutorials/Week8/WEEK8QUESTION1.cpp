#include <iostream>
#include<vector>

using namespace std;

int main(){
    int v;
    cout<<"Enter number of vertices: ";
    cin>>v;

    vector<vector<int>>G(v, vector<int>(v,0));

    for(int i=0; i<v; i++)
        for(int j=0; j<v; j++)
            cin>>G[i][j];

    int edge=0;

    while(edge<v){
        int min=INT8_MAX;

        int x=0,y=0;

        for(int i=0; i<v; i++){
            if(mst_vector[i])
            {
                for(int j=0;j<v; j++)
                {
                    if(!mst_vector[j] && G[i][j]){
                        if(min>G[i][j])
                        {
                            min=G[i][j];
                            x=i;
                            y=j;
                        }
                    }
                }
            }
        }
        edge++;
    }
return 0;

}