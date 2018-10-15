//Edited by Chance McCormick
//COSC 2030
//Lab4
//10 / 08 / 2018


#include "VectorDriver.h"
#include<algorithm>

int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);
  vector<short> add_test;

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;

  cout << "\n================#1================" << endl;		//lab problem 1 
  print(add_test);												// prints the vector add_test which should be empty
  //fill_vector(add_test);
  add_numbers(add_test);										//calls the add_numbers function and fills vector add_test
  cout << endl;
  print(add_test);												//prints vector add_test
  cout << endl;
  print(add_test);												

  cout << "\n================#2================" << endl;		//lab proble 2
  print_even(add_test);											// prints only even position numbers of add_test

  cout << "\n================#3================" << endl;		//lab problem 4
  is_present(add_test, 2);										//test the vector add_test to see if the value 2 is present

  cout << "\n================#4================" << endl;	//lab problem 4
  vector<short> sort_test{ 100 , 1, 9 ,7, 50 };				//creats a small vector called sort_test with 5 values
  print(sort_test);
  cout << endl; 
  std::sort(sort_test.begin(), sort_test.end());			//sorts the values of sort_test in ascending order.
  print(sort_test);
  cout << endl;



  system("pause");
  return 0;
}
