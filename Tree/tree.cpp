#include <iostream>
using namespace std;


typedef struct TreeNode
{
	int data;
	struct TreeNode * leftTree;
	struct TreeNode * rightTree;
} Tree;

int maxDepth(Tree *);
int diameter(Tree *);
int width(Tree *);
Tree * mirror(Tree *);
bool foldable(Tree *);
int KdistNode(Tree *);
bool bst(Tree *);
int printRootToLeaf(Tree *);

Tree * root = NULL;
 

 Tree * createNode(int data){
 	Tree * temp = new Tree;
 	temp->data = data;
 	temp->leftTree = temp->rightTree = NULL;
 	return temp;
 }

 Tree * insert(Tree * root, int data){
 	if(root == NULL){
 		return createNode(data);
 	}
 	else{
 		if(data <= root->data)
 			root->leftTree = insert(root->leftTree, data);
 		else
 			root->rightTree = insert(root->rightTree ,data);
 	}
 	return root;
 }

 /* traversal */

 void preorder(Tree * root){
 	if(root){
 		cout<<root->data<<" ";
 		preorder(root->leftTree);
 		preorder(root->rightTree);
 	}
 }

 void inorder(Tree * root){
 	if(root){
 		inorder(root->leftTree);
 		cout<<root->data<<" ";
 		inorder(root->rightTree);
 	}
 }

 void postorder(Tree * root){
 	if(root){
 		postorder(root->leftTree);
 		postorder(root->rightTree);
 		cout<<root->data<<" ";
 	}
 }
  
/*Level Wise Traversal*/  
Tree * printlevelOrder(Tree * root){
	int rear,front;

}

/*Max Depth*/

int maxDepth(Tree * root){
	int rDepth ,lDepth;
	if(root == NULL)
		return 0;
	else{
		int lDepth = maxDepth(root->leftTree);
		int rDepth = maxDepth(root->rightTree);
	}
		if(lDepth > rDepth)
			return(lDepth+1);
		else
			return(rDepth+1);
}


 int main(int argc, char const *argv[])
 {
 	int n;
 	cin>>n;
 	int data;
 	for (int i = 0; i < n; ++i)
 	{
 		/* code */
 		cin>>data;
 		root = insert(root ,data);
 	}
 	cout<<"Preorder Traversal : ";
 	preorder(root);
 	cout<<"\n";
 	cout<<"Inorder Traversal : ";
 	inorder(root);
 	cout<<"\n";
 	cout<<"postorder  Traversal : ";
 	postorder(root);
 	cout<<"\n";
 	cout<<maxDepth(root);
 	return 0;
 }