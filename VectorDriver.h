/* File: VectorDriver.cpp
 * Athr: Dimitri Zarzhitsky
 * Date: October 16, 2002
 *
 * Desc: provides the basic framework and examples for an introduction to
 *       the STL::vector, iterators, and the algorithms facilities.
 *
 * Edited by: Rafe Cooley
 * Date: October 1, 2017 (the future)
 *

*Edited by Chance McCormick
 COSC 2030
 Lab4
 10/08/2018

 */
typedef unsigned long ulong;

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

// fill vector that has pre-allocated space with consecutive numbers
void fill_vector(vector<short> &data) {
  for (ulong i=0; i<data.size(); i++) {
    data.at(i) = i;
	
  }
}

void add_numbers(vector<short> &data)			// adds 10 random numbers to the vector
{
	short size = 10;
	
	for (int i = 0; i < size; i++)
	{
		int random = rand() % 10 + 1;
		data.push_back(random);
	}
}

// print our vector in a fancy way
void print(const vector<short> &data) {
  if (data.empty()) {
    cout << "<empty>";
  } else {
    cout << "<" << data.at(0);
    for (ulong i=1; i<data.size(); i++) {
      cout << ", " << data.at(i);
    }
    cout << ">";
  }
}

void print_even(const vector<short> &data)				// prints the values that are held at even positions
														// in the vector
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i < data.size(); i++) {
			if (i % 2 == 0)
			{
				cout << ", " << data.at(i);
			}
		
		}
		cout << ">";
	}
}

// use iterator to sum the elements of a vector
short compute_sum(const vector<short> &data) {
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end())
	{
		sum += *iter;
		iter++;
	}
	return sum;
}

  bool is_present(const vector<short> &data, short value)			// iterates through a vector looking for a value
  {																	// if the value is present finished is set to true
	 std::vector<short>::const_iterator iter = data.begin();		//else finished is set to false
	 bool finished;													// prints if the value is present or not

	 //bool done = true;
	  while (iter != data.end())
	  {
		  
		  if (value == *iter)
		  {
			  finished = true;
			  
			  break;
		  }
		  if (value != *iter)
		  {
			  finished = false;
			  
		  }
			  iter++;	 
	  }
	  
	  if (finished == true)
	  {
		  cout << "The value is present" << endl;

	  }

	  if (finished == false)
	  {
		  cout << "The value is not present" << endl;
	  }
	  
	  
	  return 0;
}

// TODO: implement add_numbers
// TODO: implement print_even
// TODO: implement is_present
// TODO: implement std::sort function
