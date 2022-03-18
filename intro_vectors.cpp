#include <iostream>
#include <vector>
using namespace std;


int main() {
    int n, q;
    int k, val;
    int indexI, indexJ;

    // cin >> n >> q;
    scanf("%d %d", &n, &q);
    
    vector< vector<int> > a(n);

    for(int i = 0; i < n; i++){
        cin >> k;
        vector<int> b(k);
        for(int j = 0; j < k; j++){
            cin >> val;
            b[j] = val;
            
            // cout << val << "->" << b[j] << endl;
            // b.push_back(val) not working
        }
        a[i] = b;
    }
    
    for(int m = 0; m < q; m++){
        cin >> indexI >> indexJ;
        cout << a[indexI][indexJ] << endl;
    }
    
    return 0;
}