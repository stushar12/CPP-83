void serialize(Node *root,vector<int> &A)
{
    if(root==NULL)
    {
    A.push_back(-1);
    return;
    }
    else
    {
        A.push_back(root->data);
        serialize(root->left,A);
        serialize(root->right,A);
    }
}
Node *abc(vector<int> &v,int &index)
{
    if(index==v.size())
    return NULL;
    
    int val=v[index];
    index++;
    
    if(val==-1)
    return NULL;
    Node *root=new Node(val);
    root->left=abc(v,index);
    root->right=abc(v,index);
    return root;
}
Node * deSerialize(vector<int> &A)
{
    int index=0;
 Node *temp=abc(A,index);
 return temp;
}