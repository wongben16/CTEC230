#include <iostream>

/////////////////////////////////////////asd;ofnafv////////////////////
using namespace std;
struct nodeType
{
	int info;
	nodeType* link;
};

void createList(nodeType*& first, nodeType*& last);
void printList(nodeType*& first);

int main()
{

	nodeType* first, * last;
	int num;

	createList(first, last);
	printList(first);



	system("PAUSE");
	return 0;
}

void createList(nodeType*& first, nodeType*& last)
{
	int number;
	nodeType* newNode;

	first = NULL;
	last = NULL;

	cout << "Enter an integer (-999 to stop): ";
	cin >> number;
	cout << endl;

	while (number != -999)
	{
		newNode = new nodeType; // create new node
		newNode->info = number;
		newNode->link = NULL;

		if (first == NULL)
		{
			first = newNode;
			last = newNode;
		}
		else
		{
			last->link = newNode;
			last = newNode;
		}
		cout << "Enter an integer (-999 to stop): ";
		cin >> number;
		cout << endl;
	} // end of while-loop

} // end of build list function

void printList(nodeType*& first)
{

	cout << "Inside printList...printing linked list...\n" << endl;
	nodeType* current;
	current = new nodeType;
	current = first;
	while (current != NULL)
	{
		cout << current->info << endl;
		current = current->link;
	}
}


