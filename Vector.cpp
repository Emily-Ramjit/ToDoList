/***************************************************************
Title: Vector.cpp
Author: Emily Ramjit
Date Created: 2/13/2017
Class: Spring 2017, CSCI 235, Mon & Wed 7:00pm-8:15pm
Professor: Aarsh Vora 
Purpose: Assignment 1
Description: Vector.cpp implements the functions from it's header file, which includes it's destructor,constructor,
returns the capacity/size of the vector, checks if the vector is empty, push_back function which adds elements to the 
end of the vector, removes elements, empties the vector, sets an element to a position if the element is valid, resizes the vector 
when the size of the vector is equal to the capacity, as well as copying the elements to a new array. The vector.cpp also contains
copy and assignment operators.  
***************************************************************/

#ifndef __CS235_VECTOR_CPP_
#define __CS235_VECTOR_CPP_

#include "Vector.h"
#include <iostream>
using namespace std;

//constructor for class Vector. Initializes size and capacity.
Vector::Vector(unsigned int capacity) : size_(0), capacity_(capacity) { 
		arr_ = new int[capacity_]; 
	}

//destructor for the class Vector 
Vector::~Vector() { 
		delete[] arr_; 
	}

//Returns the size of the space allocated for the vector ( maximum capacity )
unsigned int Vector::capacity() const{
		return capacity_;
	}

//Returns the number of elements in the vector.
unsigned int Vector::size() const{
		return size_;
	}

//function to check if vector is empty 	
bool Vector::empty() const{
		return size_==0;
	}

//Adds data to the end of the Vector, doubling the size of the dynamic array if the size is greater than the capacity
void Vector::push_back(const int& data) {
	if (size_ == capacity_) {
		resize(capacity_ * 2);
	}
	arr_[size_] = data;
	size_++;
}

//If the vector contains data, removes the first instance of data from the vector, and returns true; otherwise returns false.
//Shift elements if the element being removed is not the last element in the vector.
bool Vector::remove(const int& data) {
	for (unsigned int i = 0; i < size_; i++) {
		if (arr_[i] == data) {
	
			for (unsigned int j = i; j < size_-1; j++) {
				arr_[j] = arr_[j+1];
			}
			size_--;
			return true;
		}
	}
	return false;
}

//Empties the vector of its elements and resets the capacity to 3. 
void Vector::clear() {
	size_ = 0;
	resize(3);
}

//If the pos is valid, set the value of data to the element in the vector at position pos.
//Return true if successful, return false otherwise. 
bool Vector::at(unsigned int pos, int& data) const{
	if (empty() || pos >= size_) {
		return false;
	} 
	for (unsigned int i = 0; i < size_; i++) {
		if(data==arr_[i]){
			return false;
		}
	}	
	data = arr_[pos];
	return true;
}

// Resize function that copies the elements of the array to a new array that has a bigger capacity. 
void Vector::resize(unsigned int capacity) {
  capacity_ = capacity;
  int* oldArr = arr_;
  arr_ = new int[capacity_];
	// Copies the elements over
  for (unsigned int i = 0; i < size_; i++) {
    arr_[i] = oldArr[i];
  }
  delete[] oldArr;
}


Vector::Vector(const Vector& rhs){
	capacity_ = rhs.capacity_; 
  	size_ = rhs.size_; 
	arr_= new int[rhs.capacity_];


   for (unsigned int i = 0; i <= size_; i++) {
        arr_[i] = rhs.arr_[i]; 
	}
	
}

//Copy Assignment Operator 
Vector& Vector::operator=(const Vector& rhs) {
	if(this != &rhs){
	
	delete [] arr_;
	
	capacity_ = rhs.capacity_; 
  	size_ = rhs.size_; 
	arr_= new int[rhs.capacity_];
  
   for (unsigned int i = 0; i <= size_; i++) {
       	 arr_[i] = rhs.arr_[i]; 
		}
	}
return *this;
}


//Returns element in pos requested. Assuming pos is valid.
int& Vector::operator[](unsigned int pos){	
		return arr_[pos];
	}

//function to find if data exists in a set 
bool Vector::contains(const int& data)const{
			return containsHelper(value, root);
		}

bool containsHelper(int value, TreeNode*node){
		if(node==NULL)
		{
			return false;
		}

		if(node->data==value)
		{
			return true;
		}
		else if(node->data>value)
		{
			return containsHelper(value, node->left);
		}
		else if(node->data<value)
		{
			return containsHelper(value,node->right);
		}

	}

#endif
