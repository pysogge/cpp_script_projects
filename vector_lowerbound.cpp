#include <vector>
#include <iostream>
using namespace std;

/*
Outputs Yes if vector contains query,
No if it does not
Outputs a 1-based index of query or next smallest element if query is not in vector
 Yes 1
 No 5
 Yes 6
 Yes 8
 */

int main()
{
    int n;
    cin >> n;
    vector<int> nvec;
    int tmp;

    for (int i = 0; i < n; i++)
        cin >> tmp, nvec.push_back(tmp);

    int q;
    cin >> q;
    int query;
    vector<int>::iterator qiter;

    for (int i = 0; i < q; i++)
    {
        cin >> query;
        int npos;
        int nhas;

        qiter = lower_bound(nvec.begin(), nvec.end(), query);

        if(*qiter == query || (*qiter + 1) == query){
            /* return the index of the element iter - iter, +1 for 1-index */
            cout << "Yes " << qiter - nvec.begin() + 1 << endl;
        }else{
            /* return the index of the just smaller element iter - iter, +1 for 1-index */
            cout << "No " << qiter - nvec.begin() + 1 << endl;
        }
    }

    return 0;
}
