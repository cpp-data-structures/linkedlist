#include <iostream>
#include "Node.hpp"
using namespace std;
class LinkedList
{
    private:
        Node *node;
    public:
        LinkedList()
        {
            //Node node1;
            node = NULL;
        }
        ~LinkedList()
        {

        }
        Node deleteFirst()
        {
            Node *temp = node;
            node = node->getNext();
            return *temp;
        }

        Node deleteAtPosition(int position)
        {
            int i=1;
            Node *temp = node;
            while(i<position-1){
                temp = temp->getNext();
                i++;
            }
            temp->setNext(temp->getNext()->getNext());
            return *temp;
        }

        void insertAtPosition(Node* x, int position)
        {
            if(node == NULL){
                node = x;
                return;
            }
            Node *temp = node;
            int i=1;
            while(temp->getNext()!=NULL &&  i<position-1){
                temp = temp->getNext();
                i++;
            }
            x->setNext(temp->getNext());
            temp->setNext(x);
        }

        
        void insert(Node* x)
        {
            if(node == NULL){
                node = x;
                return;
            }
            Node *temp = node;
            while(temp->getNext()!=NULL){
                temp = temp->getNext();
            }
            x->setNext(NULL);
            temp->setNext(x);
        }

        void displayAll()
        {
            Node *temp = node;
            while(temp!=NULL){
                temp->display();
                temp = temp->getNext();
            }
        }
};

int main(void) {
   int i=0;
   LinkedList list;

   while(i<10){
    Node *node = new Node(i);
    list.insert(node);
    i++;
   }
   
   list.displayAll();
   cout<<"Delete at Position 5 \n";
   list.deleteAtPosition(5);
   list.displayAll();
   cout<<"Delete at Position 1 \n";
   list.deleteFirst();
   list.displayAll();
   cout<<"insert at Position 3 \n";
   Node *node = new Node(99);
   list.insertAtPosition(node,3);
   list.displayAll();
}