#include <iostream>

class Node {
    public:
        int data;
        Node* next;
    
        Node(int val) 
        {
            data = val;
            next = NULL;
        }
};

class LinkedList {
    private:
        Node* head;

    public:
        LinkedList()
        {
            head = NULL;
        }
    
        void insertAtHead(int val) 
        {
            Node* newnode = new Node(val);
            if(head == NULL) 
            {
                head = newnode;
            } 
            else 
            {
                newnode->next = head;
                head = newnode;
            }
        }
    
        void insertAtTail(int val) 
        {
            Node* newnode = new Node(val);
            if(head == NULL) 
            {
                head = newnode;
            } 
            else 
            {
                Node* temp = head;
                while(temp->next != NULL) 
                {
                    temp = temp->next;
                }
                temp->next = newnode;
            }
        }
    
        void display() 
        {
            if(head == NULL) 
            {
                std::cout << "Nothing In Linked List" << std::endl;
            } 
            else 
            {
                Node* temp = head;
                int c = 1; 
                while(temp != NULL) 
                {
                    std::cout<<"Node No. "<< c<< ": " << temp->data << std::endl;
                    temp = temp->next; 
                    c++;
                }
            }
        }

        void deleteAtHead()
        {
            if(head == NULL) 
            {

            }
            else
            {
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

        void deleteAtTail()
        {
            if(head == NULL) 
            {
                
            }
            else if(head->next == NULL) 
            {
                delete head;
                head = NULL;
            }
            else
            {
            
                Node* temp = head;
                while(temp->next->next != NULL) 
                {
                    temp = temp->next;
                }
                delete temp->next;
                temp->next = NULL;
            }
        }

};

int main() 
{
    LinkedList list;
    
    list.insertAtTail(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.insertAtTail(4);
    list.insertAtHead(0);
    list.insertAtTail(5);
    
    list.display();

    list.deleteAtHead();

    std::cout<<"\nAfter Deletion From Head: "<<std::endl;

    list.display();

    list.deleteAtTail();

    std::cout<<"\nAfter Deletion From Tail: "<<std::endl;

    list.display();


    
    return 0;
}
