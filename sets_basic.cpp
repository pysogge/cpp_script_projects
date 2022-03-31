#include <iostream>
#include <set>
using namespace std;

int main()
{
    int q;
    cin >> q;

    set<int> s;
    set<int>::iterator itr;
    int x, y;

    for (int i = 0; i < q; i++)
    {
        cin >> y >> x;
        if (y == 1)
            s.insert(x);
        else if (y == 2)
            s.erase(x);
        else if (y == 3)
        {
            if ((itr = s.find(x)) == s.end())
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
