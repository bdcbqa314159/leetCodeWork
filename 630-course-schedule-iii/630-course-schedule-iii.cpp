class Solution {
public:
    
    struct compare{
        bool operator()(const vector<int>& i, const vector<int>& j){
            return i[1]<j[1];
        }
    }; 
    
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), compare());
        int total_duration = 0;
        
        priority_queue<int> q;
        for (int i = 0; i<courses.size(); i++){
            int current_duration = courses[i][0];
            int finish_time = courses[i][1];
            
            total_duration += current_duration;
            q.push(current_duration);
            if (total_duration > finish_time){
                total_duration -=q.top();
                q.pop();
            }
        }
        
        return q.size();
    
    }
};