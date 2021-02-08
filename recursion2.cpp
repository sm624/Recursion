//Shaun McCormick
//CSCI330
//Recursion program 2, ackermann function

#include <iostream>

using namespace std;

int AckFunc(int m, int n);

int main(){
    size_t m=0, n = 0;

    while(n != 5){ //for every value of n(up to 4)
        cout << AckFunc(m, n) << endl; //output ackfunc
        m++; //increment m by 1
        if (m == 4){ //if m hits 4(the max value for m)
            n++; //increment n by 1
            m = 0; //set m back to 0
        }
    } //picture this loop as a table and n being x and m being y, it goes down through every y value, moves right a row
    //and continues to go down that row, up until it hits the last row where the loop terminates.
    return 0;
}

int AckFunc(int m, int n){
    if(m == 0){
        return n+1;
    }
    else if(n == 0){
        return AckFunc(m-1, 1);
    }
    else{
        return AckFunc(m-1, AckFunc(m, n-1));
    }
}