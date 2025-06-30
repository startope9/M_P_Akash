#include <iostream>
#include <map>
#include <vector>

using namespace std;

void countMultiples(const vector<int> &nums)
{
    map<int, int> result;
    for (int i = 1; i <= 9; ++i)
        result[i] = 0;

    for (int num : nums)
        for (int i = 1; i <= 9; ++i)
            if (num % i == 0)
                result[i]++;
    
    for (int i = 1; i <= 9; ++i)
        cout << i << ": " << result[i] << endl;
    
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &i : v)
        cin >> i;
    countMultiples(v);
    return 0;
}
