/***************************************************************
Title: Vector.h
Author: Emily Ramjit
Date Created: 2/13/2017
Class: Spring 2017, CSCI 235, Mon & Wed 7:00pm-8:15pm
Professor: Aarsh Vora 
Purpose: Assignment 1
Description: Vector.h contains the Vector class and it's function prototypes that will be implemented in the Vector.cpp file as well as the
private data members such as the dynamic array of ints, size, capacity, and resize function. It includes the Vector's destructor,constructor,
functions for returning the capacity/size of the vector, checking if the vector is empty, adding elements to the 
end of the vector, removing elements, emptying the vector, setting an element to a position if the element is valid, resizing the vector 
when the size of the vector is equal to the capacity, as well as copying the elements to a new array. 
***************************************************************/

#ifndef __CS235_VECTOR_H_
#define __CS235_VECTOR_H_

class Vector {
public:
	//constructor
	Vector(unsigned int capacity = DEFAULT_CAPACITY);
	//destructor 
	~Vector();
	Vector(const Vector& rhs);
	//copy assignment operator 
	Vector& operator=(const Vector& rhs);

	//Returns the size of the space	currently allocated	for	the vector
	unsigned int capacity() const;
	//Returns the current number of elements in the vector
	unsigned int size() const;
	//If the vector contains 0 elements, return true; otherwise return false
	bool empty() const;
	//Adds data to the end of the vector, doubling the size of the underlying dynamic array
	//if necessary
	void push_back(const int& data);
	//If the vector contains data, removes the first instance of data from the vector
	//and returns true, otherwise false. Also shifts elements if the element being removed
	//is not the last element in the vector.
	bool remove(const int& data);
	//Empties the vector of its elements and resets the capacity to 3.
	void clear();
	//returns element in pos requested, assuming the given position is valid
	int& operator[](unsigned int pos);
	//If the position pos is valid, set the value of data to the element in the vector at position pos
	//Returns true on success, false of failure, assuming the position is valid.
	bool at(unsigned int pos, int& data)const;
	
	//Function I added to compute specifically whether or not an element exists 
	//This will be used for the Set class.
	bool contains(const int& data)const;


private:
	//dynamic array of ints
	int* arr_;
	//size 
	unsigned int size_;
	//capacity 
	unsigned int capacity_;
	//default capacity set to 3
	static const unsigned int DEFAULT_CAPACITY = 3;
	//helper function to resize the array, copies elements over to new array
	void resize(unsigned int capacity);
	
};

#endif
