#include <iostream>
#include "hm1.hpp"

using namespace std;

// class Number;

// class FractionalNumber : public Number
// {
// public:
//     FractionalNumber(int _n, int _d)
//         : Number(_n)
//     {
//         d = _d;
//     };

//     void Print()
//     {
//         cout << n << '/' << d << endl;
//     }

//     void add(Number num)
//     {
//         n += num.getNumerator() * d;
//     }
// };

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
        if (this->isInt())
            cout << n << endl;
        else
            cout << n << '/' << d << endl;
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
        int num_n = num.getNumerator();
        int num_d = num.getDenominator();

        if (num.isInt())
        {
            n += num_n * d;
        }
        else
        {
            n = (n * num_d) + (num_n * d);
            d *= num_d;
        }

        this->normalize();
    }

    void normalize()
    {
        if (!this->isInt())
        {
            if (n == d)
            {
                n = 1;
                d = 1;
            }
            else if (n > d)
            {
            }
        }
    }

    // void add(FractionalNumber num)
    // {
    //     n = n * num.getDenominator() + num.getNumerator();
    //     d = num.getDenominator();
    // }
};

void hm1()
{
    Number n1(5);
    Number n2(1, 4);
    n1.add(n2);
    n1.Print();
}
