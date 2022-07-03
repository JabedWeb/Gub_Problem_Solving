#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    
    for(int i=1;n>=1;i++){
        if(n==1){
        cout<<n;
        break;
        }
        else if(n%2==0){
        cout<<n<<" ";
        n=n/2;
        }
        else{
        cout<<n<<" ";
        n=n*3+1;
        }
    }

    return 0;

}
