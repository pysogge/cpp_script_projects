// Run with -c (no input file)

#include <iostream>

using namespace std;

class Box
{
public:
    Box()
    {
        l = b = h = 0;
    }
    Box(int nl, int nb, int nh)
    {
        l = nl;
        b = nb;
        h = nh;
    }
    Box(Box &B)
    {
        l = B.getLength();
        b = B.getBreadth();
        h = B.getHeight();
    }
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return ((long)l * (long)b * (long)h);
    }
    friend bool operator<(Box &A, Box &B)
    {
        if ((A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b == B.b)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend ostream &operator<<(ostream &output, const Box &B)
    {
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }

private:
    int l, b, h;
};

int main()
{
    Box b1;                               // Should set b1.l = b1.b = b1.h = 0;
    Box b2(2, 3, 4);                      // Should set b1.l = 2, b1.b = 3, b1.h = 4;
    Box b3(b2);                           // Should copy b2 into b3;
    cout << b3.getLength() << endl;       // Should return 2
    cout << b3.getBreadth() << endl;      // Should return 3
    cout << b3.getHeight() << endl;       // Should return 4
    cout << b3.CalculateVolume() << endl; // Should return 24
    cout << (b1 < b2) << endl;            // Should return true based on the conditions given
    cout << b2 << endl;                   // Should print 2 3 4 in order.
}