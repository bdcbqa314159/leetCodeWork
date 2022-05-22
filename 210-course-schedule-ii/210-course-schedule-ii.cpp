class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> g(numCourses);
        vector<int> indegree(numCourses);
        
        for (auto &pre: prerequisites){
            g[pre[1]].push_back(pre[0]);
            indegree[pre[0]]++;
        }
        
        queue<int> q;
        for (int i = 0; i<numCourses; i++){
            if (!indegree[i]) q.push(i);
        }
        
        if (q.empty()) return {};
        
        vector<int> schedule;
        while (!q.empty()){
            int course = q.front();
            schedule.push_back(course);
            q.pop();
            
            for (int next: g[course]){
                indegree[next]--;
                if (!indegree[next]) q.push(next);
            }
        }
        
        if (schedule.size() == numCourses) return schedule;
        return {};
    }
};