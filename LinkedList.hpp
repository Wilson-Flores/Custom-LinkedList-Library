#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <iostream>


struct Node {
	int data;
	Node* next;
};


class LinkedList {
private:
	Node* head;

	bool empty() { return head == nullptr; }

public:
	LinkedList();

	// gets the size of the linked list
	int size();

	// prints each value in the linked list
	void print();

	// add a node in front of the linked list
	void push_front(int value);

	// add a node to the end of the linked list
	void push_back(int value);

	// add a node at a given position in the linked list starting with 0 as the first position
	void insert(int position, int value);

	// removes node at the end of the linked list
	void pop_back();

	// look for a specific value within the linked list, returns its position in the list
	void find(int value);

	// removes a node at a specific position in the list
	void erase(int position);

	// deletes every node from the list starting from the head node
	~LinkedList();
};

#endif