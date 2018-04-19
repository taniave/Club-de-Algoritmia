/*
CREACION DE ARBOLES BINARIOS CON IN-ORDER,PRE-ORDER, POST-ORDER
*/
#include <bits/stdc++.h>

using namespace std;

typedef struct tree{
	
	struct tree *left;
	struct tree *right;
	char ch;
}binaryTree, *binaryTreePtr;

binaryTreePtr buildBinaryTree(){
	binaryTreePtr subTree = new binaryTree;
	
	char ch;
	if(cin>>ch){
		if(ch == '@')
			return NULL;
		subTree->ch = ch;
		subTree->left = buildBinaryTree();
		subTree->right = buildBinaryTree();	
	}
	return subTree;
}

void visit(binaryTreePtr nodo){
	cout << nodo->ch << " ";
	
}

void preOrder(binaryTreePtr nodo){
	if(nodo != NULL){
		visit(nodo);
		preOrder(nodo->left);
		preOrder(nodo->right);
	}
}

void postOrder (binaryTreePtr nodo){
	if(nodo != NULL){
		postOrder(nodo->left);
		postOrder(nodo->right);
		visit(nodo);
	}
}

void inOrder(binaryTreePtr nodo){
	if(nodo != NULL){
		inOrder(nodo->left);
		visit(nodo);
		inOrder(nodo->right);
	}
}


int main(){
	
	freopen("input.txt","r",stdin);
	binaryTreePtr bt;
	bt=buildBinaryTree();
	cout << "pre-order = ";
	preOrder(bt);
	cout <<endl;
	/*char ch; //abrir inputs
	while(cin>>ch){
		cout << ch << endl;
	}*/
	cout << "post-order = ";
	postOrder(bt);
	cout <<endl;
	
	cout << "in-order = ";
	inOrder(bt);
	cout <<endl;
	
	fclose(stdin);
	
	
	
	return 0;
}
