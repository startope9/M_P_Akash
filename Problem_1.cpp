#include <iostream>
using namespace std;

class Calculator
{
public:
    double a, b;
    string operation;

    Calculator(double a, double b, string operation)
    {
        this->a = a;
        this->b = b;
        this->operation = operation;
    }

    void compute()
    {
        if (operation == "add")
        {
            cout << "Result: " << a + b << endl;
        }
        else if (operation == "sub")
        {
            cout << "Result: " << a - b << endl;
        }
        else if (operation == "mul")
        {
            cout << "Result: " << a * b << endl;
        }
        else if (operation == "div")
        {
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Division by zero is not allowed." << endl;
        }
        else
        {
            cout << "Invalid operation" << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        double a, b;
        string op;
        cin >> a >> b >> op;
        Calculator calc(a, b, op);
        calc.compute();
    }
    return 0;
}