// g++ intro_for_loop.cpp -o intro_for_loop.out
// cat intro_for_loop-input.txt | ./intro_for_loop.out

#include <iostream>
using namespace std;

string get_number_name(int n)
{
    string s_temp = "";
    if (n < 10)
    {

        switch (n)
        {
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
    }
    else
    {
        if (n % 2 == 0)
        {
            s_temp = "even";
        }
        else
        {
            s_temp = "odd";
        }
    }

    return s_temp;
}

void print_number_names(int n, int m)
{
    for (int i = n; i <= m; i++){
        cout << get_number_name(i) << endl;
    }
}

int main()
{

    int n, m;
    cin >> n >> m;

    print_number_names(n, m);

    return 0;
}
