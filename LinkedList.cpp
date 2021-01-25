#include "LinkedList.h"
#include <iostream>

Node::Node()
{
	item = "";
	next = nullptr;
}

Node::Node(std::string tempItem)
{
	next = nullptr;
	item = tempItem;
}

Node::Node(std::string item, Node* next)
{
	next = nullptr;
	item = "";
}

Node::~Node()
{
	delete next;
}

LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
	count = 0;
}

void LinkedList::addItem(std::string tempItem)
{
	Node* temp = new Node(tempItem);
	//temp->item =tempItem;
	//temp->next = nullptr;

	if (head == nullptr)//if linked list is empty
	{
		head = temp;
		tail = temp;

	}
	else //if linked list is not empty
	{
		tail->next = temp;
		tail = temp;
		
	}
	count++;
}

void LinkedList::displayList()
{
	Node* temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->item << std::endl;
		temp = temp->next;
	}
}

void LinkedList::swap(std::string &a, std::string &b)
{
	std::string temp = a;
	a = b;
	b = temp;
}

void LinkedList::sortItems()
{
	Node* temp = head;
	bool didSwap{};
	do
	{
		didSwap = false;

		for (int i = 0; i < count - 1; i++)
		{
			int result=strcmp(temp->item.c_str(), temp->next->item.c_str());

			if (result >0 )
			{
				didSwap = true;
				swap(temp->item, temp->next->item);
			}	
			temp = temp->next;
		}
		displayList();

	} while (didSwap);
	
}

bool LinkedList::removeFirst()
{
	if (true)
	{
		return false;
	}
}

bool LinkedList::removeLast()
{

	return false;
}

bool LinkedList::removeItemName(std::string tempItem)
{
	std::cout << "Enter the name of the item to delete:";
	std::cin >> tempItem;

	Node* temp = head;
	while (temp->item == tempItem)
	{
		temp->item = "";
		return true;
	}
	return false;
}
