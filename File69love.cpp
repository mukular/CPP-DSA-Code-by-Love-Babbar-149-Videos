/*
Q.1. Given a binary tree, find its height.
Example 1:

Input:
     1
    /  \
   2    3
Output: 2
Example 2:

Input:
  2
   \
    1
   /
 3
Output: 3   

Your Task:
You don't need to read input or print anything. Your task is to complete the function height() 
which takes root node of the tree as input parameter and returns an integer denoting the height 
of the tree. If the tree is empty, return 0. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
1 <= Number of nodes <= 10^5
1 <= Data of a node <= 10^5

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
*/

/*

// Time Complexity = O(n) where n is number of nodes
// Space Complexity = O(height)
class Solution{
    public:
    int height(struct Node* node)
    {
        if(node == NULL)
        {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;
        return ans;
    }
};
*/

/*
Q.2. The diameter of a tree (sometimes called the width) is the number of nodes 
on the longest path between two end nodes.
Example 1:

Input:
       1
     /  \
    2    3
Output: 3
Example 2:

Input:
         10
        /   \
      20    30
    /   \ 
   40   60
Output: 4
Your Task:
You need to complete the function diameter() that takes root as parameter and returns the diameter.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(Height of the Tree).

Constraints:
1 <= Number of nodes <= 10000
1 <= Data of a node <= 1000

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
*/

/*
// Method 1:- 

// Time Complexity = O(n^2) where n is number of nodes
class Solution{
    private:
    int height(struct Node* node)
    {
        if(node == NULL)
        {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;
        return ans;
    }
    public:
    int diameter(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }

        int op1 = diameter(root->left);
        int op2 = diameter(root->right);
        int op3 = height(root->left) + height(root->right) + 1;

        int ans = max(op1, max(op2, op3));
        return ans;
    }
};
*/

/*
Method 2:-

// Time Complexity = O(n) where n is number of nodes
// Space Complexity = O(height)
class Solution{
    public:
    pair<int, int> diameterFast(Node* root)
    {
        if(root == NULL)
        {
            pair<int, int> p = make_pair(0,0);
            return p;
        }

        pair<int, int> left = diameterFast(root->left);
        pair<int, int> right = diameterFast(root->right);
        int op1 = left.first;
        int op2 = right.first;
        int op3 = left.second + right.second + 1;

        pair<int, int> ans;
        ans.first = max(op1, max(op2, op3));
        ans.second = max(left.second, right.second) + 1;
        return ans;
    }

    int diameter(Node* root)
    {
        return diameterFast(root).first;
    }
};
*/

/*
Q.1. Given a binary tree, find if it is height balanced or not. 
A tree is height balanced if difference between heights of left 
and right subtrees is not more than one for all nodes of tree. 

A height balanced tree
        1
     /     \
   10      39
  /
5

An unbalanced tree
        1
     /    
   10   
  /
5

Example 1:

Input:
      1
    /
   2
    \
     3 
Output: 0
Explanation: The max difference in height
of left subtree and right subtree is 2,
which is greater than 1. Hence unbalanced
Example 2:

Input:
       10
     /   \
    20   30 
  /   \
 40   60
Output: 1
Explanation: The max difference in height
of left subtree and right subtree is 1.
Hence balanced. 
Your Task:
You don't need to take input. Just complete the function isBalanced() that takes root node as parameter 
and returns true, if the tree is balanced else returns false.

Constraints:
1 <= Number of nodes <= 10^5
0 <= Data of a node <= 10^6

Expected time complexity: O(N)
Expected auxiliary space: O(h) , where h = height of tree

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
*/

/*
// Method 1:-

// Time Complexity = O(n^2)
class Solution{
    private:
    int height(struct Node* node)
    {
        if(node == NULL)
        {
            return 0;
        }
        int left = height(node->left);
        int right = height(node->right);

        int ans = max(left, right) + 1;
        return ans;
    }
    public:
    bool isBalanced(Node *root)
    {
        if(root == NULL)
        {
            return true;
        }

        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs(height(root->left) - height(root->right)) <= 1;

        if(left && right && diff)
        {
            return 1;
        }
        else
        {
            return false;
        }
    }
}
*/

/*
// Method2:-

// Time Complexity = O(n)
// Space Complexity = O()
class Solution{
    public:
    pair<bool, int> isBalancedFast(Node *root)
    {
        if(root == NULL)
        {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<int, int> left = isBalancedFast(root->left);
        pair<int, int> right = isBalancedFast(root->right);

        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <= 1;

        pair<bool, int> ans;
        ans,second = max(left.second, right.second) + 1;
        if(leftAns && rightAns && diff)
        {
            ans.first = true;
        }
        else
        {
            ans.first = false;
        }
        return ans;
    }

    bool isBalanced(Node *root)
    {
        return isBalancedFast(root).first;
    }
};
*/