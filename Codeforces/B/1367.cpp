#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n;
    int numArray;
    int array[40];
    int odd, even, prev, diff;

    cin >> n;

    for(int u=0; u<n; u++){
        odd = 0;
        even = 0;
        diff = 0;

        cin >> numArray;

        for(int i=0; i<numArray; i++){
            cin >> array[i];

            
            if(array[i]%2 == 0){
                even++;

                if(i%2 != array[i]%2){
                    diff++;
                }
            }else{
                odd++;
                if(i%2 != array[i]%2){
                    diff++;
                }
            }

        }
        if(odd-even > 0 || numArray == 1 || even-odd > 1){
                if(even == 1 && numArray == 1) {
                    cout << 0 << endl;
                }else{
                    cout << -1 << endl;
                }

            }else{
                cout << diff/2 << endl;
            }
   }





}