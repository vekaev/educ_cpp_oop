#include <iostream>
#include "hm1.hpp"

using namespace std;

class Number
{
protected:
    int n;
    int d;

public:
    Number(int _n, int _d = 1)
    {
        n = _n;
        d = _d;
    }

    bool isInt()
    {
        return d == 1;
    }

    void Print()
    {
        cout << n << endl;
    }

    int getNumerator()
    {
        return n;
    }

    int getDenominator()
    {
        return d;
    }

    void add(Number num)
    {
        n += num.getNumerator();
    }

    //    void add(FractionalNumber num)
    //    {
    //        n = n * num.getDenominator() + num.getNumerator();
    //        d = num.getDenominator();
    //    }
};

// class FractionalNumber : public Number
//{
// public:
//     FractionalNumber(int _n, int _d)
//     : Number(_n)
//     {
//         d = _d;
//     };
//
//     void Print(){
//         cout << n << '/' << d << endl;
//     }
//
//     void add(Number num)
//     {
//         n += num.getNumerator() * d;
//     }
// };

void hm1()
{
    Number n1(1, 2);
    Number n2(2);
    n1.add(n2);
    n1.Print();
}
