#include "stack.h"
#include <iostream>




using namespace std;

Stack::Stack () {
             cur_size=0;
             cout<<"\nStack was created";
             };
Stack::~Stack () {
             };
             
void Stack::push (char push_char) 
{
     if (cur_size==SIZE) 
     {
        cout<<"\nStack is  full.";
     }
     else 
     {
          stck[cur_size]=push_char;
          cur_size++;
     }
}
char Stack::pop () 
{
     if (cur_size==0) 
     {
         cout<<"\nStack is empty";
     }
     else 
     {
          cur_size--;              
          return stck[cur_size];
     }    
}
char Stack::top () 
     {
          return stck[cur_size];
     }
bool Stack::is_empty () 
     {
          if (cur_size==0) 
             {
              return true;
              }
          else 
              {
              return false;
              }
     };
     
     
          

