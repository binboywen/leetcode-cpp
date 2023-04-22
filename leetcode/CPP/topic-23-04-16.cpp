//
// Created by BinPC on 2023-04-16.
//
/**
 * Given a vector of L numbers and a vector of K intervals which stores vector's index, calcuate it's mean and var with time complexity O(L+K) and memory constraint O (L).
 * eg: vector: [9, 1, 4, 5, 6, 7]
 *     intervals: [[0, 2], [1, 3]]
 * you should calculate [9, 1, 4] and [1, 4, 5]'s mean and variance.
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

template<typename T>
void printVector(const std::vector<T>& v)
{
    std::for_each(v.cbegin(), v.cend(), [](const T & elem ) { std::cout<<elem<<" ";});
    std::cout << std::endl;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

pair<float, float> calVarStdev(vector<int> vecNums)//均值、方差
{
    pair<float, float> res;
    float sumNum = accumulate(vecNums.begin(), vecNums.end(), 0.0);
    float mean = sumNum / vecNums.size(); //均值
    float accum = 0.0;
    for_each(vecNums.begin(), vecNums.end(), [&](const float d) {
        accum += (d - mean)*(d - mean);
    });
    float variance = accum / vecNums.size(); //方差
    res.first = mean;
    res.second = variance;
    return res;
}

// You are asked to implement the following function.
void compute_mean_variance(const std::vector<int>& numbers,
                           const std::vector<std::pair<size_t,
                           size_t>>& intervals,
                           std::vector<float>& means,
                           std::vector<float>& variances)
{
    for (int i = 0; i < intervals.size(); i++) {
        vector<int> subVector;
        for (int idx = intervals[i].first; idx <= intervals[i].second; idx++) {
            subVector.push_back(numbers[idx]);
        }
        pair<float, float> ret = calVarStdev(subVector);
        means.push_back(ret.first);
        variances.push_back(ret.second);
    }
}

int main()
{
    vector<int> test {9,1,4,5,7,6};
    std::vector<std::pair<size_t, size_t>> intervals{{0,2}, {1,3}};
    std::vector<float> means;
    std::vector<float> variances;
    compute_mean_variance(test, intervals, means, variances);
    for (int idx = 0; idx < means.size(); idx++) {
        cout << means[idx] << endl;
        cout << variances[idx] << endl;
    }
}