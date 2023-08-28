#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root)
{
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    // assume agar data == -1 h toh uske aage kuch nhi daalna
    if(data == -1)
    {
        return NULL;
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;

}

void levelOrderTraversal(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        if(temp == NULL) // matlab purana level complete traverse ho chuka h
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
            
    }
}

void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root)
{
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node* root = NULL;

    // input:-
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // creating a tree
    root = buildTree(root);

    // level order
    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    cout<<"inorder traversal is: ";
    inorder(root);

    cout<<endl<<"preorder traversal is: ";
    preorder(root);

    cout<<endl<<"postorder traversal is: ";
    postorder(root);

    node* root1 = NULL;
    // input:-
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    buildFromLevelOrder(root1);
    levelOrderTraversal(root1);
    return 0;
}

/*
Q.1. You are given a Binary tree. You have to count and return the
number of leaf nodes present in it.
A binary tree is a tree data structure in which each node has at most
two children, which are referred to as the left child and the right child.
A node is a leaf node if both left and right child nodes of it are NULL.

**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************

*/

/*

void inorder(BinaryTreeNode<int> * root, int &count)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left, count);
    if(root->left == NULL && root->right == NULL)
    {
        count++;
    }
    inorder(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt = 0;
    inorder(root, cnt);
    return cnt;
}
*/