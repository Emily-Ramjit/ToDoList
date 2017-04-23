/***************************************************************
Title: Set.h
Description: Set.h contains the Set class and it's function prototypes that will be implemented in the Set.cpp file as well as the
private data members such as the instance of the Vector class. It includes the Set's function prototypes for returning the size of the vector, 
checking if the vector is empty, inserting elements to the end of the vector, removing elements, emptying the vector, and checking if the data
exists in the vector.
***************************************************************/

#ifndef __CS235_SET_H_
#define __CS235_SET_H_

#include "Vector.h"

class Set{
public:
	//Returns the current number of elements in the set
	unsigned int size() const;
	//If the set contains zero elements, return true, otherwise false.
	bool empty() const;
	//If the set contains data, return true, otherwise false
	bool contains(const int& data)const;
	//If the set does not already contain data, adds a new element data and returns true, otherwise false
	bool insert(const int& data);
	//If the set contains data, removes data from the set, and returns true, otherwise returns false
	bool remove(const int& data);
	//empties the set of its elements
	void clear();

private:
	//instance of class Vector
	Vector vector_;

};

#endif


