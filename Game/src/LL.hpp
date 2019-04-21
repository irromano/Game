/*
 * SLL.hpp
 *
 *  Created on: Mar 18, 2019
 *  Edited on:	Apr 21, 2019
 *      Author: Kyle Sapia, Ian Romano
 */

#ifndef LL_HPP_
#define LL_HPP_

#include <stdlib.h>
#include <iostream>

#include "NodeL.hpp"
using namespace std;


class LL {
	friend class Game;
	NodeL *first;
	NodeL *last;
	int size;
	int score;
public:
	LL();
	~LL();

	// pushes a new node (with rating r and c comments) onto the end of the linked
	// list
	// (remember to reset the last pointer) – I called this from the
	// insertInOrder() method.
	void push(string data);

	//adds the very first node (made from r and c) to an empty list
	// I called this from insertInOrder
	void addFirst(string data);

	 // write a method that prints out the linked list
	void printList();

	/*getScore()
	 * This method modifies the LL's score to the total score value of all words in the list. It
	 * Traverses the list and sum totals the score of each node, and changes the score attribute to
	 * match that total.
	 * Parameters-
	 * 		None
	 * Returns-
	 * 		Nothing
	 */
	void getScore();
};

#endif /* LL_HPP_ */
