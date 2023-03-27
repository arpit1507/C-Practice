#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int value){
        this->data=value;
        prev=nullptr;
        next=nullptr;
    }
};

class DoublyLinkedList{
    private:
    Node* head;
    Node* tail;
    int length;

    public:
    DoublyLinkedList(int value){
        Node* newNode=new Node(value);
        head=newNode;
        tail=newNode;
        length=1;
    }
    void append(int value){
        Node* newNode=new Node(value);
        if(length==0){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
            length+=1;
        }
    }

    void prepend(int value){
        Node* newNode=new Node(value);
        if(length==0){
            head=newNode;
            tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;
            length++;
        }
    }

    void print(){
        Node* temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }

    Node* get(int index){
        Node* temp;
        if ((length/2)>index){
            temp=head;
            for (int i=0;i<index;i++){
                temp=temp->next;
            }
        }
        else{
            temp=tail;
            for (int i=length-1;i>index;i--){
                temp=temp->prev;
            }
        }
        return temp;
    }

    void deleteFirst(){
        if (length==0) return;
        else if(length==1){
            head=nullptr;
            tail=nullptr;
            length--;
            return;
        }
        else{
            Node* temp=head->next;
            temp->prev=nullptr;
            head=temp;
            length--;
            return;
        }
    }
    void deleteLast(){
        if (length==0) return;
        else if(length==1){
            head=nullptr;
            tail=nullptr;
            length--;
        }
        else{
            Node* temp=tail->prev;
            temp->next=nullptr;
            tail=temp;
            length--;
        }
    }

    void set(int index,int value){
        Node* temp=get(index);
        temp->data=value;
    }

    bool addNode(int index,int value){
        if(index<0 && index>length) return false;
        else if (index==length){
            append(value);
            return true;
        }
        else if (index==0){
            prepend(value);
            return true;
        }
        else{
            Node* newNode=new Node(value);
            Node* before=get(index-1);
            Node* after=before->next;
            before->next=newNode;
            newNode->prev=before;
            newNode->next=after;
            after->prev=newNode;
            length++;
            return true;
        }
    }

    bool deleteNode(int index){
        if(index<0 && index>length) return false;
        else if(length==0) return false;
        else if (index==length){
            deleteLast();
            return true;
        }
        else if (index==0){
            deleteFirst();
            return true;
        }
        else{
            Node* temp=get(index);
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
            delete temp;
            length--;
            return true;
        }
    }
};

int main(){
    DoublyLinkedList* newDoublyLinkedList=new DoublyLinkedList(1);
    newDoublyLinkedList->append(2);
    newDoublyLinkedList->append(3);
    newDoublyLinkedList->prepend(0);
    newDoublyLinkedList->print();
    newDoublyLinkedList->get(2);
    //newDoublyLinkedList->set(2,10);
    newDoublyLinkedList->print();
    newDoublyLinkedList->addNode(2,5);
    newDoublyLinkedList->print();
    newDoublyLinkedList->deleteNode(2);
    newDoublyLinkedList->print();
    //newDoublyLinkedList->deleteLast();
    newDoublyLinkedList->addNode(2,7);
    newDoublyLinkedList->print();
    newDoublyLinkedList->deleteNode(2);
    newDoublyLinkedList->print();
    newDoublyLinkedList->addNode(3 ,7);
    newDoublyLinkedList->print();
    newDoublyLinkedList->addNode(4 ,18);
    newDoublyLinkedList->print();
}