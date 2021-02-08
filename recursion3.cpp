//Shaun McCormick
//CSCI330
//Recursive program that checks to see if a word is a palindrome

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void OpenFile(ifstream &inFile);
bool Palindrome(string word, size_t i, size_t j);    


int main(){
    ifstream inFile;
    string word;
    size_t i=0, j=0, count=1;
    OpenFile(inFile);
    getline(inFile, word);
    j = word.size() - 1;
    while(inFile){
        cout << "Line " << count << " is ";
        if(Palindrome(word, i, j) == true){
            cout << "a palindrome." << endl;
        }
        else{
            cout << "not a palindrome." << endl;
        }
        getline(inFile, word);
        j = word.size() - 1;
        i=0;
        count++;
    }

    return 0;
}

void OpenFile(ifstream &inFile){
    string fileName;

    cout << "Please enter the file name ->";
    cin >> fileName;
    inFile.open(fileName.c_str());;
    
    return;
}

bool Palindrome(string word, size_t i, size_t j){    
    if(i<j){
        if (word[i] != word[j]){
            return false;
        }
        else{
            i++;
            j--;
            return Palindrome(word, i, j); 
        }
    }
    else{
        return true;
    }
}