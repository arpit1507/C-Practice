#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        this->data=value;
        next=nullptr;

    }
};

class LinkedList{
    public:
        Node* head;
        Node* tail;
        int length;
    public:
        LinkedList(int value){
            Node* newNode=new Node(value);
            head=newNode;
            tail=newNode;
            length++;
        }
        void append(int value){
            Node* newNode=new Node(value);
            if (length==0){
                head=newNode;
                tail=newNode;
                length++;
                return;            
            }
            tail->next=newNode;
            tail=newNode;
        }
        void print(){
            Node* temp=head;
            while(temp){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
            delete temp;
        }
        void prepend(int value){
            Node* newNode=new Node(value);
            if(length==0){
                head=newNode;
                tail=newNode;
                length++;
            }
            newNode->next=head;
            head=newNode;
            length++;
        }

        bool deletefromfirst(){
            if (length==0) return false;
            else if (length==1){
                head=nullptr;
                tail=nullptr;
                length--;
                return true;
            }
            else{
                Node* temp=head;
                head=temp->next;
                delete temp;
                return true;
            }
        }

        bool deletefromlast(){
            if (length==0) return false;
            else if (length==1){
                head=nullptr;
                tail=nullptr;
                length--;
                return true;
            }
            else{
                Node* temp=head;
                Node* pre=head;
                while(temp->next){
                    pre=temp;
                    temp=temp->next;
                }
                pre->next=nullptr;
                tail=pre;
                length--;
                delete temp;
                return true;
            }
        }

        Node* get(int index){
            Node* temp=head;
            for(int i=0;i<index;i++){
                temp=temp->next;
            }
            return temp;
        }
        
        void set(int index,int value){
            Node* temp=get(index);
            temp->data=value;
            return;
        }

        void insert(int index,int value){
            if (index==0) return prepend(value);
            if (index<0 && index>length) return append(value);
            Node* pre=get(index-1);
            Node* nxt=get(index);
            Node* newNode=new Node(value);
            pre->next=newNode;
            newNode->next=nxt;
            length++;
            return;
        }

        void delete_pos(int index){
            if (index==0){
                deletefromfirst();
                return;
            }
            else if (index<0 && index>length){
                deletefromlast();
                return;
            }
            else{
                Node* pre=get(index-1);
                Node* nxt=get(index);
                pre->next=nxt->next;
                delete nxt;
                length--;
                return;
            }
        }

        

        

};

int main(){
    LinkedList* newLinkedList=new LinkedList(4);
    newLinkedList->append(5);
    newLinkedList->prepend(3);
    //LinkedList* newLinkedList1=new LinkedList(7);
    //newLinkedList1->append(0);
    //newLinkedList1->prepend(7);
    //LinkedList* newLinkedList2=new LinkedList(1);
    //int nxt=0;
    //int j=2;
    newLinkedList->reverse();
    newLinkedList->delete();
    newLinkedList->print();

}