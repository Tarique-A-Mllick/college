#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void WriteFile(const string &filename) {
    ofstream outf(filename); 
    if (!outf) {
        cout << "Error opening file for writing!" << endl;
        return;
    }
    outf << "Rohit, 36" << endl;
    outf << "Akash, 19" << endl;
    outf.close(); 
}

void ReadFile(const string &filename) {
    ifstream inf(filename); 
    if (!inf) {
        cout << "Error opening file for reading!" << endl;
        return;
    }
    string line;
    while (getline(inf, line)) { 
        cout << line << endl;
    }
    inf.close(); 
}

int main() {
    string filename = "people.txt";
    WriteFile(filename);  
    ReadFile(filename);   
    return 0;
}
