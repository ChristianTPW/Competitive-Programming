#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int t;
    int numbers[1000];
    int temp[1000];
    int spy;
    cin >> n;


    for(int counter=0; counter<n; counter++){
        

        cin >> t;

        for(int i=0; i<t; i++){
            cin >> numbers[i];
            temp[i] = numbers[i];
        }
        sort(numbers, numbers+t);

        if(numbers[0] == numbers[1]){
            spy = numbers[t-1];
        }else{
            spy = numbers[0];
        }

        for(int i=0; i<t; i++){
            if(temp[i] == spy){
                cout << i+1 << endl;
                break;
            }
        }

    }
}