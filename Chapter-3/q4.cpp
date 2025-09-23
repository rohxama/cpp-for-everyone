// Program: Sort three strings lexicographically

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2, s3;
    cout << "Enter three strings: ";
    cin >> s1 >> s2 >> s3;

    string arr[3] = {s1, s2, s3};
    sort(arr, arr + 3);

    for (int i = 0; i < 3; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
