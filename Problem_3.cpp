#include <iostream>
using namespace std;

void printOddSeries2(int a)
{
    int count = a % 2 == 0 ? a - 1 : a;
    int printed = 0, val = 1;

    while (printed < count)
    {
        cout << val;
        printed++;
        val += 2;
        if (printed < count)
            cout << ", ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    printOddSeries2(n);
    return 0;
}