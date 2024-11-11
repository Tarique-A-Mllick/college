#include <iostream>
using namespace std;

class Counter {
private:
    static int count; 

public:
    
    Counter() {
        count++;
    }

    
    static int getCount() {
        return count;
    }

    
    void showCount() {
        cout << "Current Count: " << count << endl;
    }
};


int Counter::count = 0;

int main() {
    
    Counter obj1;
    Counter obj2;

    cout << "Number of objects created: " << Counter::getCount() << endl;

    
    obj1.showCount();
    obj2.showCount();

    return 0;
}
