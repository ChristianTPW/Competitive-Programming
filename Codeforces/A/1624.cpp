#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    int n;

    cin >> t;

    for(int z=0; z<t; z++){
        cin >> n;
        int a[n];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        cout << a[n-1] - a[0] << endl;

    }

}