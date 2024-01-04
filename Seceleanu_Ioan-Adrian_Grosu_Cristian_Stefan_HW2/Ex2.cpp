#include <iostream>
#include <climits>
#include <algorithm>

class Node
{
public:
	int data;
	Node* left;
	Node* right;

	Node(int val);
    void inOrder(Node* node);
};

Node :: Node(int val) 
{
	data = val;
	left = NULL;
	right = NULL;
}

void Node :: inOrder(Node* node)
{
    if (node == NULL)
        return;
    std :: cout << node->data << " ";
    inOrder(node->left);
    inOrder(node->right); 
    
}

class currentMaxNode {
public:
    int maxNode, minNode, maxSize, sum = 0;
    
    currentMaxNode(int minNode, int maxNode, int maxSize, int data)
    {
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
        this->sum = sum + data;
    }
};


class MaxBST
{
    private:
        currentMaxNode largestBSTSubtreeHelper(Node* root) 
        {
            
            if (!root) 
                return currentMaxNode(INT_MAX, INT_MIN, 0, 0);
            
            
            currentMaxNode left = largestBSTSubtreeHelper(root->left);
            currentMaxNode right = largestBSTSubtreeHelper(root->right);
            
            if (left.maxNode < root->data && root->data < right.minNode) 
                return currentMaxNode(std :: min(root->data, left.minNode), std :: max(root->data, right.maxNode), left.maxSize + right.maxSize + 1,
                 left.sum + right.sum + root->data);
            
            
            return currentMaxNode(INT_MIN, INT_MAX, std :: max(left.maxSize, right.maxSize), std :: max(left.sum, right.sum));
        }
    public:
        int getBiggestSubtree(Node* root) 
        {
            return largestBSTSubtreeHelper(root).sum;
        }
};

int main()
{

	Node* root = new Node(12);

	root->left = new Node(18);
	root->right = new Node(7);
	root->left->left = new Node(7);
    root->left->right = new Node(22);
    root->left->left->left = new Node(3);
    root->left->left->left->left = new Node(1);
    root->left->left->right = new Node(11);
    root->right->left = new Node(2);
    root->right->right= new Node(4);
    root->right->right->right = new Node(14);
    root->right->right->left = new Node(2);
    root->right->right->left->right = new Node(3);
    root->right->right->left->left = new Node(1);

    MaxBST a;
    std :: cout << a.getBiggestSubtree(root);
}
