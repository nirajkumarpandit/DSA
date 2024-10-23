#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    cout << "Bitwise and (a & b) :" << (a & b) << endl;
    /*and
    0 0 --> 0       4 --> 100
    0 1 --> 0       5 --> 101
    1 0 --> 0       & --> 100 --> 4
    1 1 --> 1
    */
    cout << "Bitwise or (a | b) :" << (a | b) << endl;
    /* OR
   0 0 --> 0       4 --> 100
   0 1 --> 1       5 --> 101
   1 0 --> 1       | --> 101 --> 5
   1 1 --> 1
   */
    cout << "Bitwise not (~a) :" << (~a) << endl;
    /* NOT
    0 --> 1         4 --> 100
                    ~a --> 111...011
    1 --> 0          1s complement -->00100
                    2s complement -->  100
                                        +1
                                        101 --> -5
    */
    cout << "Bitwise  XOR (a^b) :" << (a ^ b) << endl;
    return 0;
}