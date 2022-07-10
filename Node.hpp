#include <iostream>
using namespace std;

class Node {
   public:
      Node(){
        age=18;
        name="RAMA";
        next = NULL;
      }

      Node(int age1){
        age=age1;
        name="RAMA";
        next = NULL;
      }
      
      void display(){
        cout<<" age is "<<age;
        cout<<" name is "<<name;
        cout<<" \n";
      }

      void setNext(Node* x)      // setNext takes a pointer, not a Node by value.
      {
          next = x;
      }

      Node *getNext()
      {
        return next;
      }
    
   private:
      int age;
      string name;
      Node *next;    
};