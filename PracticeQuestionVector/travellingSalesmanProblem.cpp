//WAP to Solve Travelling salesman problem which is the challenge of finding the shortest yet most efficient route for a person to take given a list of specific destinations.

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int tsp(const vector<vector<int>>& graph, vector<bool>& visited, int currPos, int n, int count, int cost, int answer) {
    if (count == n && graph[currPos][0]) {
        return min(answer, cost + graph[currPos][0]);
    }
    for (int i = 0; i < n; i++) {
        if (!visited[i] && graph[currPos][i]) {
            visited[i] = true;
            answer = tsp(graph, visited, i, n, count + 1, cost + graph[currPos][i], answer);
            visited[i] = false;
        }
    }
    return answer;
}
int main() {
    int n = 4; 
    vector<vector<int>> graph = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };
    vector<bool> visited(n, false);
    visited[0] = true;
    int answer = tsp(graph, visited, 0, n, 1, 0, INT_MAX);
    cout << "Minimum cost of traveling to all cities: " << answer << endl;
    return 0;
}
