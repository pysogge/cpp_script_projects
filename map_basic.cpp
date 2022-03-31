#include <iostream>
#include <map>
using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, int> marks;
    map<string, int>::iterator itr;

    int query, mark;
    string stud;

    for (int i = 0; i < q; i++)
    {
        cin >> query >> stud;
        if (query == 1)
        {
            cin >> mark;
            itr = marks.find(stud);
            if (itr == marks.end())
            {
                marks.insert(make_pair(stud, mark));
            }
            else
            {
                itr->second += mark;
            }
        }
        else if (query == 2)
        {
            marks.erase(stud);
        }
        else if (query == 3)
        {
            itr = marks.find(stud);
            if (itr == marks.end())
            {
                cout << 0 << endl;
            }
            else
            {
                cout << itr->second << endl;
            }
        }
    }

    return 0;
}
