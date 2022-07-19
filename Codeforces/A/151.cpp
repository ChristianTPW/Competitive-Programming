#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,k,l,c,d,p,nl,np;

    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int var[3];

    var[0] = k*l/nl;
    var[1] = c * d;
    var[2] = p/np;

    sort(var, var+3);

    cout << var[0] / n;
}