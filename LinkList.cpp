#include <bits/stdc++.h>
using namespace std;

struct Node
{
   int id;
   string name;
   float cgpa;
   int rank;
   Node* next;
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }

        void insert(int id , string name , float cgpa , int rank) {
        Node* newNode = new Node;
        newNode->id = id;
        newNode->name = name;
        newNode->cgpa = cgpa;
        newNode->rank = rank;
        newNode->next = head;
        head = newNode;
        }

        void deleteNode(int id) {
        Node* current = head;
        Node* previous = nullptr;

        while (current != nullptr && current->id != id) {
            previous = current;
            current = current->next;
        }

        if (current == nullptr) {
            return;
        }

        if (previous == nullptr) {
            head = current->next;
        } else {
            previous->next = current->next;
        }

        delete current;
        }

        void print(){
            Node* current = head;
            while (current != nullptr)
            {
               cout <<"Student Id : "<< current->id << endl;
               cout <<"Name       : "<< current->name << endl;
               cout <<"CGPA       : "<< current->cgpa << endl;
               cout <<"Rank       : "<< current->rank << endl;
               current = current->next;
               cout << endl;
            }
        }

        Node* search(int id){
            Node* current = head;
            while (current != nullptr) {
                if (current->id == id) {
                    return current;
            }
                current = current->next;
            }
            return nullptr;
        }
};

int main(){

    // inserting data
    cout << "Please insert -1 to stop inserting data" << endl;
    
    int id;
    string name;
    float cgpa;
    int rank;
    LinkedList mylist;
    while (std::cin >> id)
    {
        if(id == -1) break;
        cin >> name >> cgpa >> rank;
        mylist.insert(id,name,cgpa,rank);
    }

    // cout <<"Printing the list:  " << endl;
    // mylist.print(); 

    //Deleting Node
    // cout <<"Which id you wanna delete : " << endl;
    //     cin >> id;
    // mylist.deleteNode(id);


    // cout <<"Printing the list:  " << endl;
    // mylist.print(); 

    //Search in link list
    cout <<"Find result :" << endl;
    cin >> id;
    Node* get = mylist.search(id);

    if(get != nullptr){
        cout << "Student id :" << id << endl;
        cout << "Name       :" << get->name << endl;
        cout << "CGPA       :" << get->cgpa << endl;
        cout << "Rank       :" << get->rank << endl;
    }else{
        cout << "Id not found" << endl;
    }
    
    return 0;
}