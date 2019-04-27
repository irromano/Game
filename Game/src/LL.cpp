/*
 * SLL.cpp
 *
 *  Kyle Sapia and Ian Romano
 */

#include <stdlib.h>
#include <iostream>

#include "LL.hpp"
#include "NodeL.hpp"
using namespace std;

LL::LL() {
	first = NULL;
	last = NULL;
	size = 0;
	score = 0;
}

LL::~LL() {
	NodeL *tmp = first;
	while (first != NULL) {
		delete first;
		tmp = first->next;
		first = tmp;
		size--;
	}
	delete tmp;
	cout<<"deleted each node in 11" << endl;
}

void LL::addFirst(string data) {
	NodeL *pushed = new NodeL(data);
	first = last = pushed;
	size = 1;
}

void LL::push(string data) {
	if (first == NULL) {
		this->addFirst(data);
	} else {
		NodeL *pushed = new NodeL(data);
		last->next = pushed;
		last = pushed;
	}
	size++;
}

void LL::printList() {
	NodeL *tmp = first;
	while (tmp != NULL) {
		//cout << tmp->rating << ",";
		tmp->printNode();
		tmp = tmp->next;
		//cout<<"While1"<<endl;
	}
	cout << endl;
}
/*getScore()
 * This method modifies the LL's score to the total score value of all words in the list. It
 * Traverses the list and sum totals the score of each node, and changes the score attribute to
 * match that total.
 * Parameters-
 * 		None
 * Returns-
 * 		Nothing
 */
void LL::getScore() {
	int score = 0;
	NodeL *temp = first;
	while (temp != NULL) {
		score++;
		temp = temp->next;
	}
	this->score = score;
}



