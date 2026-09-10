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
class Solution {
public:
int result = 0;
   void calculateAvg(TreeNode* root, int &sum, int &count)
   {
       if(root==NULL)
       return;

       sum+= root->val;
       count++;

       calculateAvg(root->left, sum, count);
       calculateAvg(root->right,sum, count);
   }
    
    int averageOfSubtree(TreeNode* root) {
        
    if(root==NULL)
    return 0;
 
     int sum=0;
     int count=0;
     calculateAvg(root, sum, count);
     if(root->val == (sum/count))
     {
        result++;
     }
      
    averageOfSubtree(root->left);
    averageOfSubtree(root->right);

     return result;

    }
};