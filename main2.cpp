#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &v) {
    int min = v[0];
    for (int i = 1; i < v.size(); i++)
        if (v[i] > 0 && min > v[i])
            min = v[i];
    if (min > 1 || min < 1)
        return 1;
    interrupted:
    for (int i: v)
        if (min + 1 == i) {
            min = i;
            goto interrupted;
        }
    return min + 1;

}


int main() {
    vector<int> V;
    int n, k;
    cin >> n;
    while (n-- > 0) {
        cin >> k;
        V.push_back(k);
    }
    cout << solution(V);
    return 0;
}