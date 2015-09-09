#ifndef STACK_H
#define STACK_H
#define SIZE 5

#include <iostream>

using namespace std;

class Stack {
      private: 
               char stck[SIZE];
               int cur_size;
               
      public: 
              Stack ();
              ~Stack ();
              
              void push(char push_char);
              char pop ();
              char top ();
              bool is_empty ();
};

#endif
              
              
