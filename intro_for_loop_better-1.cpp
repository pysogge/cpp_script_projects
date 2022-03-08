// g++ intro_for_loop_better-1.cpp -o intro_for_loop_better-1.out
// cat intro_for_loop-input.txt | ./intro_for_loop_better-1.out

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    string c[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for (int i = a; i <= b; i++)
        cout << ((i <= 9) ? c[i] : ((i % 2 == 0) ? "even" : "odd")) << endl;
}