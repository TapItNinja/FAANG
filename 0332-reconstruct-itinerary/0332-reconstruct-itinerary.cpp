#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_map<string, multiset<string>> graph;
    vector<string> itinerary;

    void dfs(string airport) {
        auto &destinations = graph[airport];
        while (!destinations.empty()) {
            // get the smallest destination
            auto next = destinations.begin();
            string dest = *next;
            destinations.erase(next); // remove from multiset
            dfs(dest);
        }
        itinerary.push_back(airport); // add when no more outgoing edges
    }

    vector<string> findItinerary(vector<vector<string>>& tickets) {
        // Build graph
        for (auto &t : tickets) {
            graph[t[0]].insert(t[1]); 
        }

        // Start DFS from JFK
        dfs("JFK");

        // Reverse since constructed backwards
        reverse(itinerary.begin(), itinerary.end());
        return itinerary;
    }
};
