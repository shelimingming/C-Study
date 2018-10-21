#include <iostream>
using namespace std;

/**
 * 
 * 
 * 存储内容：
　　静态区：保存自动全局变量和static变量（包括static全局和局部变量）。
            静态区的内容在整个程序的生命周期内都存在,
            有编译器在编译的时候分配（数据段（存储全局数据和静态数据）和代码段（可执行的代码/只读常量））。
　　栈：保存局部变量。栈上的内容只在函数范围内存在，当函数运行结束的时候，这些内容也会自动销毁。
            其特点是效率高但是空间大小有限。
　　堆：由malloc系列函数或者new操作符分配的内存。
            其生命周期由free和delete决定。
            在没有释放之前一直存在，直到函数结束。
            其特点是使用灵活，空间比较大，但容易出错。
**/

int main()
{
    double *pvalue = NULL; // 初始化为 null 的指针
    pvalue = new double;   // 为变量请求内存
    cout << "Value of pvalue : " << *pvalue << endl;
    cout << "pvalue:" << pvalue << endl;

    *pvalue = 29494.99; // 在分配的地址存储值
    cout << "Value of pvalue : " << *pvalue << endl;
    cout << "pvalue:" << pvalue << endl;

    delete pvalue; // 释放内存
    cout << "Value of pvalue : " << *pvalue << endl;
    cout << "pvalue:" << pvalue << endl;

    return 0;
}