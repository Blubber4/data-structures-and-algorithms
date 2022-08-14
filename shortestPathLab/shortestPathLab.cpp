// Program to find Dijkstra's shortest path using
// priority_queue in STL

#include <vector>
// #include <bits/stdc++.h>
// #include <stdc++.h>
#include <string>
#include <queue>
#include <stdio.h>

using namespace std;

# define INF 0x3f3f3f3f

// iPair ==> Integer Pair
typedef pair<string, int> iPair;

// To add an edge
void addEdge(vector <iPair> adj[], string u, string v, int wt) {
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

// Prints shortest paths from src to all other vertices
void shortestPath(vector<iPair> adj[], int V, int src) {
    // Create a priority queue to store vertices that
    // are being preprocessed. This is weird syntax in C++.
    priority_queue< iPair, vector <iPair>, greater<iPair> > pq;

    // Create a vector for distances and initialize all
    // distances as infinite (INF)
    vector<int> dist(V, INF);

    // Insert source itself in priority queue and initialize
    // its distance as 0.
    pq.push(make_pair(0, src));
    dist[src] = 0;

    /* Looping till priority queue becomes empty (or all
    distances are not finalized) */
    while (!pq.empty()) {
        // The first vertex in pair is the minimum distance
        // vertex
        // vertex label is stored in second of pair (it
        // has to be done this way to keep the vertices
        // sorted distance (distance must be first item
        // in pair)
        int u = pq.top().second;
        pq.pop();

        // Get all adjacent of u.
        for (auto x : adj[u]) {
            // Get vertex label and weight of current adjacent
            // of u.
            int v = x.first;
            int weight = x.second;

            // If there is shorted path to v through u.
            if (dist[v] > dist[u] + weight) {
                // Updating distance of v
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    // Print shortest distances stored in dist[]
    printf("Vertex Distance from Source\n");
    for (int i = 0; i < V; ++i)
        printf("%d \t\t %d\n", i, dist[i]);
}

// Driver program to test methods of graph class
int main() {
    int V = 9;
    vector<iPair> adj[V];

    // making above shown graph
    addEdge(adj, "ATL", "BOS", 1095);
    addEdge(adj, "ATL", "DFW", 805);
    addEdge(adj, "ATL", "HOU", 844);
    addEdge(adj, "ATL", "LAX", 2230);
    addEdge(adj, "ATL", "NOS", 499);
    addEdge(adj, "BOS", "ORD", 983);
    addEdge(adj, "BOS", "DEN", 1991);
    addEdge(adj, "BOS", "HOU", 1886);
    addEdge(adj, "DFW", "HOU", 242);

    shortestPath(adj, V, 0);

    return 0;
}
