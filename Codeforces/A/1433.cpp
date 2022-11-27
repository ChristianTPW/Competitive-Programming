#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int input;
    int pressed;
    
    cin >> n;

    for(int i=0; i<n; i++){
        pressed = 0;
        cin >> input;
        string temp = to_string(input);
        pressed = (int(temp[0])-49)*10;

        for(int x=0; x<temp.length(); x++){
            pressed += x+1;
        }

        cout << pressed << endl;

    }
}