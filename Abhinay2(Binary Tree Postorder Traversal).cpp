class Solution {
public:
    /*void solve(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        solve(root->left,ans);
        solve(root->right,ans);
        ans.push_back(root->val);
    }*/
    vector<int> postorderTraversal(TreeNode* root) {
        /*vector<int>ans;
        solve(root,ans);
        return ans;*/
        /*vector<int>ans;
        if(root==NULL){
            return ans;
        }
        
        stack<TreeNode*>st1;
        stack<TreeNode*>st2;
        st1.push(root);
        while(!st1.empty())
        {
            TreeNode* t=st1.top();
            st1.pop();
            st2.push(t);
            if(t->left){
                st1.push(t->left);
            }
            if(t->right){
                st1.push(t->right);
            }
            
        }
        while(!st2.empty()){
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;*/

        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        stack<TreeNode*>st;
        TreeNode* curr=root;
        while(!st.empty()||curr!=NULL){
            if(curr!=NULL){
                st.push(curr);
                curr=curr->left;
            }
            else{
                TreeNode* temp=st.top()->right;
                if(temp==NULL){
                    temp=st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    while(!st.empty()&&temp==st.top()->right){
                        temp=st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }

                }
                else{
                    curr=temp;
                }
            }

        }
        return ans;
    }
};
