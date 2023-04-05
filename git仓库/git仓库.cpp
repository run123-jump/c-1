// git仓库.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 整数幂乘方运算

#include <iostream>

using namespace std;

long long int pospow(long long int x, long long int n)//正指数幂乘方
{
    long long int a = 1;
    while (n != 0)
    {
        a *= x;
        --n;
    }
    return a;
}//正指数幂乘方

long float minuspow(long long int x, long long int n)//负指数幂乘方
{
    long long int a = 1;
    long float b;
    while (n != 0)
    {
        a *= x;
        n++;
    }
    b = 1.0 / a;
    return b;
}//负指数幂乘方

int main()
{
    long long int x = 0, n = 0;
    long float pow = 0.0;
    cin >> x >> n;
    if (n >= 0)
        pow = pospow(x, n);
    else
        pow = minuspow(x, n);
    cout << pow << endl;
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
