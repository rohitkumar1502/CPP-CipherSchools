#include<iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string find = "Hi my name is rohit and I love programing";
     stringstream ss(find);
    string word;
    vector<string> words;

    
    while (ss >> word) {
        words.push_back(word);
    }
}