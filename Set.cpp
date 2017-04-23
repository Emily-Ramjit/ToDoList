/***************************************************************
Title: Set.cpp
Author: Emily Ramjit
Date Created: 2/13/2017
Class: Spring 2017, CSCI 235, Mon & Wed 7:00pm-8:15pm
Professor: Aarsh Vora 
Purpose: Assignment 1
Description: Set.cpp implements the functions from the Set.h file. It uses the instance of the Vector class to implement these functions that were
previously implemented in the Vector.cpp file. The functions include checking the size of the set, checking if the set is empty, inserting an element
into the set if it does not exist, removes elements from the set, checks if the element exists, and empties the set. 
***************************************************************/
#ifndef __CS235_SET_CPP_
#define __CS235_SET_CPP_

#include "Set.h"
#include <iostream>


using namespace std;

//Returns the current number of elements in the set
unsigned int Set::size() const{	
	return vector_.size();
}

//If the set contains zero elements, return true, otherwise false.
bool Set::empty() const{
	return vector_.empty();
}

//If the set does not already contain data, adds a new element data and returns true, otherwise false
bool Set::insert(const int& data) {
	if(vector_.contains(data)==true){
		return false;
	}
	else{
		vector_.push_back(data);
	}
return true;
}

//If the set contains data, removes data from the set, and returns true, otherwise returns false
bool Set::remove(const int& data){
	 return vector_.remove(data);
}

//If the set contains data, return true, otherwise false
bool Set::contains(const int& data)const {
	if(vector_.contains(data)==false){
	return false;
	}
	return true;
}

//empties the set of its elements
void Set::clear() {
	vector_.clear();
}

#endif
