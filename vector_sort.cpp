#include <iostream>     // std::cout, cin
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;

int main() {
    int n;
    cin >> n;
    int num;
    vector<int> nvec;
    while (cin >> num)
        nvec.push_back(num);

    sort(nvec.begin(), nvec.end());

    for (const int& n : nvec ) // c++ 11 range based for loop
        cout << n << " ";
    return 0;
}
