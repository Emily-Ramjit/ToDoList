A vector serves as a wrapper for a dynamic array—a wrapper in that it surrounds the array with a class 
and creates an interface that provides well-defined functionality, such as accessing, removing, or 
counting the array elements. A further benefit is that the vector handles the dynamic memory allocation 
and resizing of its underlying array as necessary under the hood, without the user of the vector needing 
to know anything about it.

In this assignment, I created an integer vector class which will be used to implement an Integer Set. At 
any given moment, all of the elements must be unique. The Set may not contain any duplicates. First, I 
implemented a class called Vector that uses a dynamic array as its underlying data structure. All 
instances initially start with a dynamically created array of size three, deallocating the array when 
necessary. 

The Vector class interface provides the following functionality: unsigned int capacity() const — Returns 
the size of the space currently allocated for the vector, unsigned int size() const — Returns the current 
number of elements in the vector, bool empty() const — If the vector contains 0 elements, return true; 
otherwise, return false, void push_back(const int& data) — Add data to the end of the vector, doubling 
the size of the underlying dynamic array if necessary, bool remove(const int& data) — If the vector 
contains data, removes the first instance of data from the vector, and returns true; otherwise, returns 
false. You will need to shift elements if the element being removed is not the last element in the vector, 
void clear() — Empties the vector of its elements and resets the capacity to 3, Overload operator= — 
Copy Assignment Operator, Overload operator[] — returns element in pos requested. You may assume 
that the given position is valid, bool at(unsigned int pos, int& data) const — If the position pos is valid 
set the value of data to the element in the vector at position pos. Return true on success, false on 
failure. 

Secondly, I implemented a class called Set that uses the vector underlying data structure. The Set class 
interface provides the following functionality: 
unsigned int size() const — Returns the current number of elements in the set, bool empty() const — If 
the set contains zero elements, returns true; otherwise, returns false, bool contains(const int& data) 
const — If the set contains data, returns true; otherwise, returns false, bool insert(const int& data) — If 
the set does not already contain data, adds a new element, data, and returns true; otherwise, returns 
false, bool remove(const int& data) — If the set contains data, removes data from the set, and returns 
true; otherwise, returns false, void clear() — Empties the set of its elements.

The makefile provided contains all the necessary files to compile and run all at once. Use the make 
command and run the executable ./Project1. The program does not contain any bugs and has passed all 
of the tests provided. All of the parts have been completed without error. 
