#include <iostream>

// this is a simple calculator program
// it should add
// it should subtract
// it should divide
// it should multiply
// it should print results

using namespace std;

class calculator
{
private:
    int _result = 0;
    string _operation = " no Operation on ";
    int _lastNumber = 0;

public:
    void add(int number)
    {
        _result += number;
        _operation = " adding ";
        _lastNumber = number;
    }

    void subtract(int number)
    {
        _result -= number;
        _operation = " subtracting ";
        _lastNumber = number;
    }

    void devide(int number)
    {
        (number == 0)?number = 1: number = number;

        _result /= number;
        _operation = " dividing by ";
        _lastNumber = number;
    }

    void multiply(int number)
    {
        _result *= number;
        _operation = " multiplying by ";
        _lastNumber = number;
    }

    int printResult()
    {
        cout << " the result after " << _operation << _lastNumber <<  " is : " << _result << endl;
    }

    void Clear(){_result = 0; _operation = " clear by "; _lastNumber = 0;}
};

int main()
{

    calculator calc;
    calc.printResult();

    calc.add(100);
    calc.printResult();

    calc.subtract(30);
    calc.printResult();

    calc.multiply(2);
    calc.printResult();

    calc.devide(2);
    calc.printResult();

    calc.Clear();
    calc.printResult();
    return 0;
}
