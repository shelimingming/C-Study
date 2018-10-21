#include <iostream>
using namespace std;

//#define 预处理
#define PI 3.14159
//参数宏
#define MIN(a, b) (a < b ? a : b)
//条件编译
#define DEBUG

int main()
{

    cout << "Value of PI :" << PI << endl;

    int i, j;
    i = 100;
    j = 30;
    cout << "较小的值为：" << MIN(i, j) << endl;

#ifdef DEBUG
    cerr << "Trace: Inside main function" << endl;
#endif

#if 0
   /* 这是注释部分 */
   cout << MKSTR(HELLO C++) << endl;
#endif

#ifdef DEBUG
    cerr << "Trace: Coming out of main function" << endl;
#endif

    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

    return 0;
}