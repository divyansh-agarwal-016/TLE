// https://atcoder.jp/contests/abc258/tasks/abc258_a

#include <bits/stdc++.h>
using namespace std;
/** int main(){
        int k, H, M, K;
        cin >> k;
        int h = 21;
        int m = 00;

        if(k<0){
            return 0;
        }
        else if(k>=0&&k>60){
            int M = m+k;
            cout << h << ":" << setw(2) << setfill('0') << M << endl;
        }
        else{
            int H = h+1;
            int K = k - 60;
            int M = m+K;
            cout << H << ":" << setw(2) << setfill('0') << M << endl;
        }
} */    
// My Appraoch its passing only 1 test case out of 9

int main(){
    int k;
    cin >> k;

    int hour = 21;
    if(k>=60){
        hour == 22;
        k=k-60;
    }
    cout << hour << ":";
    if(k<10){
        cout << 0 << k << endl;
    }
    else{
        cout << k << endl;
    }
}