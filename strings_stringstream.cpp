#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int> nvec;
    stringstream ss(str);
    int tmp;
    char ch;
    while (ss >> tmp){ // returns true if it sucks in an int
        nvec.push_back(tmp);
        ss >> ch; // suck in whatever char is in between int
    }
    return nvec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}