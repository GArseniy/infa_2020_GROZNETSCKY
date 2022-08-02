/// FIX ME!!!

#include <iostream>


class Fraction {
private:
    // Do NOT rename
    int64_t numerator;
    uint64_t denominator;

    // Do NOT delete
    template < class T >
    friend bool operator==(const Fraction& lhs, const T& rhs);

    int64_t GCD(const uint64_t a, const uint64_t b) {return b ? GCD(b, a%b) : a;}
    int64_t LCM(const uint64_t a, const uint64_t b) {return a * b / GCD(a, b);}

public:
    Fraction() = delete;

    void shorten() {
        int64_t gcd = GCD(std::abs(numerator), denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    Fraction(const Fraction& rhs) {
        if (this != &rhs){
            numerator = rhs.numerator;
            denominator = rhs.denominator;
            this->shorten();
        }
        }

    Fraction(int64_t numerator_, uint64_t denominator_) {
        numerator = numerator_;
        denominator = denominator_;
        this->shorten();
        }

    Fraction& operator=(const Fraction& rhs){
        if (this == &rhs) {
            return *this;
        }
        numerator = rhs.numerator;
        denominator = rhs.denominator;
        this->shorten();
        return *this;
    }

    Fraction operator-() const {
        Fraction neg = *this;
        neg.numerator = -numerator;
        return neg;
    }

    Fraction& operator+=( Fraction x) {
        numerator = int64_t(numerator * x.denominator + denominator * x.numerator) / GCD(denominator, x.denominator);
        denominator = LCM(denominator, x.denominator);
        this->shorten();
        return *this;
    }

    Fraction operator+(const Fraction& x) const {
        Fraction sum = *this;
        return sum += x;
    }

    Fraction& operator-=(Fraction x) {
        numerator = int64_t(numerator * x.denominator - denominator * x.numerator) / GCD(denominator, x.denominator);
        denominator = LCM(denominator, x.denominator);
        this->shorten();
        return *this;
    }

    Fraction operator-(const Fraction& x) const {
        Fraction diff = *this;
        return diff -= x;
    }

    Fraction& operator*=(const Fraction& x) {
        numerator *= x.numerator;
        denominator *= x.denominator;
        this->shorten();
        return *this;
    }

    Fraction operator*(const Fraction& x) const {
        Fraction multy = *this;
        return multy *= x;
    }

    int64_t get_numerator() {return numerator;}
    uint64_t get_denominator() {return denominator;}
};


int main(){

    int64_t n1, d1, n2, d2;
    std::cout << "Enter numerator and denominator of f1: ";
    std::cin >> n1 >> d1;
    std::cout << "Enter numerator and denominator of f2: ";
    std::cin >> n2 >> d2;

    Fraction f1(n1, d1);
    Fraction f = f1;
    std::cout << "f1 = " << f.get_numerator() << '/' << f.get_denominator() << '\n';
    Fraction f2(n2, d2);
    f = f2;
    std::cout << "f2 = " << f.get_numerator() << '/' << f.get_denominator() << '\n';
    Fraction f3 = f1 + f2;
    f = f3;
    std::cout << "f1 + f2 = " << f.get_numerator() << '/' << f.get_denominator() << '\n';
    std::cout << "f1 * f2 = " << (f1 * f2).get_numerator() << '/' << (f1 * f2).get_denominator() << '\n';

    return 0;
}
