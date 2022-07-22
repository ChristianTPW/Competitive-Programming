#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int t;
    int input;
    int counter;
    int answer[1000001];
    cin >> t;

    for(int z=0; z<t; z++){
        cin >> input;

        if(input/2%2 == 1){
            cout << "NO" << endl;
        }else{
            cout << "YES" <<endl;
            answer[0] = 2;
            for(int i=1; i<input/2; i++){
                answer[i] = answer[i-1] + 2; 
            }

            for(int i=input/2; i<input-1; i++){
                answer[i] = answer[i-input/2]-1;
            }

            answer[input-1] = answer[input-2] + input/2 + 2;

            for(int i=0; i<input; i++){
            cout << answer[i] << " ";
            }
            cout << " "<< endl;
        }

        
    }
}