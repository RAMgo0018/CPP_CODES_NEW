#include <iostream>
#include <numeric>
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;
    void simplify() {
        int gcd_value = gcd(numerator, denominator);
        numerator /= gcd_value;
        denominator /= gcd_value;
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }
public:
    Rational(int num = 0, int den = 1) {
        numerator = num;
        denominator = den;
        if (den == 0) {
            cout << "Denominator cannot be zero, setting denominator to 1." << endl;
            denominator = 1;
        }
        simplify();
    }
    bool operator==(Rational& other) {
        return numerator == other.numerator && denominator == other.denominator;
    }
    Rational operator+(const Rational& other)  {
        Rational temp;
        temp.numerator = numerator * other.denominator + other.numerator * denominator;
        temp.denominator = denominator * other.denominator;
        return temp;
    }
    Rational operator-(const Rational& other)  {
        Rational temp;
        temp.numerator= numerator * other.denominator - other.numerator * denominator;
        temp.denominator = denominator * other.denominator;
        return temp;
    }
    Rational operator*(const Rational& other)  {
        Rational temp;
        temp.numerator= numerator * other.numerator;
        temp.denominator = denominator * other.denominator;
        return temp;
    }
    int operator/(const Rational& other)  {
        if (other.numerator == 0) {
            cout << "does not divide by zero" << endl;
            return 0;
        }
        int num = numerator * other.denominator;
        int den = denominator * other.numerator;
        return Rational(num, den);
    }
    Rational operator++() {
        Rational temp;
        numerator += denominator; 
        temp.numerator=numerator;
        temp.denominator=denominator; 
        simplify();
        return temp;
    }
    Rational operator++(int) {
        Rational temp;
        temp.numerator=numerator;
        temp.denominator=denominator; 
        numerator += denominator;
        simplify();
        return temp;
    }
    Rational operator--() {
        Rational temp;
        numerator -= denominator;
        temp.numerator=numerator;
        temp.denominator=denominator; 
        simplify();
        return temp;
    }
    Rational operator--(int) {
        Rational temp;
        temp.numerator=numerator;
        temp.denominator=denominator; 
        numerator -= denominator;
        simplify();
        return temp;
    }
    operator int() {
        return numerator / denominator;
    }

    operator float() {
        return (float)numerator / denominator;
    }
    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};
int main() {
    Rational r1(3, 4);
    Rational r2(2, 5);
    if (r1 == r2) {
        cout << "r1 and r2 are equal." << endl;
    } else {
        cout << "r1 and r2 are not equal." << endl;
    }
    Rational r3 = r1 + r2;
    cout << "r1 + r2 = ";
    r3.print();
    Rational r4 = r1 - r2;
    cout << "r1 - r2 = ";
    r4.print();
    Rational r5 = r1 * r2;
    cout << "r1 * r2 = ";
    r5.print();
    Rational r6 = r1 / r2;
    cout << "r1 / r2 = ";
    r6.print();
    cout << "r1 before increment: ";
    r1.print();
    ++r1;
    cout << "r1 after prefix increment: ";
    r1.print();
    r1++;
    cout << "r1 after postfix increment: ";
    r1.print();
    cout << "r1 before decrement: ";
    r1.print();
    --r1;
    cout << "r1 after prefix decrement: ";
    r1.print();
    r1--;
    cout << "r1 after postfix decrement: ";
    r1.print();
    int int_value = (int)r1;
    float float_value = (float)r1;
    cout << "r1 as int: " << int_value << endl;
    cout << "r1 as float: " << float_value << endl;
    return 0;
}