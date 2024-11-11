#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void Writetofile(string &fn) {
    ofstream OF(fn);
    if (!OF) {
        cout << "Error: unable to open file" << endl;
        return;
    }
    OF << "ABC,40" << endl;
    OF << "DEF,30" << endl;
    OF.close();
}

void Readthefile(string &fn) {
    ifstream IN(fn); 
    if (!IN) {
        cout << "Error: unable to read file" << endl;
        return;
    }
    string line;
    while (getline(IN, line)) {
        cout << line << endl;
    }
    IN.close(); 
}

int main() {
    string FN = "abc.txt";
    Writetofile(FN);
    Readthefile(FN);
    return 0;
}
