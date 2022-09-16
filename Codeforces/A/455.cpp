#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    long long total[100001] = {0};
    int input;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> input;
        total[input]++;
    }

    for(int i=2; i<100001; i++){
        total[i] = max(total[i-2] + total[i]*i, total[i-1]);
    }

    cout << total[100000];

}