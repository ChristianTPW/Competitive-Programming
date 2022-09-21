#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int dim;
    int k;

    cin >> n;

    for(int z=0; z<n; z++) {
        cin >> dim >> k;
        int numbers[dim];
        int main[dim];
        int sum=0;

        for(int a=0; a<2; a++){
            for(int b=0; b<dim; b++){
                if(a == 0){
                    cin >> main[b];
                }else{
                    cin >> numbers[b];
                }
            }
        }

        sort(main, main+dim);
        sort(numbers, numbers+dim);


        int counter=0;

        for(int i=0; i<dim; i++){
            if(main[counter] <= numbers[dim-1-counter] && counter < k){
                sum += numbers[dim-1-counter];    
                //cout << "nihh: " << numbers[dim-1-counter] <<endl;
                counter++;
            }
        }

        for(int i=0; i<dim-counter; i++){
            //cout << "nih: " << main[dim-1-i] <<endl;

            sum += main[dim-1-i];
        }

        for(int i=0; i<dim; i++){
            //cout << numbers[i] << endl;
        }

        cout << sum << endl;;

    }
}