#include <iostream>
using namespace std;


template<typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    
    int a = 10, b = 20;
    cout << "Maximum of " << a << " and " << b << " is: " << findMax(a, b) << endl;

    
    float c = 10.5, d = 21.6;
    cout << "Maximum of " << c << " and " << d << " is: " << findMax(c, d) << endl;

    
    char e = 'x', f = 'y';
    cout << "Maximum of '" << e << "' and '" << f << "' is: '" << findMax(e, f) << "'" << endl;

    return 0;
}
