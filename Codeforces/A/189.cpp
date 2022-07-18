#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int ribbonLength;
    
    cin >> ribbonLength;
    
    int cut[3];
    int total[ribbonLength+1];
    
    cin >> cut[0] >> cut[1] >> cut[2];
    sort(cut, cut+3);

    fill(total, total+ribbonLength+1, -1000000);
    total[0] = 0;

    for(int i=cut[0]; i<=ribbonLength; i++){
        total[i] = max(total[i], total[i-cut[0]]+1);
    }


    for(int i=cut[1]; i<=ribbonLength; i++){
        total[i] = max(total[i], total[i-cut[1]]+1);
    }


    for(int i=cut[2]; i<=ribbonLength; i++){
        total[i] = max(total[i], total[i-cut[2]]+1);
    }

    cout << total[ribbonLength];
    

}