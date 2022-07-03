#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    int missing;
    cin>>n;

    int array_sum=0;
    int array[n];
    for (int i=0;i<n-1;i++){
        cin>>array[i];
        array_sum=array_sum+array[i];
    }

    int natural_sum=(n*(n+1))/2;

    missing=natural_sum-array_sum;
    cout<<missing;

}