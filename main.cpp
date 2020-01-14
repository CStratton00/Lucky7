//
// Created by Collin Stratton on 1/14/2020
// This is my work
//

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

// Largest/Smallest Random Number
int main() {
    int a, b, c, d, e;
    cout << "Enter 5 Integers: "; cin >> a >> b >> c >> d >> e;
    int array[5] = {a, b, c, d, e};
    int largestValue, smallestValue = array[0];

    for(int i=0;i<4;i++) {
        if(array[i+1] > largestValue) {
            largestValue = array[i+1];
        } else if(smallestValue > array[i+1]) {
            smallestValue = array[i+1];
        }
    }
    cout << "-------------------------" << endl;
    for(int i=0;i<5;i++){
        cout << array[i] << endl;
    }
    cout << "The largest value is: " << int(largestValue) << endl;
    cout << "The smallest value is: " << int(smallestValue) << endl;
    cout << "-------------------------" << endl;

    return 0;
}

// Positive ints of 7
int main(){
    int x = 0;
    for(int i=0;i<=50;i++) {
        x += i * 7;
    }
    cout << x << endl;
    return 0;
}

// Factorial
int main() {
    int x = 1;
    for(int i=2;i<=11;i++){
        cout << x << endl;
        x *= i;
    }

    return 0;
}

// Palindrome broken
int main() {
    string phrase;
    int length;
    cout << "Enter a phrase: "; cin >> phrase;

    length =

    for(int i=0;i<length;i++) {

    }

    return 0;
}

// Prime Number
int main() {


    return 0;
}