#include "LinkedList.hpp"

LinkedList::LinkedList()
{
	head = nullptr;
}


int LinkedList::size()
{
	int ListLength = 0;

	for (Node* temp = head; temp != nullptr; temp = temp->next)
	{
		ListLength++;
	}

	return ListLength;
}


void LinkedList::print()
{
	for (Node* temp = head; temp != nullptr; temp = temp->next)
	{
		std::cout << temp->data << ' ';
	}
	std::cout << '\n';
}


void LinkedList::push_front(int value)
{
	Node* new_node = new Node;
	new_node->data = value;

	if (empty())
	{
		new_node->next = nullptr;
	}
	else
		new_node->next = head;

	head = new_node;
}


void LinkedList::push_back(int value)
{
	Node* new_node = new Node;
	new_node->data = value;
	new_node->next = nullptr;

	if (empty())
	{
		head = new_node;
	}
	else
	{
		Node* temp = head;
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
}


void LinkedList::insert(int position, int value)
{
	if (position < 0)
	{
		std::cout << "Error: position must be a positive number!\n";
	}
	else if (position == 0)
	{
		push_front(value);
	}
	// Fix this so it says "Error: position is out of bound!"
	else if (position > size())
	{
		std::cout << "Error: position is out of bounds!\n";
	}
	else
	{
		Node* new_node = new Node;
		new_node->data = value;

		Node* temp = head;

		//loop started with the 1st node after the head node, position value need to be displaced by 1 for correction
		for (int i = 0; i < (position - 1); i++)
		{
			temp = temp->next;
		}

		new_node->next = temp->next;
		temp->next = new_node;
	}
}


void LinkedList::pop_back()
{

	if (empty())
	{
		std::cout << "Error: List is empty!\n";
	}
	else if (size() == 1) 	//if removing a node from a list size of 1
	{
		head = nullptr;
	}
	else
	{
		Node* prev_node = head;
		Node* next_node = head;

		while (next_node->next != nullptr)
		{
			prev_node = next_node;
			next_node = prev_node->next;
		}

		prev_node->next = nullptr;
		delete next_node;
	}
}


void LinkedList::find(int value)
{
	int position = 0;

	for (Node* temp = head; temp != nullptr; temp = temp->next)
	{
		if (temp->data == value)
		{
			std::cout << "Value found at position: " << position << '\n';
		}
			
		position++;
	}
}


void LinkedList::erase(int position) 
{
	if (position < 0)
	{
		std::cout << "Error: position must be a positive number!\n";
	}
	else if (position > (size() - 1))
	{
		std::cout << "Error: position is out of bounds!\n";
	}
	else if (size() == 0)
	{
		std::cout << "Error: List is empty!\n";
	}
	else if (size() == 1)
	{
		head = nullptr;
	}
	else
	{
		Node* prev_node = head;
		Node* next_node = head;

		if (position == 0) 
		{
			next_node = prev_node->next;
			head = next_node;
			delete prev_node;
		}
		else
		{
			for (int i = 0; i < position; i++)
			{
				prev_node = next_node;
				next_node = prev_node->next;
			}

			prev_node->next = next_node->next;
			delete next_node;
		}
	}


}


void LinkedList::pop_front(){
	if (empty()){
		std::cout << "Error: List is empty!\n";
	}
	
	else if(size() == 1){
		head = nullptr;
	}

	else{

	}
}


LinkedList::~LinkedList()
{
	Node* next_node = head;
	while (next_node != nullptr)
	{
		head = next_node;
		next_node = head->next;
		delete head;
	}
}