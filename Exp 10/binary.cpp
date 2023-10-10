//IMPLEMENTATION OF BINARY SEARCH TREE
#include <iostream>
using namespace std;

struct treenode
{
	treenode *left;
	int data;
	treenode *right;
}*head=NULL;

void Insert2(treenode *temp, treenode *monk)
{
	if(temp->data<monk->data)
	{
		if(monk->left==NULL)
		{
			monk->left=temp;
		}
		else
		{
			Insert2(temp,monk->left);
		}
	}

	else if(temp->data>monk->data)
	{
		if(monk->right==NULL)
		{
			monk->right=temp;
		}
		else
		{
			Insert2(temp,monk->right);
		}
	}
}

void insert(int item)
{
	treenode *temp;
	temp=new treenode;
	temp->left=NULL;
	temp->right=NULL;
	temp->data=item;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		treenode *monk=head;
		Insert2(temp,monk);
	}
}


void inorder(treenode *monk)
{
	if(monk!=NULL)
	{
		inorder(monk->left);
		cout<<" "<<monk->data<<" ";
		inorder(monk->right);
	}
	return;
}

void preorder(treenode *monk)
{
	if(monk!=NULL)
	{
		cout<<" "<<monk->data<<" ";
		preorder(monk->left);
		preorder(monk->right);
	}
	return;
}

void postorder(treenode *monk)
{
	if(monk!=NULL)
	{
		postorder(monk->left);
		postorder(monk->right);
		cout<<" "<<monk->data<<" ";
	}
	return;
}

int main()
{
	int x,n,d;
	while(1)
	{
		prev:
        cout<<"\n To do................";
		cout<<"\n 1.Insert\n 2.Show\n 3.Exit	";
		cout<<"\n\n Enter your choice: ";
		cin>>n;
		switch(n)
		{
			case 1:	cout<<"\n Enter the data: ";
					cin>>d;
					insert(d);
				break;
			case 2:	while(1)
					{
						cout<<"\n\n To do................";
						cout<<"\n 1.Pre order\n 2.In order\n 3.Post order \n 4.Return	";
						cout<<"\n\n Enter your  choice: ";
						cin>>x;
						switch(x)
						{
							case 1:
							    cout<<"\n Preorder Traversal:\n";
							    preorder(head);
								break;
							case 2:
                                cout<<"\n Inorder Traversal:\n";
                                 inorder(head);
								break;
							case 3:
							    	cout<<"\n Postorder Traversal:\n";
							    	postorder(head);
								    break;
							case 4:
							    goto prev;
							default:
							     cout<<"\n Invalid order"<<endl;
						}
					}
				break;
			case 3:	return 0;
			default:	cout<<"Invalid order"<<endl;
		}
	}
}
