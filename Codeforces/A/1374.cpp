#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    int x,y,z;

    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> x >> y >> z;

        if(z%x == y){
            cout << z << endl;
        }else{
            if(z%x > y) {
                cout << z - (z%x-y) << endl;
            }else{
                cout << z - (z%x) - (x-y) << endl;
            }
        }
        
    }

}