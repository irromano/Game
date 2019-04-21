/*
 * NodeL.cpp
 *
 *  Created on: Mar 18, 2019
 *  Edited on:	Apr 21, 2019
 *      Author: Kyle Sapia, Ian Romano
 */


#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "NodeL.hpp"
using namespace std;

NodeL::NodeL(string data) {
	this->data = data;
	next = NULL;
}

void NodeL::printNode() {
	cout << "Word: " << data << endl;

}

NodeL::~NodeL() {
	cout << "deleting " << data << endl;
}


