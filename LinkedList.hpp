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

	// ----- Capacity Functions -----

	bool empty() { return head == nullptr; }	// returns true if linked list is empty

	int size();									// gets the size of the linked list


public:
	LinkedList();

	// ----- Modifier Functions -----

	void insert(int position, int value);		// add a node at a given position in the linked list starting with 0 as the first position
	void erase(int position);					// removes a node at a specific position in the list
	void push_back(int value);					// add a node to the end of the linked list
	void pop_back();							// removes node at the end of the linked list
	void push_front(int value);					// add a node in front of the linked list
	void pop_front();							// removes the first element

	// ----- Additional Functions -----

	void print();								// prints each value in the linked list
	void find(int value);						// look for a specific value within the linked list, returns its position in the list


	~LinkedList();								// deletes every node from the list starting from the head node
};

#endif