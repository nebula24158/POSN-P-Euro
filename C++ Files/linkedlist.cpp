#include<bits/stdc++.h>
using namespace std;
class linkedlist
    {
    public:
        int data;
        linkedlist * next = NULL;
    };
    
int main(){
    
    
    linkedlist * head = NULL;
    linkedlist * second = NULL;
    linkedlist * third = NULL;
    head = new linkedlist();
    second = new linkedlist();
    third = new linkedlist();
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;


   
    
}