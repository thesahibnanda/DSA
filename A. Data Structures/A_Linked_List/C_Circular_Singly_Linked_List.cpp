#include <iostream>

class Node
{
    public:
        int data;
        Node* next;

        Node(int val)
        {
            data=val;
            next=NULL;
        }
};

class CircularLinkedList
{
    private:
        Node* head;
        
    public:

        CircularLinkedList()
        {
            head=NULL;
        }

        void insertAtHead(int val)
        {
            Node* newnode = new Node(val);
            if(head==NULL)
            {
                head = newnode;
                head->next = head;
            }
            else
            {
                Node* temp = head;
                while(temp->next != head)
                {
                    temp = temp->next;
                }

                temp->next = newnode;
                newnode->next = head;
                head=newnode;
            }
        }

        void insertAtTail(int val)
        {
            Node* newnode = new Node(val);
            if(head==NULL)
            {
                head = newnode;
                head->next = head;
            }
            else
            {
                Node* temp = head;
                while(temp->next != head)
                {
                    temp = temp->next;
                }

                temp->next = newnode;
                newnode->next = head;
            }
        }
        
        void display()
        {
            if(head==NULL)
            {
                std::cout<<"Circular Singly Linked List Is Empty"<<std::endl;
            }
            else
            {
                Node* temp = head;
                int count_index = 0;

                do {  // Do-While Loop For One Iteration For Printing Head
                    std::cout<<"Node No. "<<count_index++<<": "<<temp->data<<std::endl;
                    temp = temp->next;
                } while(temp!= head);
            }
        }

        void deleteAtHead()
        {
            if(head==NULL)
            {
                std::cout<<"Circular Singly Linked List Is Empty"<<std::endl;
            }
            else if(head->next == head)
            {
                Node* temp = head;
                head=NULL;
                delete temp;
            }
            else
            {
                Node* temp = head;
                Node* newTemp = head;
                
                while(temp->next!=head)
                {
                    temp=temp->next;
                }
                head = head->next;
                temp->next = head;
                delete newTemp;
                
            }
        }

        void deleteAtTail()
        {
            if(head==NULL)
            {
                std::cout<<"Circular Singly Linked List Is Empty"<<std::endl;
            }
            else if(head->next == head)
            {
                Node* temp = head;
                head=NULL;
                delete temp;
            }
            else
            {
                Node* temp = head;

                while(temp->next->next!=head)
                {
                    temp=temp->next;
                }
                Node* newTemp = temp->next;
                temp->next = head;
                delete newTemp;

            }
        }
};


int main()
{
    CircularLinkedList list;
    list.insertAtHead(0);
    list.insertAtHead(1);
    list.insertAtTail(2);
    list.insertAtTail(4);
    list.insertAtHead(10);
    list.insertAtTail(15);

    std::cout<<"Display: "<<std::endl;
    list.display();

    std::cout<<"\nAfter Deletion From Head: "<<std::endl;
    list.deleteAtHead();
    list.display();

    std::cout<<"\nAfter Deletion From Tail: "<<std::endl;
    list.deleteAtTail();
    list.display();


    return 0;
}