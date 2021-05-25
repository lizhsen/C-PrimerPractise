#include "cPlus2Test.h"
using namespace std;
int main()
{
    // Solution s1;
    // vector<int> gas= {1,2,3,4,5};
    // vector<int> cost = {3,4,5,1,2};
    // s1.canCompleteCircuit(gas,cost);
    int a=3,b = 4;
    decltype(a=b) d=a;
    cout <<d<<endl;
    int c[9]={};
    c[7]=1;
    auto bpos = begin(c);
    auto epos = end(c);
    Test341 test341;
    auto vec = test341.toVector();
    Test342 test342;
    auto arr = test342.toArr();
    auto c1 = arr[2];
    Test343 test343;
    test343.printMethod1();
    test343.printMethod2();
    test343.printMethod3();
    cin.get();
}