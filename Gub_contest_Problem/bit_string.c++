#include<iostream>
using namespace std;

int main() {
    int n;
    const unsigned int M = 1000000007;
    cin >> n;
    int string = 1;

    for (int i = 1; i <= n; i++) {
        string =string*2;
        string =string%M;
    }
    cout << string;
}