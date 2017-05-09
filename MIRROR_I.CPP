#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
struct tree
{int data;
 tree *left;
 tree *right;
};
tree *root='\0';
tree * insert (tree *root,int num);
void search (tree *root,int num);
void preorder (tree *root);
void inorder (tree *root);
void postorder (tree *root);
void reverse(tree *root);

void main ()
{int i, num,ch;

clrscr();
for(i=0;i<20;i++)
{cout<<"menu driven programme\n";
cout<<"1.insert node in binary search tree\n";
cout<<"2.search a node in binary search tree\n";
cout<<"3.display in preorder\n";
cout<<"4.display in inorder\n";
cout<<"5.display in postorder\n";
cout<<"6.morror image of binary tree\n";
cout<<"7.exit\n";
cout<<"enter your choice\n";
cin>>ch;
switch(ch)
{case 1:{cout<<"enter no. to add in tree\n";
	 cin>>num;
	 root=insert(root,num);
	 break;
	 }
 case 2:{cout<<"enter no. to be searched\n";
	 cin>>num;
	 search(root,num);
	 break;
	 }
 case 3:{cout<<"preorder display\n";
	 preorder(root);
	 break;
	 }
 case 4:{cout<<"inorder display\n";
	 inorder(root);
	 break;
	 }
 case 5:{cout<<"posrorder display\n";
	 postorder(root);
	 break;
	 }
 case 6:{cout<<"mirror image of binary tree is\n";
	 reverse(root);
	 cout<<"inorder display\n";
	 inorder(root);
	 cout<<"preorder display\n";
	 preorder(root);
	 cout<<"postorder display\n";
	 postorder(root);
	 break;
	 }


 case 7:{exit (0);
	  break;
	 }
  }
} getch();
}
			  tree* insert(tree *root,int num)
			  {  if(root=='\0')
				{root=(tree*)malloc(sizeof(tree));
				root->data=num;
				root->left='\0';
				root->right='\0';
				}
			    else
				{if(num<root->data)
				    {root->left=insert(root->left,num);
				    }
				 else
				    { root->right=insert(root->right,num);
				    }
				 }
			       return root;
			   }

void search (tree *root,int num)
{if (root=='\0')
    {cout<<"number not found\n";
    }
 else if(num==root->data)
    {cout<<"number found "<<num;
    }
 else if(num<root->data)
     {search (root->left,num);
     }
 else
    {search (root->right,num);
    }
}
				void preorder (tree *root)
				{ if (root!='\0')
				     { cout<<root->data<<" ";
				       preorder (root->left);
				       preorder (root->right);
				      }
				 }
void inorder (tree *root)
{ if(root!='\0')
    {inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
     }
}
				void postorder (tree *root)
				{ if(root!='\0')
				     {postorder(root->left);
				      postorder(root->right);
				      cout<<root->data<<" ";
				      }
				 }

				 void reverse(tree *root)
				 {if(root=='\0')
				 return;
				 reverse(root->left);
				 reverse(root->right);
				 tree*temp=root->left;
				 root->left=root->right;
				 root->right=temp;
				 }