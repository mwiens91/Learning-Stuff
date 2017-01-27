#ifndef NODE_HPP_
#define NODE_HPP_

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Node
{
	int data;
	Node* link;
};
typedef Node* NodeP;

void printNode (NodeP& head);
void printAll (NodeP& head);
void addBefore (NodeP& head, int new_data);
void addAfter (NodeP& head, int new_data);
void discardNext (NodeP& head);
NodeP search (NodeP& head, int target);

void addBefore (NodeP& head, int new_data)
{
	NodeP temp;
	temp = new Node;
	temp->data = new_data;
	temp->link = head;
	head = temp;
}

void addAfter (NodeP& head, int new_data)
{
	NodeP temp;
	temp = new Node;
	temp->data = new_data;
	temp->link = head->link;
	head->link = temp;
}

void printNode (NodeP& head)
{
	NodeP temp;
	temp = head;
	if (temp != NULL)
	cout << temp->data;
}

void printAll (NodeP& head)
{
	NodeP temp;
	temp = head;
	while (temp)
	{
		cout << temp->data;
		temp = temp->link;
	}
}

void discardNext (NodeP&head)
{
	NodeP temp1, temp2, temp3;
	temp1 = head;
	temp2 = head;
	temp3 = head;
	temp2 = temp2->link;
	temp3 = temp3->link;
	temp3 = temp3->link;
	temp1->link = temp3;
	delete temp2;
}

NodeP search (NodeP& head, int target)
{
	NodeP temp;
	temp = head;
	if (temp == NULL)
	{
		return NULL;
	}
	else
	{
		while ((temp->data != target) && (temp->link != NULL))
		{
			temp = temp->link;
		}
		if (temp->data == target)
		{
			return temp;
		}
		else
		{
			return NULL;
		}
	}
}

#endif /* NODE_HPP_ */
