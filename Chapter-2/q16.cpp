// Program: Constructs a complete file name from user input

#include <iostream>
#include <string>
using namespace std;

int main() {
    string drive, path, filename, extension;

 
    cout << "Enter the drive letter (e.g., C): ";
    cin >> drive;
    cout << "Enter the path (e.g., \\Windows\\System): ";
    cin >> path;
    cout << "Enter the file name (e.g., Readme): ";
    cin >> filename;
    cout << "Enter the extension (e.g., txt): ";
    cin >> extension;

 
    string full_file_name = drive + ":\\" + path + "\\" + filename + "." + extension;

   
    cout << "Complete file name: " << full_file_name << endl;

    return 0;
}
