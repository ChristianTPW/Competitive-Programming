#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int prices[100001] = {0};
    int days;
    long long money[100000];
    int afford[100001] = {0};
    int input;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> input;
        prices[input]++;
    }


    for(int i=1; i<=100000; i++){

        afford[i] = afford[i-1] + (1*prices[i]);
    }

    cin >> days;

    for(int i=0; i<days; i++){
        cin >> input;
        if(input > 100000){
            input = 100000;
        }
        cout << afford[input] << endl;
    }

}