class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto it:nums){
            if(s.count(it))
                return true;
            s.insert(it);
        }
        return false;
    }
};
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++)
//             if(nums[i]==nums[i+1])
//                 return true;
//         return false;
//     }
// };