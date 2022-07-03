#include<iostream>
using namespace std;

int main(){
    int n;


    cin>>n;
        int array[n];
    for (int i=0;i<n-1;i++){
        cin>>array[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            if(array[j]==i){
               cout<<i;
            }
        }

    }
}