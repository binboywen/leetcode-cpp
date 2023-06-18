//
// Created by BinPC on 2023-04-22.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
#define  CALL(x,y) x * y + x
#define func (int (* b) (int c))
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <bits/stdc++.h>

//在所有使用GNU 扩展关键字的表达式之前加__extension__(两个下划线)关键字后，
//使用pedantic选项编译时，编译器就不再发出警告信息

//typeof(expression)用来获取expression的类型
#define min(X,Y)         \
(__extension__           \
({                       \
typeof(X) _x=(X), _y=(Y);\
(_x<_y)?_x:_y;           \
})                       \
)


//下面有副作用
//#define min(a,b) ((a)<(b)?(a):b)

/* 主函数 */

int vector_reverse(int* p_inout, int p_inoutLen ) {
    // write code here
    for (int i = 0; i < p_inoutLen / 2; i++)
    {
        int x = p_inout[p_inoutLen - 1 - i];
        p_inout[p_inoutLen - 1 - i] = p_inout[i];
        p_inout[i] = x;
    }
}
#include<stdio.h>
//返回1，小端
//返回0，大端
int check_sys()
{
    int i = 1;
    return (*(char*)&i);
}
//返回1，小端
//返回0，大端
int check_sys_V2()
{
    union
    {
        int i;
        char c;
    }u;
    u.i = 1;
    return u.c;
}

int main()
{

//    char *s= "AAA";
//    printf("%s", s);
//    char a = '8';
//    memcpy(s, &a, sizeof(char));
//    printf("%s", s);

    int a[] = {1,2,3,4,5};
    int *p[] = {a, a+1, a+2, a+3};
    int **q = p;
    cout << *(p[0] + 1) + **(q+2) << endl;

    return 0;
}

