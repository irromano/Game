

#ifndef NODEL_HPP_
#define NODEL_HPP_


#include <iostream>
using namespace std;


class NodeL {
	friend class LL;
	friend class Game;
	string data;
	NodeL *next;
public:
	NodeL(); 	// this constructor takes no input. It and asks the user to input a
				// rating, then reads the rating into the rating field, and
				// then asks the user to input their comments, and reads in the
				// comments into the comments field.
	NodeL(string data); // this constructor takes as input an integer and a string, and
							// initializes the rating field to the integer, and the comment
							// field to the string.
	~NodeL();
	void printNode();
};


#endif /* NODEL_HPP_ */
