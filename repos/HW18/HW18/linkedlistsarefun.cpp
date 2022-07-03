#include <iostream>

using namespace std;

void append(int, Node*, Node*);
int find(Node*, int);
void clear(Node*, Node*);
void print(Node*);


struct Node
{
	int i;
	int p;
	int t = 68;

	Node* next;
};


int main()
{
	Node* first = new Node;
	Node* second = new Node;
	Node* third = new Node;
	Node* fourth = new Node;
	Node* fifth = new Node;

	first->i = 42;
	first->next = second;
	second->i = 68;
	second->next = third;
	third->i = 35;
	third->next = fourth;
	fourth->i = 1;
	fourth->next = fifth;
	fifth->i = 70;
	fifth->next = NULL;

	append(int i, Node * h, Node * p);
	find(Node * h, int t);
	clear(Node * h, Node * p);
	print(Node * p);



	return 0;
}

int find(Node* h, int t)
{
	while (h != NULL)
	{

		if (h->i = t)
		{
			return true;
		}
		h = h->next;
	}
	return false;
}

void append(int i, Node* h, Node* p)
{
	Node* n = new Node();
	
	n->i = i;
	n->next = 0;

	if (h = NULL)
	{
		h = n;
	}
	else
	{
		p = h;
	}

	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = n;
}


void clear(Node* h, Node* p)
{
	while (h != NULL)
	{
		p = h;
		h = h->next;
		delete p;
	}
}


void print(Node* p)
{
	while (p != NULL)
	{
		cout << p->i << endl;
		p = p->next;
	}
}