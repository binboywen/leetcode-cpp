//
// Created by BinPC on 2023-04-16.
//
// 可以引⼊的库和版本相关请参考 “环境说明”

#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <assert.h>
#include<algorithm>
#include <bits/stdc++.h>


using namespace std;

class Graph {
    int V; // No. of vertices'

    // Pointer to an array containing adjacency listsList
    list<int>* adj;

public:
    Graph(int V) {
        this->V = V;
        adj = new list<int>[V];
    }
    ~Graph() {
        delete [] adj;
    }
    list<int>* getAdj() const { return adj; }

    int getV() const { return V; }

    // function to add an edge to graph
    void addEdge(int v, int w) {
        adj[v].push_back(w); // Add w to v’s list.
    }

    bool dfs(list<int>* adj, int start,vector<bool>& onpath, vector<bool>& visited, vector<int>& toposort) {
        if (visited[start])
            return false;
        onpath[start] = visited[start] = true;
        for (int neigh : adj[start])
            if (onpath[neigh] || dfs(adj, neigh, onpath, visited, toposort))
                return true;
        toposort.push_back(start);
        return onpath[start] = false;
    }

    vector<int> sort() {
        // 请在此处实现，注意：可自行添加一些辅助函数以简化实现过程
        vector<int> toposort;
        vector<bool> onpath(this->V, false), visited(this->V, false);
        for (int i = 0; i < this->V; i++)
            if (!visited[i] && dfs(adj, i, onpath, visited, toposort))
                return {};
        reverse(toposort.begin(), toposort.end());
        return toposort;
    }
};

int main()
{
//    Graph test(5);
//    test.addEdge(1,0);
//    test.addEdge(2,0);
//    test.addEdge(3,2);
//    test.addEdge(3,1);
//    test.addEdge(4,0);
//    vector<int> v = test.sort();
//    for (int i = 0; i < v.size(); i++) {
//        cout << v[i] << " ";
//    }
    char *p = "helloworld";
    char q[] = "helloworld";
    printf("%d %d %d %d", sizeof(p), strlen(p), sizeof(q), strlen(q));
}