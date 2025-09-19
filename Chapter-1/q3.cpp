// Program: Greets the user by name

#include <iostream>
#include <string>   
using namespace std;

int main() {
    cout << "Hello, my name is Roma!" << endl;
    cout << "What is your name?" << endl;

    string user_name;
    getline(cin, user_name);   

    cout << "Hello, " << user_name << ". I am glad to meet you!" << endl;

    return 0;
}