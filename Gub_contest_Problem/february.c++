#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    string month,month1;

  


    int date,year;
    char character;
    int date1,year1;

    for (int j=1;j<=n;j++){
          int flag=0;
        cin>>month>>date>>character>>year;
        cin>>month1>>date1>>character>>year1;

        
        if((month =="January" || month =="February") && (month1!="January" || month1!="February") ){
            for (int i=year;i<=year1;i++){
            if((i%4==0 && i%100!=0) || i%400==0){
            flag++;
            }
            }
            cout<<"Case " <<j << ": "<<flag<<endl;
           
        }
        else if((month=="January" || month=="February") && (month1=="January" || month1=="February" ) && date1< 29){
        for (int i=year;i<=year1-1;i++){
           if((i%4==0 && i%100!=0) || i%400==0){
            flag++;
            }
            }
            cout<<"Case " <<j << ": "<<flag<<endl;
        }
        else if((month!="January" || month!="February") && (month1!="January" || month1!="February")){
        for (int i=year+1;i<=year1;i++){
            if((i%4==0 && i%100!=0) || i%400==0){
            flag++;
            }
            }
            cout<<"Case " <<j << ": "<<flag<<endl;
        }
        else{
            cout<<"Case " <<j << ": "<<flag<<endl;
        }
        


    }
  return 0;

}