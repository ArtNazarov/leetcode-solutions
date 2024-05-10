/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

void countSum(vector<long long>& lvl, int dep, int val){
    
    int index = dep - 1;
    if (index < lvl.size()) {
        lvl[index] += val; 
    } else {
        lvl.push_back(val);
    }
}

void countOnLevel(vector<long long>& cnt, int dep){
    
    int index = dep - 1;
    if (index < cnt.size()) {
        cnt[index] += 1; 
    } else {
        cnt.push_back(1);
    }
}

void traverse(TreeNode* root, vector<long long>& lvl, vector<long long>& cnt, int dep){
    if (root==nullptr) return;
    countSum(lvl, dep, root->val);
    countOnLevel(cnt, dep);
    if (nullptr != root->left) traverse(root->left, lvl, cnt, dep+1);
    if (nullptr != root->right) traverse(root->right, lvl, cnt, dep+1);
}

void countAvg(vector<long long>& lvl, vector<long long>& cnt, vector<double>& avg){
    int sz = lvl.size();
    for (int i=0;i<sz;i++){
        // cout << lvl[i] << endl;
        avg[i] = (double) lvl[i] / cnt[i];    
    };
}




class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<long long> sums;
        vector<long long> cnt;
        traverse(root, sums, cnt, 1);
        vector<double> avgs(sums.size());
        countAvg(sums, cnt, avgs);
        return avgs;
}
};