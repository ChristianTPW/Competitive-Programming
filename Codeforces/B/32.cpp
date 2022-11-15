#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    string result;

    cin >> n;

    for(int i=0; i<n.length(); i++){
        if(n[i] == '.'){
            result += '0';
        }else{
            i++;
            if(n[i] == '.'){
            result += '1';
            }else{
            result += '2';
            }
        }
    }

    cout << result;

}