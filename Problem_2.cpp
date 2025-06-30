#include <iostream>
using namespace std;

void printOddSeries1(int a)
{
    int val = 1;
    for (int i = 0; i < a; ++i)
    {
        cout << val;
        if (i != a - 1)
            cout << ", ";
        val += 2;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    printOddSeries1(n);
    return 0;
}