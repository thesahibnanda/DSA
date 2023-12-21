#include <iostream>

class Node 
{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int val) : data(val), prev(NULL), next(NULL) {}
};

class DoublyLinkedList 
{
    private:
        Node* head;
        Node* tail;

    public:
        DoublyLinkedList()
        {
            head = NULL;
            tail = NULL;
        }

        void insertAtHead(int val) 
        {
            Node* newnode = new Node(val);
            if (head == NULL) 
            {
                head = newnode;
                tail = newnode;
            } 
            else 
            {
                newnode->next = head;
                head->prev = newnode;
                head = newnode;
            }
        }

        void insertAtTail(int val) 
        {
            Node* newnode = new Node(val);
            if (head == NULL) 
            {
                head = newnode;
                tail = newnode;
            }
            else 
            {
                tail->next = newnode;
                newnode->prev = tail;
                tail = newnode;
            }
        }

        void insertAtIndex(int val, int index)
        {
            Node* newnode = new Node(val);

            if(index<0)
            {
                std::cout << "Invalid Index" << std::endl;
                delete newnode;
            }

            else if(index==0)
            {
                newnode->next = head;
                head = newnode;
            }

            else
            {
                Node* temp = head;
                for(int i=0; i<index-1 && temp!=NULL; i++)
                {
                    temp=temp->next;
                }

                if(temp==NULL)
                {
                    std::cout << "Index " << index << "Out Of Bounds" << std::endl;
                    delete newnode;
                }
                else 
                {
                    newnode->next = temp->next;
                    temp->next = newnode;
                }
            }
        }

        void displayFromHead() 
        {
            Node* temp = head;
            int count = 0;
            while (temp != NULL) 
            {
                std::cout << "Node No. " << count << ": " << temp->data << std::endl;
                count++;
                temp = temp->next;
            }
        }

        void displayFromTail() 
        {
            Node* temp = tail;
            int count = 0;
            while (temp != NULL) 
            {
                std::cout << "Node No. " << count << ": " << temp->data << std::endl;
                count++;
                temp = temp->prev;
            }
        }

        void deleteAtHead()
        {
            if(head==NULL)
            {
                std::cout << "Empty Doubly Linked List" << std::endl;
            }
            else if(head->next==NULL)
            {
                Node* temp = head;
                head = NULL;
                tail = NULL;
                delete temp;
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
            if(head==NULL)
            {
                std::cout << "Empty Doubly Linked List" << std::endl;
            }
            else if(head->next==NULL)
            {
                Node* temp = head;
                head = NULL;
                tail = NULL;
                delete temp;
            }
            else
            {
                Node* temp = tail;
                tail = tail->prev;
                tail->next = NULL;
                delete temp;
            }
        }

        void deleteAtIndex(int index) 
        {
            if (index < 0) 
            {
                std::cout << "Invalid Index " << index << std::endl;
                return;
            }

            if (index == 0) 
            {
                deleteAtHead();
                return;
            }

            Node* temp = head;
            for (int i = 0; temp != NULL && i < index - 1; i++) 
            {
                temp = temp->next;
            }

            if (temp == NULL || temp->next == NULL) 
            {
                std::cout << "Index " << index << " Is Out Of Bounds" << std::endl;
            } 
            else 
            {
                Node* toDelete = temp->next;
                temp->next = temp->next->next;
                delete toDelete;
            }
        }

        long long size()
        {
            long long count = 0;
            Node* temp = head;
            while(temp != NULL)
            {
                count++;
                temp = temp->next;
            }
            return count;
        }

};

int main() {
    DoublyLinkedList list;
    list.insertAtHead(1);
    list.insertAtTail(2);
    list.insertAtTail(3);
    list.insertAtTail(4);
    list.insertAtHead(0);
    list.insertAtIndex(50, 1);

    std::cout << "Display From Head: " << std::endl;
    list.displayFromHead();

    std::cout << "\nDisplay From Tail: " << std::endl;
    list.displayFromTail();

    std::cout << "\nAfter Deletion From Head: " << std::endl;
    list.deleteAtHead();
    list.displayFromHead();

    std::cout << "\nAfter Deletion From Tail: " << std::endl;
    list.deleteAtTail();
    list.displayFromHead();

    std::cout << "\nAfter Deletion From Index: " << std::endl;
    list.deleteAtIndex(2);
    list.displayFromHead();    

    std::cout << "\nSize Of Doubly Linked List: " << list.size() << std::endl;

    return 0;
}