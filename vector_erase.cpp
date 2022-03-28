#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nvec;
    int tmp;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        nvec.push_back(tmp);
    }
    int m, x, y;
    cin >> m >> x >> y;
    nvec.erase(nvec.begin()+m-1);
    nvec.erase(nvec.begin()+x-1, nvec.begin()+y-1);
    size_t vecSize = nvec.size();
    cout << vecSize << endl;
    for(int i = 0; i < vecSize; i++)
        cout << nvec[i] << " ";

    return 0;
}
