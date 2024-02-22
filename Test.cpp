// #include <algorithm>
// #include <numeric>
// #include <math.h>
// #include <string.h>
// #include <stdio.h>

#include <iostream>
using namespace std;

typedef long long ll;

void chuong01(int x){
    cout << "chuong 01 + "<< x << endl;
}

int main (){   
    int f[31];
    int ans = 0;
    for(int i = 0; i < 31; i++){
        if(i == 0){
            f[i] = 1;
        }
        else{
            f[i] = f[i-1]*2;
        }
        ans += f[i];
    }
    cout << ans << endl;
    cout << "=====" << endl;
    chuong01(9999);
    return 0;
}