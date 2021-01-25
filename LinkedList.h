#pragma once
#include <string>
#include <memory>

class Node
{
public:
	std::string item{};
	Node* next{}; //node has to be a pointer b/c pointer points to a memory address and b/c we dont know how much memory to allocate to the node. If we were to declare node w/o using pointers,it would be a node inside a node ad infinitum
	//std::unique_ptr<Node> next{} ---- unique pointers to prevent memory leak
	
	//contructors:
	Node();
	Node(std::string tempItem) : item(tempItem) {}
	Node(std::string item, Node* next);

	//destructor:
	~Node();

};

class LinkedList
{
private:
	Node* head,*tail;
	int count; //iterator variable
public:
	//std::unique_ptr<Node> head;

	//default contrusctor:
	LinkedList();
	
	void addItem(std::string item);

	void displayList();
	
	void sortItems();

	bool removeFirst();
	bool removeLast();
	bool removeItemName(std::string item);

	void swap(std::string &a,std::string &b);
};


