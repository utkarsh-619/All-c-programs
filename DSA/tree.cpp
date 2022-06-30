#include<bits\stdc++.h>
using namespace std;

// template <class T>
class tree {
    tree *left=NULL;
    tree *right=NULL;
    int data;

   public:

    void insert(tree* temp, int val);
    void preOrderStack(tree*);
    void inOrderStack(tree*);
    void postOrder2Stack(tree*);

    void display(tree* temp){
        if(!temp)   return;
        if(temp->left)  display(temp->left);
        if(temp->right) display(temp->right);
        cout<<temp->data<<"  ";
    }

    tree* getNewNode(int val){
        tree* ptr;
        ptr = new tree;
        ptr->data = val;
        return ptr;
    }

    void levelOrder(tree *root){
        if(!root) {
            cout << "Tree is empty";
            return;
        }  
        queue<tree*> q;
        vector<vector<int>> vec;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int size = q.size();
            for(int i=0;i<size;i++){
                tree* node;
                node = q.front();
                q.pop();
                if(node->left)  q.push(node->left);
                if(node->right) q.push(node->right);
                
                level.push_back(node->data);
            }
            vec.push_back(level);
        }

        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec[i].size();j++){
                cout<<vec[i][j]<<"  ";
            }
            cout << endl;
        }
    }
};
tree *root = NULL;

void tree::insert(tree* temp, int val) {
    if(!root) {
        root=getNewNode(val);
    }else if(temp->data < val){
        if(temp->right)  insert(temp->right, val);
        else    temp->right = getNewNode(val);      
    }else{
        if(temp->left)  insert(temp->left,val);
        else    temp->left = getNewNode(val);
    }
}

void tree :: preOrderStack(tree* temp){
    vector<int> vec;
    stack<tree*> q;
    if(temp)    q.push(temp);

    while(!q.empty()){
        tree* node;
        node = q.top();
        q.pop();
        if(node->right)     q.push(node->right);
        if(node->left)      q.push(node->left);
        vec.push_back(node->data);
    }
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<"  ";
    }
    cout<<endl;
}

void tree :: inOrderStack(tree* temp){
    vector<int> inorder;
    stack<tree*> st;
    while(1){
        if(temp){
            st.push(temp);
            temp=temp->left;
        }
        else{
            if(st.empty())  break;
            temp = st.top();
            st.pop();
            inorder.push_back(temp->data);
            temp = temp->right;            
        }
    }
    for(int i=0;i<inorder.size();i++){
        cout<<inorder[i]<<"  ";
    }
    cout<<endl;
}

void tree :: postOrder2Stack(tree* node){
    stack<tree*> st1;
    vector<int> ans;
    st1.push(node);
    while(!st1.empty()){
        node=st1.top();
        st1.pop();
        if(node->left)      st1.push(node->left);
        if(node->right)     st1.push(node->right);
        ans.push_back(node->data);
    }

    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<"  ";
    }
    cout<<endl;

}

int main() {
    tree avi;
    avi.insert(root,15);
    avi.insert(root,17);
    avi.insert(root,7);
    avi.insert(root,19);
    avi.insert(root,4);
    avi.insert(root,6);
    avi.insert(root,9);
    avi.insert(root,10);

    cout<<"POST=> ";
    avi.postOrder2Stack(root);
    cout<<"PRE=> ";
    avi.preOrderStack(root);
    cout<<"IN=> ";
    avi.inOrderStack(root);
    // avi.display(root);
    return 0;
}