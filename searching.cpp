#include<bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int main() {
   
    string str = "Hello Geeks";

    size_t pos = str.find("Geeks");  
    size_g cha = str.find("Hello");

    if (cha < str.size()) {
        cout << "\"Geeks\" found at index: " << cha << endl;
    }

    return 0;
}