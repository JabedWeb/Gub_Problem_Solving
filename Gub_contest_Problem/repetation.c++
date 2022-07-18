#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count=0;

    int array[100]={0};


    for(int i=0;i<str.length();i++){
        count=0;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                count++;
            }
            else{

             break;
            }
        }
    }

    for(int i=0;i<=10;i++){

        if(array[i!=0]){
        cout<<array[i]<<endl;
        }
    }
    cout<<str<<endl;
    cout<<count<<endl;
}