#include <iostream>
using namespace std;

class box
{
    int l, b, h;

    public ;
    void setdata(int x, int y, intz)
    {
        l = x, b = y, h = z;
    }
    int getvolume()
    {
        return l * b * h;
    }

    friend box operator+(box m, box n)
    {
        box t;
        t.l = m.l + n.l;
        t.b = m.b + n.b;
        t.h = m.h + n.h;
        return t;
    }

    friend box operator(box n, int)
    {
        box t;
        t.l = t + n.l;
        t.b = t + n.b;
        t.h = t + n.h;
        return t;
    }
    int main()
    {
        box a, b, c, d;
        a.setdata(2, 2, 2);
        cout << "value of box";
    }
};
