#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a,b;


    for(int i=1;i<=n;i++){
        cin>>a>>b;
        int add=a+b;
        if(a>2*b || b>2*a){
          cout<<"NO"<<endl;
        }
       else if(add%3==0){
            cout<<"YES"<<endl;
        }
        else{
        cout<<"NO"<<endl;
        }
    }
    return 0;
}