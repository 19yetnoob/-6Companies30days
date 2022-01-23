int ans=0;
int dfs(Node* root,int X){
    if(root==NULL)
    return 0;
    int l=dfs(root->left,X);
    int r=dfs(root->right,X);
    int s=l+r+root->data;
    if(s==X)
    ans++;
    return s;
}
int countSubtreesWithSumX(Node* root, int X)
{
	ans=0;
	int c=dfs(root,X);
// 	if(c==X)
// 	ans++;
	return ans;
}
