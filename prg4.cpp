#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    cout << "Elements of the collection are:\n";
    for (auto num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}