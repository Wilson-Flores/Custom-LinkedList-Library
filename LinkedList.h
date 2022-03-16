#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>


struct Node {
	int data;
	Node* next;
};


class LinkedList {
private:
	Node* head;

	bool isEmpty() { return head == nullptr; }

public:
	LinkedList();

	// gets the size of the linked list
	int size();

	// prints each value in the linked list
	void print();

	// add a node in front of the linked list
	void push(int value);

	// add a node to the end of the linked list
	void append(int value);

	// add a node at a given position in the linked list starting with 0 as the first position
	void insert(int position, int value);

	// removes node at the end of the linked list
	void pop();

	// look for a specific value within the linked list, returns its position in the list
	void find(int value);

	// removes a node at a specific position in the list
	void remove(int position);

	// deletes every node from the list starting from the head node
	~LinkedList();
};

#endif