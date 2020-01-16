//
// Created by Collin Stratton on 1/14/2020
// This is my work
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>

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
    for(int i=1;i<=10;i++){
        x *= i;
        cout << x << endl;
    }

    return 0;
}

// Palindrome
int main() {
    string phrase;
    int length, flag;
    cout << "Enter a phrase: "; cin >> phrase;

    length = phrase.size();

    for(int i=0;i<length;i++) {
        if(phrase[i] != phrase[length-i-1]) {
            flag = 1;
            break;
        }
    }

    if(flag) {
        cout << phrase << " is not a palindrome" << endl;
    } else {
        cout << phrase << " is a palindrome" << endl;
    }

    return 0;
}

// Prime Number
int main() {
    int x, y,flag = 0;
    cout << "Enter a number to check prime: "; cin >> x;

    y = x/2;

    for(int i=2;i<=y;i++) {
        if(x % i == 0) {
            cout << x << " is not a prime number";
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        cout << x << " is a prime number";
    }

    return 0;
}

// Averaging Values
int main() {
    int length;
    double avg;
    int array[] = {12, 3, 4 , 64, 23, 3, 74};
    length = sizeof(array)/4;
    for (int i=0;i<=length-1;i++) {
        avg += array[i];
    }

    cout << "Average Value is: " << avg/length << endl;

    return 0;
}

// Reading Strings
int main() {
    int x;
    string* wordList;
    cout << "Enter the number of words to process: "; cin >> x;

    wordList = new string[x];

    ifstream fin("input.n");

    for(int i=0; i<x;i++) {fin >> wordList[i];}
    for(int i=0; i<x;i++) {cout << wordList[i] << " ";}

    delete[] wordList;

    return 0;
}