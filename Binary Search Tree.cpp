#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *left,*right;
	Node(int key){
		data=key;
		left=NULL;
		right=NULL;
	}
};
// search function
Node* search(Node* root, int key){
	if(root==NULL){
		return NULL;
	}
	if(root->data == key){
		return root;
	}
	//data > key
	if(root->data > key){
		return search(root->left,key);
	}
	//data < key
	return search(root->right,key);
	
	
	
}
Node* inorderSucc(Node* root){
	Node* curr = root;
	while(curr && curr->left !=NULL){
		curr = curr->left;
	}
	return curr;
}

//delete function
Node* deleteInBST(Node* root,int key){
	
	if(key < root->data){
		root->left = deleteInBST(root->left,key);
	}
	else if(key > root->data){
		root->right = deleteInBST(root->right,key);
	}
	else {
		if(root->left == NULL){
			Node* temp = root->right;
			
			return temp;
		}
		else if(root->right == NULL){
			Node* temp = root->left;
			
			return temp;
		}
		//case 3
		Node* temp = inorderSucc(root->right);
		root->data = temp->data;
		root->right = deleteInBST(root->right,temp->data);
	}
	return root;
}
void inorder(Node* root){  // inorder fuction
	if(root == NULL){
		return;
	}
	inorder(root->left);
	cout << root->data<<" ";
	inorder(root->right);
}

int main() {
	int temp;
	Node *root = new Node(4);
	root->left = new Node(2);
	root->right = new Node(5);
	root->left->left = new Node(1);
	root->left->right = new Node(3);
	root->right->right = new Node(6);
	  //example : take any number of elements with 5 as a one of number in it. 
inorder(root); // before performing deletion operation .
cout<<endl;
root = deleteInBST(root, 5);
inorder(root); //after performing deletion operation.
cout<< endl;
if(search(root, 5)== NULL){  // as 5 is deleted in above case it shows 5 doesn't exist while we use search operation.
	cout<<"key doesn't exist";
}else{
	cout<<"key exists";
}
  // we can perform other examples here.
  return 0;
}
