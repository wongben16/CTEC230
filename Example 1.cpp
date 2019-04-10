#include <iostream>

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

	cout << "Lab2 part 2 testing the new functions..." << endl;
	createList(first, last);
	printList(first);

	cin >> num;
	insertFront(first, num); //dont know what to put into the () check with professor
	printList(first);

	cin >> num;
	insertBack(last, num);
	printList(first);

	deleteFront(first);
	printList(first);

	deleteBack(first, last);
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
	int total = 0;
	int counter = 0;
	


	cout << "Inside printList...printing linked list...\n" << endl;
	nodeType* current;
	current = new nodeType;
	current = first;
	while (current != NULL)
	{
		cout << current->info << endl;
		total += current->info;
		current = current->link;
		counter++;
	}
	double avg = total / counter;
	cout << "The average is: " << avg << endl;
}

void insertFront(nodeType*& first, int num) {
	nodeType* newNode = new nodeType;
	int num;
	
	newNode->info = num;
	newNode->link = first;
	first = newNode;

}

void insertBack(nodeType*& last, int a) {
	nodeType* newNode = new nodeType;
	int num;

	newNode->info = num;
	newNode->link = NULL;
	last = newNode;

}

void deleteFront(nodeType*& first) {
	nodeType* temp;
	temp = first;
	first = first->link;
	delete temp;
}

void deleteBack(nodeType*& last, nodeType*& first) {
	nodeType* current;
	current = new nodeType;
	current = first;

	nodeType* temp = new nodeType;
	while (current != NULL) //to find the last node and second to last node
	{
		cout << current->info << endl;
		current = current->link;
		if (current->link->link == NULL) { //this finds second to last node
			temp = current;
		}
		else {
		}
	}

	delete current; //deletes the last node
	temp = last; //makes second to last node to now become the last node



}


