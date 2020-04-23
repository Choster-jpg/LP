#include "Varparm.h"
#include "Call.h"
using namespace std;
using namespace Varparm;
using namespace call;

int defaultparam(int p1, int p2, int p3, int p4, int  p5, int p6 = 9, int p7 = 100)
{
    int sum;
    sum = p1 + p2 + p3 + p4 + p5 + p6 + p7;
    return sum / 7;
}

int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Произведение ivarparm: " << ivarparm(7, 1, 2, 3, 4, 5, 6, 7) << endl;
    cout << "Произведение svarparm: " << svarparm(5, 2, 3, 8, 6, 9) << endl;
    cout << "Сумма fvarparm: " << fvarparm(2.0, 3.0, 9.0, FLT_MAX) << endl;
    cout << "Сумма dvarparm: " << dvarparm(120.0, DBL_MAX) << endl << endl;

    int q = 1, w = 2, e = 3, k, m, n, l, h;
    int& qq = q, & ww = w, & ee = e;
    k = cdevl(qq, ww, ee);
   /* cout << "cdecl: " << k << endl;*/
    m = cstd(qq, w, e);
   /* cout << "stdcall: " << m << endl;*/
    n = cfst(q, w, e);
    /*cout << "fastcall: " << n << endl;*/
    l = defaultparam(1, 2, 3, 4, 5);
    cout << "defaultparam(5): " << l << endl;
    h = defaultparam(1, 2, 3, 4, 5, 6, 7);
    cout << "defaultparam(7): " << h << endl;
    return 0;
}

