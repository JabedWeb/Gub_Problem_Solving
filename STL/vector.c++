#include <iostream>
#include<vector>
#include<iterator>
using namespace std;
int main (){ 

    // vector <int> vec;
    // vec.push_back(25);
    // vec.push_back(29);

    // cout<<vec[0]<<endl;
    // cout<<vec[1]<<endl;

    //vector <int > vec(5,-1);
    // 5 is vector size and -1 one all vector value

    vector <int> vec;

    vector <int> :: iterator it;
    for(int i=1;i<=5;i++){
        vec.push_back(i);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"\t";
    }
    puts("");

    it =vec.begin();
    cout<<*it<<endl;



}