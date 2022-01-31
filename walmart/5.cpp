class Solution {
  public:
    int edit(Node* root){
        if(root==NULL)
        return 0;
        int l=edit(root->left);
        int r=edit(root->right);
        
        int sum= l+r+root->data;
        root->data=l+r;
        return sum;
    }

    void toSumTree(Node *node)
    {
        auto save=node;
        int a=edit(node);
        node=save;
    }
};