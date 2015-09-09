#include "stack.h"
#include "classStack.cpp"
#include <iostream>
#include <conio.h>


using namespace std;

int main () {
    char char1;
    int i;
    
    Stack stack1;
    stack1.is_empty();
    
    for (i=1; i<6; i++) {
        cout<<"\nEnter a character that you want to push to stack ";
        cin>>char1;
    
        stack1.push(char1);    
    }
    
    stack1.is_empty();
    
    for (i=1; i<6; i++) {
        cout<<"\nThe poped element of stack "<<stack1.pop();
        }
        
    stack1.is_empty();
    
    getch();
    return 0;
}
    
    
    
    
