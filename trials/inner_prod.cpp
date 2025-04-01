#include <iostream>
#include <vector>

using namespace std;

template<class Ta, class Tb>
Tb inner_product(const vector<Ta>& a, const vector<Ta>& b) {
    Tb sum = 0;
    for(size_t i = 0; i < a.size(); i++) {
        sum += a[i] * b[i];
    }
    return sum;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {6, 7, 8, 9, 10};

    cout << "The inner product is: " << inner_product<int, double>(a, b) << endl;
    return 0;
}
