#include<bits/stdc++.h>
using namespace std;

void leap_year(int year,int year1,int i){

        int total_leap_year=0;
        /*
        for n of multiple difference between a and b(b>a) of that number(s)
        n= a/s-(b-1)/s
        */

        // as the number 4 multiple are leap year
        int for_4 = (year1 / 4 )- ((year - 1) / 4);

        // as the number 400 multiple of included also leap year
        int for_400 = (year1 / 400) - ((year - 1) / 400);
        // for reduce not leap year multiple of 100;
        int for_100 = (year1 / 100) - ((year - 1) / 100);


       total_leap_year = for_4 + for_400 - for_100;
        cout << "Case "<<i<<": "<<total_leap_year<< endl;
}
int main(){
    int n;
    cin>>n;
    string month,month1;
    int date,year;
    char character;
    int date1,year1;

    string array[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
 

    for (int i=1;i<=n;i++){
        cin>>month>>date>>character>>year;
        cin>>month1>>date1>>character>>year1;

            //start year and end year are not be changed 
        
        if((month =="January" || month =="February") ){
            year=year;;
        }
        else{
            year=year+1;
        }
        //end year are be decreasing as month and date is less than february 29
        if(month1=="January" || (month1=="February" && date1< 29) ){
            year1=year1-1;
        }
        else{
            year1=year1;
        }
        leap_year(year,year1,i);
    }
  return 0;

}