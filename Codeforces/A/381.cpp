#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int first=0;

    int sereja=0;
    int dima=0;
    cin >> n;
    int last=n-1;

    int numbers[1000];

    for(int i=0; i<n; i++){
        cin >> numbers[i];
    }

    for(int i=0; i<n; i++){
        if(i%2 == 0){
            if(numbers[first] >= numbers[last]){
                sereja += numbers[first];
                first++;
            }else{
                sereja += numbers[last];
                last--;
            }
        }else{
            if(numbers[first] >= numbers[last]){
                dima += numbers[first];
                first++;
            }else{
                dima += numbers[last];
                last--;
            }
        }
    }

    cout << sereja << " " << dima <<endl;

}