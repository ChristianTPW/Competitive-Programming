#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long number;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> number;
        
        while(number%2==0){
            number = number/2;
        }

        if (number == 1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}