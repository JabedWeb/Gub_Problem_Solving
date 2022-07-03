#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    int output=0;
    for(int i=sum;i>=0;i=i-4){

        if(sum%4==0){
         output++;
        }
        else{
            output++;
        }
    }
    if(sum%4==0){
    cout<<output-1;
    }
    else{
        cout<<output;
    }


}