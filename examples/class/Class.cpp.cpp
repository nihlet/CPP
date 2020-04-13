#include<iostream>
using namespace std;
class Rational
{
public:
    // Конструктор по умолчанию
    explicit Rational() = default;
    
    // Параметризируемый конструктор
    Rational(int nom, int den){
        nomenator = nom;
        demominator = den;
        positive = new bool(false);
        std::cout << "parametric constructor \n";
    }
    // Деструктор
    ~Rational(){
        delete positive;
    }
    // Конструктор копирования
    Rational(const Rational &r){
        nomenator = r.nomenator;
        demominator = r.demominator;
        positive = new bool(false);
        *positive = *r.positive;
        std::cout << "copy constructor \n";

    }

    bool isPositiv()
    {
        return nomenator>0 && demominator>0 ||
            nomenator<0 && demominator<0;
    }

    Rational& operator=(const Rational &other)
    {
        if(this == &other)
             return *this;
        nomenator = other.nomenator;
        demominator = other.demominator;
        delete positive;
        positive = new bool(false);
        *positive = *other.positive;
        std::cout << "copy operator \n";
        return *this;
    }
    Rational operator+(const Rational &other)
    {
        return Rational(nomenator + other.nomenator,
            demominator + other.demominator
        );
    }
    friend ostream& operator<<(ostream &stream, Rational r);
private:
    int nomenator;
    int demominator;
    bool* positive = nullptr;
};

ostream& operator<<(ostream &stream, Rational r)
{
    stream << r.nomenator << "/" << r.demominator;
    return stream;
}
int main()
{
    Rational a = {1,2};
    cout << a.isPositiv() << endl; 

    Rational* b = new Rational(1,1);
    Rational e(1,3);
    Rational f = a;
    //Rational f(a);

    Rational g(Rational(1,5)); // => Rational g(1,5); 
    a = e;
    a = a;
    cout << a + e << endl; 

    delete b; 

}

