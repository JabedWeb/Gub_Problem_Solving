#include <iostream>
#include<vector>
#include<iterator>
using namespace std;
int main (){ 

    vector <int> vec;
    vector <int> :: iterator it;
    // vector <double> vec2;
    // vector <double> :: iterator it2;
    // vector <char> vec2;
    // vector <char> :: iterator it2;

    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"\t";
    }
    puts("");

    for(it=vec.begin();it!=vec.end();it++){ 
        cout<<*it<<endl;
    }





}