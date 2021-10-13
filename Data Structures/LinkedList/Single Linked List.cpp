// Declaration Of Linked List
class Node
{
	public:
		int data;
		Node *link;
};

// Traversing Or Printing The LinkedList
void printList(Node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<" -> ";
		p=p->link;
	}
}

// To insert a node at beginning
void push(Node* &root,int n)
{
	// New Node
	Node *temp = new Node();
	temp->data = n;
	temp->link=root;
	root=temp;
}
