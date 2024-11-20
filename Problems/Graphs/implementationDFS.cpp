#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int>  adj[], int v, int u) {
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void display(vector<int> adj[], int v) {
    for (int i = 0; i < v; i++) {
        cout << "Adjacency list of vertex " << i << ": ";
        for (int x : adj[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
}

void BFS(vector<int> adj[], int v, int s) {
    vector<bool> visited(v, false);
    queue<int> q;

    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << endl;
}

void DFSRec(vector<int>adj[], int s, vector<bool>&visited) {
    visited[s] = true;

    cout << s << " ";
    for(int u : adj[s]) {
        if(visited[u] == false) {
            DFSRec(adj,u,visited);
        }
    }
}
void DFS(vector<int>adj[], int v ) {

    vector<bool>visited(v,false);

    for(int i=0; i<v; i++) {
        if(!visited[i]) {
            DFSRec(adj,i,visited);
        }
    }
}


int main() {
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    display(adj, v);

    cout << "BFS Traversal starting from vertex 0: ";
    BFS(adj, v, 4);
    cout << "DFS Traversal starting from vertex 0: ";
    DFS(adj, v);

    return 0;
}
