#include <algorithm>
#include <iostream>
#include <vector>

int solution(std::vector<int> &v) {
    sort(v.begin(), v.end());
    if (v[0] > 1)
        return 1;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= 1) {
            if (v[i] != v[i + 1] && v[i] + 1 != v[i + 1])
                return v[i] + 1;
        }
    }
    return 1;
}

int main() {
    //1, 2, 0               3
    //3, 4, -1, 1           2
    //7, 8, 9, 11, 12       1
    //1, 1, 1, 1            2
    //0                     1
    //-1, -2, -3            1
    //1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
    //21
    std::vector v = {0,2,3,4};
    std::cout << solution(v);
}