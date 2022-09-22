#include <bits/stdc++.h>

using namespace std;

int main() {
    map<char, int> task;

    int n;
    int z;
    char temp;
    int group;
    int total;
    string todo;

    cin >> n;
    for(int q=0; q<n; q++){
        cin >> z;
        cin >> todo;
        map<char, int> task;

        group = 1;
        total = 1;
        temp = todo[0];
        task[todo[0]] = 1;

        
        for(int i=1; i<z; i++){
            if(temp != todo[i]){
                if(task[todo[i]] != 1){
                    total++;
                    group++;
                    task[todo[i]] = 1;
                }else{
                    group++;
                }
                temp = todo[i];
            }
            
        }

        if(group == total){
            
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

}