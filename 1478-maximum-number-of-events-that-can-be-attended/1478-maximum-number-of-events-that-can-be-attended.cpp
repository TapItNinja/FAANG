class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        // Sort events by start day
        sort(events.begin(), events.end());
        
        priority_queue<int, vector<int>, greater<int>> minHeap;
        
        int i = 0, n = events.size();
        int day = 0, attended = 0;
        
        // Find the last day among all events
        int lastDay = 0;
        for (const auto& event : events) {
            lastDay = max(lastDay, event[1]);
        }
        
        // Iterate day by day
        for (day = 1; day <= lastDay; ++day) {
            
            // Add all events that start today
            while (i < n && events[i][0] == day) {
                minHeap.push(events[i][1]);
                ++i;
            }
            
            // Remove all events that already ended
            while (!minHeap.empty() && minHeap.top() < day) {
                minHeap.pop();
            }
            
            // Attend the event that ends earliest
            if (!minHeap.empty()) {
                minHeap.pop();
                ++attended;
            }
        }
        
        return attended;
    }
};
