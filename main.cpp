#include "LinkedList.h"

int main()
{
	LinkedList l;

	l.push(10);
	l.push(9);
	l.push(8);


	l.append(11);


	l.insert(1, 22);
	l.print();

	l.remove(1);
	l.print();

	l.pop();
	l.print();


	return 0;
}