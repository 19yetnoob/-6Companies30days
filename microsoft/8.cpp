void connect(Node *root)
    {
       if(root==NULL)
       return ;
       queue<Node*>q;
       q.push(root);
       while(!q.empty()){
           int l=q.size();
           vector<Node*>v;
           for(int i=0;i<l;i++){
               auto top=q.front();
               q.pop();
               if(top->left)
               v.push_back(top->left),q.push(top->left);
               if(top->right)
               v.push_back(top->right),q.push(top->right);
           }
           if(v.size()>1){
               for(int i=0;i<v.size()-1;i++){
                   v[i]->nextRight=v[i+1];
               }
           }
           v.clear();
       }
       
    }    