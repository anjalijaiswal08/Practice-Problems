#include <iostream>
#include <queue> 
#include <limits.h>
using namespace std;


//A node structure
typedef struct TreeNode
{
	int data;
	struct TreeNode * leftTree;
	struct TreeNode * rightTree;
} Tree;

//list of functions(methods)
int maxDepth(Tree *);
int diameter(Tree *);
int width(Tree *);
void mirror(Tree *);
bool foldable(Tree *);
int KdistNode(Tree *);
bool bst(Tree *);
int printRootToLeaf(Tree *);

Tree * root = NULL;
 
//Creation Of node
 Tree * createNode(int data){
 	Tree * temp = new Tree;
 	temp->data = data;
 	temp->leftTree = temp->rightTree = NULL;
 	return temp;
 }

//Inserting Value in node
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
//Pre-order traversal (Root-> Left Node-> Right Node)
 void preorder(Tree * root){
 	if(root){
 		cout<<root->data<<" ";
 		preorder(root->leftTree);
 		preorder(root->rightTree);
 	}
 }

//Inorder traversal (Left node-> Root-> Right Node )
 void inorder(Tree * root){
 	if(root){
 		inorder(root->leftTree);
 		cout<<root->data<<" ";
 		inorder(root->rightTree);
 	}
 }

//Post order traversal (Left Node-> Right Node-> Root)
 void postorder(Tree * root){
 	if(root){
 		postorder(root->leftTree);
 		postorder(root->rightTree);
 		cout<<root->data<<" ";
 	}
 }
  
/*Level Wise Traversal*/  
void  printlevelOrder(){
	queue <Tree*> q;
	q.push(root);
	cout<<"Level Order Traversal : ";
	while(!q.empty()){
		Tree * temp = q.front();
		q.pop();
		if(temp -> leftTree)
			q.push(temp -> leftTree);
		if(temp -> rightTree)
			q.push(temp -> rightTree);
		cout<<temp -> data<<" ";
		delete temp;
	}
	cout<<endl;
}

/*Max Depth*/
int maxDepth(Tree * root){
	int rDepth ,lDepth;
	if(root == NULL)
		return 0;
	else{
		 lDepth = maxDepth(root->leftTree);
		 rDepth = maxDepth(root->rightTree);
	
		if(lDepth > rDepth)
			return(lDepth+1);
		else
			return(rDepth+1);
		}
}

bool isBSTUtil(Tree * node,int min,int max){
	if(node == NULL)
		return true;
	if(node -> data < min || node -> data > max)
		return 0;
	return isBSTUtil(node -> leftTree, min,node -> data-1) && isBSTUtil(node -> rightTree,node -> data+1, max);
}

/* Is tree binary or not */
bool isbst(Tree * root){
	return(isBSTUtil(root,INT_MIN,INT_MAX));
}

void  mirror(Tree * root){
	if(root){
		Tree * temp;
		mirror(root1 -> leftTree);
		mirror(root1 -> rightTree);
		temp = root1 ->leftTree;
		root1 -> leftTree = root1-> rightTree;
		root1 -> rightTree = temp;
	}
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
 		printlevelOrder();
 	cout<<"height of tree : "<<maxDepth(root)<<endl;
 	bool k = isbst(root);
	 	if(k == true)
	 		cout<<"Tree is bst"<<endl;
	 	else
	 		cout<<"Tree is not bst"<<endl;
	mirror(root);
		inorder(root);
		cout<<endl;
 	return 0;
 }