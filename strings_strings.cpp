#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    getline(cin,s1);
    getline(cin,s2);

    printf("%lu %lu\n", s1.size(), s2.size());

    printf("%s\n", (s1 + s2).c_str());

    string s1p, s2p;
    s1p = s2.substr(0,1) + s1.substr(1);
    s2p = s1.substr(0,1) + s2.substr(1);

    printf("%s %s\n", s1p.c_str(), s2p.c_str());

    return 0;
}