#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int a, b;

    cin >> n;

    for(int z=0; z<n; z++){
        cin >> a >> b;
        cout << pow(min(max(a, b*2), max(a*2, b)), 2) << endl;
    }

}