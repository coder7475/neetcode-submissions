class Solution {
public:
    void backtrack(int openN, int closedN, int n, 
        vector<string>& res, string& stack) {
            if (openN == closedN && openN == n) {
                res.push_back(stack);
            }

            if (openN < n) {
                stack += '(';
                backtrack(openN + 1, closedN, n, res, stack);
                stack.pop_back();
            }

            if (closedN < openN) {
                stack += ')';
                backtrack(openN, closedN + 1, n, res, stack);
                stack.pop_back();
            }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string st;
        backtrack(0, 0, n, res, st);
        return res;
    }
};
