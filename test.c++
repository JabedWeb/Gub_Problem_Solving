#include <bits/stdc++.h>
using namespace std;
int binary_convert(int binary);
int main(){

    int n;
    cin>>n;
    int a,b,c,d;
    int a1,b1,c1,d1;
    char dot;

    for(int i=1;i<=n;i++){
        cin >> a>>dot>>b>>dot>>c>>dot>>d;
        cin >> a1>>dot>>b1>>dot>>c1>>dot>>d1;

       int a2=binary_convert(a1);
       int b2=binary_convert(b1);
       int c2=binary_convert(c1);
       int d2=binary_convert(d1);

       if(a==a2 && b==b2 && c==c2 && d==d2){
        cout<<"Case " <<i<<": Yes"<<endl;
       }
       else{
        cout<<"Case " <<i<<": No"<<endl;
       }
    }
    return 0;
}

int binary_convert(int binary){
    int decimal=0;
    int i=0;
    while(binary){
        int mod=binary%10;
        decimal+=mod*pow(2,i);
        binary=binary/10;
        i++;
    }
    return decimal;
}