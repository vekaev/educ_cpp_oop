#include <iostream>
#include "hm1.hpp"

using namespace std;

class Number
{
protected:
    int n;
    int d;

    void set(int _n, int _d = NULL)
    {
        n = _n;

        if (_d) {
            d = _d;
        }
        
        normalize();
    }
public:
    Number(int _n, int _d = 1)
    {
        set(_n, _d);
    }

    bool isInt()
    {
        return d == 1;
    }

    void Print()
    {
        if (isInt())
            cout << n << endl;
        else
            if (n > d)
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
            int newN = n + num_n * d;
            
            set(newN);
        }
        else
        {
            int newN = (n * num_d) + (num_n * d);
            int newD = d * num_d;
            
            set(newN, newD);
        }
    }

    void normalize()
    {
        if (!isInt())
        {
            if (n == d && n != 1)
            {
                set(1, 1);
            }
            // TODO: write more
        }
    }
};

void hm1()
{
    Number n1(5);
    
    int five = 5;
    n1.add(five);
    n1.Print(); // 10
    
    bool one = true;
    n1.add(one);
    n1.Print(); // 11
    
    Number n2(1, 4);
    n1.add(n2);
    n1.Print(); // 45/4
}


// NOTES!!!

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
