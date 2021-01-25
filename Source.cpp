#include <iostream>
#include <string>
#include "LinkedList.h"


/*
Create a shopping list with a singly linked list
1.insert item
2. delete item
3. sort items in alphbetical order
*/
//next time: unique ptr;

int main()
{
	LinkedList list;
	std::string item;
	char reply;

	do
	{
		std::cout << "Enter item: ";
		std::cin >> item;
		list.addItem(item);
		
		std::cout << "Delete item?(Y/N)";
		std::cin >> reply;
		if (reply == 'y' || reply == 'Y')
		{
			list.removeItemName(item);
		}

		list.displayList();

		std::cout << "Enter another item?(Y/N)";
		std::cin >> reply;

	} while (reply=='Y' ||reply=='y');

	list.sortItems();
	
	return 0;
}