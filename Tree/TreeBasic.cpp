#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;
  Node(int data) {
    this->data = data;
    left = NULL;
    right = NULL;
  }
};

Node *buildTree() {
  int data;
  cout << "enter the value of data: " << endl;
  cin >> data;

  // check if data is -1
  if (data == -1) {
    return NULL;
  }
  // step 1 create a root node
  Node *root = new Node(data);
  // step 2 create the left subtree
  cout << "Enter data for left part of " << data << " node " << endl;
  root->left = buildTree();
  // step 3 create the right sun
  cout << "Enter data for right part of " << data << " node " << endl;
  root->right = buildTree();
  return root;
}

void levelOrderTraversal(Node *root) {
  queue<Node *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty()) {
    Node *temp = q.front();
    q.pop();
    if (temp == NULL) {
      cout << endl;
      if (!q.empty()) {
        q.push(NULL);
      }
    } else {
      cout << temp->data << " ";
      if (temp->left) {
        q.push(temp->left);
      }
      if (temp->right) {
        q.push(temp->right);
      }
    }
  }
}

void inOrderTraversal(Node *root) {
  // base case
  if (root == NULL) {
    return;
  }
  // LNR --> left, root Node(current Node), right
  inOrderTraversal(root->left);
  cout << root->data << " ";
  inOrderTraversal(root->right);
}
void preOrderTraversal(Node *root) {
  // base case
  if(root == NULL){
    return;
  }
  // NLR --> root Node(current Node), left, right
  cout<<root->data<<" ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}
void postOrderTraversal(Node *root) {
  if(root == NULL){
    return;
}
  // LRN --> left, right, root Node(current Node)
  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
  cout<<root->data<<" ";
}
int heightOfTree(Node* root){
  if(root == NULL){
    return 0;
  }
    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}

int main() {
  Node *root = NULL;
  root = buildTree();
  levelOrderTraversal(root);
  cout<<"output of inOrderTraversal is: "<<endl;
  inOrderTraversal(root);
  cout<<endl;
  cout<<"output of preOrderTraversal is: "<<endl;
  preOrderTraversal(root);
  cout<<endl;
  cout<<"output of postOrderTraversal is: "<<endl;
  postOrderTraversal(root);
  cout<<heightOfTree(root);
  cout<<endl;
  return 0;
}