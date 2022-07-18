#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;

    long long int n;
    long long int m;
    cin>>T;


    if(T<=10000 && n>=2 && m>=1 ){
    for(int i=1;i<=T;i++){
    cin>>n>>m;

    //total number of pair;
    int pair=n/2;

    //pair*difference
   long long int sum =pair*m;
    cout<<"Case " <<i<<": "<<sum<<endl;
    }
    }
    return 0;
}