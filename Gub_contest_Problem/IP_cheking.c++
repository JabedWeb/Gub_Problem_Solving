#include <bits/stdc++.h>
using namespace std;
int binary_convert(int bin);
int main(){

    int n;
    cin>>n;
    int a,b,c,d;
    int a1,b1,c1,d1;
    char dot;

    while(n>0){
        cin >> a>>dot>>b>>dot>>c>>dot>>d;
        cin >> a1>>dot>>b1>>dot>>c1>>dot>>d1;
        // cin>> b;
        // cin>> c;
        // cin>> d;
        // cin>>a1;
        // cin>>b1;
        // cin>>c1;
        // cin>>d1;
       int a2=binary_convert(a1);
       int b2=binary_convert(b1);
       int c2=binary_convert(c1);
       int d2=binary_convert(d1);
       cout<<"output"<<endl;
       cout<<a<<dot<<b<<dot<<c<<dot<<d<<endl;
       cout<<a1<<dot<<b1<<dot<<c1<<dot<<d1<<endl;
       cout<<a2<<dot<<b2<<dot<<c2<<dot<<d2<<endl;
           cout<<"end"<<endl;
        n--;
    
    }
    return 0;
}

int binary_convert(int bin){
    int decimal=0;
    int i=0;
    while(bin){
        int mod=bin%10;
        decimal+=mod*pow(2,i);
        bin=bin/10;
        i++;
    }
    return decimal;
}