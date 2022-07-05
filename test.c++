// If a singular noun ends with ch, x, s, o the plural is formed by adding es. For example, witch -> witches, tomato -> tomatoes.
// If a singular noun ends with f or fe, the plural form ends with ves. For example, leaf -> leaves, knife -> knives. Pay attention to the letter f becoming v.
// Nouns ending with y change the ending to ies in plural. For example, family -> families.
// In all other cases plural is formed by adding s. For example, book -> books.




#include <bits/stdc++.h>
using namespace std;
int main(){

      string noun;
      cin>>noun;

    //for ch,fe;
    string ch=noun.substr(noun.size()-2);


    //x, s, o,f
    string xos=noun.substr(noun.size()-1);
      if(ch=="ch"){
        cout<<noun +"es"<<endl;
      }

      else if(xos=="x" ||xos=="o || xos=="s"" ){
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



      cout<<noun.length()-1<<endl;
      cout<<noun[noun.length()]<<endl;
      cout<<noun[noun.length()-1]<<endl;
      cout<<noun.erase(noun.length()-1)<<endl;
      cout<<noun.erase(noun.length()-2)<<endl;
      cout<<noun<<endl;
}
