/*
ENES KARALÝ
365327
2. Öðretim
*/
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace  std;



struct SinglyNode {

	string elem;
	int score;
	SinglyNode *next;

};
struct SinglyLinkedList{

	SinglyNode *head;
	SinglyLinkedList();
	

	void insertOrdered(const string& e, const int& i);
	void removeOrdered(const string& e, const int& i);


	bool empty();
	void print();
};

SinglyLinkedList::SinglyLinkedList() {

	head = new SinglyNode;
	head->next = NULL;
}




bool SinglyLinkedList::empty() {



	return head->next == NULL;
}


void SinglyLinkedList::insertOrdered(const string& e, const int& i) {
	SinglyNode* newNode = new SinglyNode;
	newNode->elem = e;
	newNode->score = i;
	newNode->next = NULL;


	SinglyNode * temp = head;
	while (temp->next != NULL) {

		if (temp->next->score > newNode->score) {

			newNode->next = temp->next;
           temp->next = newNode;
		   return;
		}
		temp = temp->next;
}


	temp->next = newNode;
}



void SinglyLinkedList::removeOrdered(const string& e, const int& i) {

	if (empty()) {

		cout << "list is empty" << endl;

	}

	SinglyNode * temp = head;
   
	
	while (temp->next != NULL) {

		if ((e.compare(temp->next->elem) == 0) && (temp->next->score == i))
		{
			
			SinglyNode * current = temp->next;
			temp->next = current->next;
				delete current;
				return;
}
		temp = temp->next;

	}




}


void SinglyLinkedList::print()
{
	if (empty())
	{
		cout << "List is empty !" << endl;
		return;
	}


	SinglyNode* first = head->next;
	while (first != NULL)
	{
		cout << first->elem << "\t" << first->score << endl;
		first = first->next;
	}
}







int main()
{

	SinglyLinkedList list;

	list.insertOrdered("Paul", 720);
	list.insertOrdered("Rose", 590);
	list.insertOrdered("Anna", 660);	
	list.insertOrdered("Mike", 1105);
	list.insertOrdered("Rob",  750);
	list.insertOrdered("Jack", 510);
	list.insertOrdered("Jill", 740);
	list.print();
	cout << endl;

	list.removeOrdered("Jack", 510);
	
	
	list.removeOrdered("Mike", 1105);
	list.removeOrdered("Paul", 720);
	list.print();


	system("pause");
	return 0;
}
