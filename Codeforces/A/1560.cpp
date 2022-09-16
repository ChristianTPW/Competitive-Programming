#include <bits/stdc++.h>

using namespace std;

int main() {

    int k[1001];
    int counter = 0;
    int n;
    int input;

    cin >> n;

    string temp;

    for(int i=0; counter<1001; i++){
        temp = to_string(i);
        if(i%10 != 3 && i % 3 != 0){
            k[counter] = i;
            counter++;
        }
    }

    for(int i=0; i<n; i++){
        cin >> input;
        cout << k[input-1] << endl;
    }

}