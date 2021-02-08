//Shaun McCormick
//CSCI330
//Recursion program 1

#include <iostream>
#include <iomanip>

using namespace std;

int Power(int a, int b);

int main(){
    int a = 1, b=0, answer = 0;
    bool truth = false;
    cout << "Base/Exponent | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |" << endl;
    while(a != 7){
        cout << setw(7) << a << setw(9) << " | ";
        while(b != 8){
            answer = a;
            cout << Power(a, b) << " | ";
            b++;
        }
        a++;
        b=0;
        cout << endl;
    }

    return 0;
}

int Power(int a, int b){    
    if(b == 0){
        return 1;
    }
    else if(b == 1){
        return a;
    }
    else{
        return Power(a, b-1) * a;
    }
}
