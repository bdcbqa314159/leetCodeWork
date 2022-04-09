class Solution {
public:
    
    int helper(vector<int>& nums, int l, int r, int target){
        int mid{};
        while (l<=r){
            mid = l+ (r-l)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid]<target) l = mid+1;
            else r = mid - 1;
        }
        return -1;
    }
    
    
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        int index = helper(nums, 0, nums.size()-1, target);
        if (index==-1) return res;
        res.push_back(index);
        int l,r;
        l = r = index;
        while(l>0){
            if (nums[l-1]==nums[l])
                res.insert(res.begin(), l-1);
            else break;
            l--;
        }
        while(r<nums.size()-1){
            if (nums[r+1]==nums[r])
                res.push_back(r+1);
            else break;
            r++;
        }
        
        return res;
    }
};

