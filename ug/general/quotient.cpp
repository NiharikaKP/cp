#include <bits/stdc++.h>
using namespace std;

struct Quotient 
{
    int nominator;
    int denominator;

    // Construct a new Quotient with the given
    // numerator and denominator
    Quotient(int n, int d) {
        nominator = n;
        denominator = d;
        if (denominator == 0) {
            throw std::invalid_argument("Denominator cannot be zero");
        }
    }

    // Return a new Quotient, this instance plus
    // the "other" instance
    Quotient add(const Quotient &other) const {
        int newNominator = this->nominator * other.denominator + other.nominator * this->denominator;
        int newDenominator = this->denominator * other.denominator;
        return Quotient(newNominator, newDenominator);
    }

    // Return a new Quotient, this instance times
    // the "other" instance
    Quotient multiply(const Quotient &other) const {
        int newNominator = this->nominator * other.nominator;
        int newDenominator = this->denominator * other.denominator;
        return Quotient(newNominator, newDenominator);
    }

    // Output the value on the screen in the format n/d
    void print() const { 
        cout << nominator << "/" << denominator << "\n";
    }
};

int main(void)
{
    Quotient q(95, 8);
    Quotient q1 = q.add(Quotient(5, 2));
    Quotient q2 = q.multiply(Quotient(7, 3));
    q.print();
    cout << q1.nominator << "/" << q1.denominator << "\n" << q2.nominator << "/" << q2.denominator << "\n";
}

