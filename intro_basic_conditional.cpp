//
//
//


#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if(n > -1 && n < 10){
        string s_temp = "";
        switch(n){
            case 0:
            s_temp = "zero";
            break;
            case 1:
            s_temp = "one";
            break;
            case 2:
            s_temp = "two";
            break;
            case 3:
            s_temp = "three";
            break;
            case 4:
            s_temp = "four";
            break;
            case 5:
            s_temp = "five";
            break;
            case 6:
            s_temp = "six";
            break;
            case 7:
            s_temp = "seven";
            break;
            case 8:
            s_temp = "eight";
            break;
            case 9:
            s_temp = "nine";
            break;
        }
        cout << s_temp << endl;
    }else{
        printf("%s\n","Greater than 9");
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
