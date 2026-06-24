class Solution {
public:
    vector<vector<int>> result;

    void dfs(vector<int>& candidates,
             int target,
             int start,
             vector<int>& curr) {

        if(target == 0) {
            result.push_back(curr);
            return;
        }

        for(int i = start; i < candidates.size(); i++) {

            // Skip duplicates
            if(i > start &&
               candidates[i] == candidates[i-1])
                continue;

            if(candidates[i] > target)
                break;

            curr.push_back(candidates[i]);

            dfs(candidates,
                target - candidates[i],
                i + 1,      // use once only
                curr);

            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates,
                                        int target) {

        sort(candidates.begin(), candidates.end());

        vector<int> curr;

        dfs(candidates,
            target,
            0,
            curr);

        return result;
    }
};