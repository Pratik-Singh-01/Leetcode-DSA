class Solution {
public:

    vector<vector<int>> result;

    void backtrack(vector<int>& candidates,
                   int target,
                   int index,
                   vector<int>& current) {

        if(target == 0) {
            result.push_back(current);
            return;
        }

        if(index >= candidates.size() || target < 0)
            return;

        // Take current number
        current.push_back(candidates[index]);

        backtrack(candidates,
                  target - candidates[index],
                  index,              // same index
                  current);

        current.pop_back();

        // Skip current number
        backtrack(candidates,
                  target,
                  index + 1,
                  current);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates,
                                       int target) {

        vector<int> current;

        backtrack(candidates,
                  target,
                  0,
                  current);

        return result;
    }
};