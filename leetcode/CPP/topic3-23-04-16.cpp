//
// Created by BinPC on 2023-04-16.
//
// 可以引入的库和版本相关请参考 “环境说明”
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// polygon按顺时针存储了多边形的顶点，例如：
// {{0., 0.}, {0., 1.}, {1., 1.}, {1., 0.}} 表示一个正方形，期望输出的面积为1
double calculate_polygon_area(const vector<pair<double, double>> &polygon)
{
    // 在这⾥写代码
    int point_num = polygon.size();
    if(point_num < 3)return 0.0;
    double s = 0;
    for(int i = 0; i < point_num; ++i)
        s += polygon[i].first * polygon[(i+1)%point_num].second - polygon[i].second * polygon[(i+1)%point_num].first;
    return fabs(s/2.0);
}

int main()
{
    vector<pair<double, double>> test = {{0., 0.}, {0., 1.}, {1., 1.}, {1., 0.}};
    cout << calculate_polygon_area(test) << endl;
    return 0;
}