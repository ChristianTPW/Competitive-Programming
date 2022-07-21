#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int rating;
    for(int z=0; z<n; z++) {
        cin >> rating;

        if(rating <= 1399) {
            cout << "Division 4" << endl;
        }else if(rating <=1599){
            cout << "Division 3" << endl;
        }else if(rating <= 1899){
            cout << "Division 2" << endl;
        }else{
            cout << "Division 1" << endl;
        }
    }
}