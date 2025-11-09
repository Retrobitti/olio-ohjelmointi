
#include <iostream>

using namespace std;

void calcSum(int a, int b) {
    int sum = a + b;
    cout << "sum: " << sum <<endl;
}

// My preference would be to use calcDiv(float a, float b) but instructions say that this needs to take integer so integer it is.
void calcDiv(int a, int b) {
    if(b==0) {
        cout << "Error: Divider can't be zero" <<endl;
    }
    else {
        float div = static_cast<float>(a) / b; // It's enough to cast one of the integers as float and c++ will automatically return float.
        cout << "div: " << div <<endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}

float retDiv(int a, int b) {
    if(b == 0) {
        throw std::runtime_error("Divider can't be zero");
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b, sum;
    float div;

    cout << "Give first number: ";
    cin >> a;

    cout << "Give second number: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    sum = retSum(a, b);
    cout << a << "+" << b << " = " << sum << endl;
    try {
        div = retDiv(a, b);
        cout << a << "/" << b << " = " << div << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }


    return 0;
}
