#include <iostream>
#include <string>
#include <fstream>
#include "Node.hpp"

using namespace std;

int main ()
{
	NodeP head = new Node;
	NodeP target;
	head-> data = 3;
	head-> link = NULL;

	addAfter (head, 9);
	addBefore (head, 7);
	discardNext (head);
	printAll (head);

	cout << "     ";

	target = search(head, 8);
	printAll (target);

	return 0;
}
