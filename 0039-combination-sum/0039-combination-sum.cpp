class Solution {
public:
    void Sum(vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> &ds, int i){
        if(target == 0) {
            // if we get exact answer
            ans.push_back(ds);
            return;
        }
        while(i < candidates.size() && target - candidates[i] >= 0) {
            // Till every element in the array starting
            // from i which can contribute to the target
            ds.push_back(candidates[i]);// add them to vector
            // recur for next numbers
            Sum(candidates,target - candidates[i],ans,ds,i);
            i++;
            // Remove number from vector (backtracking)
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        vector<int> ds;
        vector<vector<int> > ans;
        Sum(candidates,target,ans,ds,0);
        return ans;
    }
};