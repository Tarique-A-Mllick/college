#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers;
    int n, value;

    cout << "Enter n:" << endl;
    cin >> n;
    cout << "Enter integers:" << endl;
    
    for (int i = 0; i < n; ++i) {
        cin >> value;
        numbers.push_back(value);
    }

    
    sort(numbers.begin(), numbers.end());
    auto last = unique(numbers.begin(), numbers.end());
    numbers.erase(last, numbers.end());

    cout << "Sorted list:" << endl;
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
