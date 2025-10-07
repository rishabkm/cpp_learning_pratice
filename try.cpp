#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Rambo is best";
    cout<<str<<endl;

    string str1 = str.substr(0,5);
    cout<<str1<<endl;


    string str2 = str.substr(6,2);
    cout<<str2<<endl;
    return 0;
}