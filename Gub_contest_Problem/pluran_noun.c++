#include <iostream>
#include <string>
using namespace std;
int main(){

      string noun;
      int n;
      cin>>n;
    //for ch,fe;

    for (int i=1;i<=n;i++){

        cin>>noun;

        string ch=noun.substr(noun.size()-2);
        //x, s, o,f,y
        string xos=noun.substr(noun.size()-1);
        if(ch=="ch"){
            cout<<noun +"es"<<endl;
        }

        else if(xos=="x" ||xos=="o" || xos=="s" ){
            cout<<noun +"es"<<endl;
        }
        else if(xos=="f"){
            cout<<noun.erase(noun.length()-1)+"ves"<<endl;
        }
        else if(ch=="fe" ){
            cout<<noun.erase(noun.length()-2)+"ves"<<endl;
        }
        else if(xos=="y" ){
            cout<<noun.erase(noun.length()-1)+"ies"<<endl;
        }
        else{
            cout<<noun +"s"<<endl;
        }

    }

    return 0;

}
