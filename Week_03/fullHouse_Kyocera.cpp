// Problem Link - https://atcoder.jp/contests/abc263/tasks/abc263_a

#include <iostream>
using namespace std;

int main(){
    int arr[14];

    for(int i=0; i<14; i++){ // Frequency array
        arr[i] = 0;
    }

    for(int i=0; i<5; i++){ // Number of times i occured in the integer set
        int n;
        cin >> n;
        arr[n]++;
    }

    bool cnt1=0, cnt2=0;
    // cnt1 => Frequency 2 occured or not
    // cnt2 => Frequency 3 occured or not

    for(int i=0; i<14; i++){
        if(arr[i] == 2){
            cnt1 = 1;
        }
        if(arr[i] == 3){
            cnt2 = 1;
        }
    }

    if(cnt1==1 && cnt2==1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}

/** Thought Process 
 * We created a frequency array of size 14 => index from 0-13 and initialized a for loop on the array and set value of each index to be 0
 * Now we have taken another for loop that will take the input of 5 numbers from 0-13 and for each number we will increment the value of the index belonging to that number by 1
    Core Concept behind this => Use the input value itself as an index. - we have connected each other which simplifies the login 
 * Then we have initialized 2 boolean values and check for the condition that if any 2 index in frequency array has value 2 & 3 respectively if yes then cout => YES else NO
 */