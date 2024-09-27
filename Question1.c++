// Ques 1. Given a non-empty array of integers nums, every element appears twice
// except for one. Find that single one.
// Sample :- Input: nums = [2,2,1]
// Output: 1
// Note: Take all the required input from user.

#include<iostream>
using namespace std;
int main(){
    int uni=0,nums;
    cin>>nums;
    int arr[nums];
    for(int i=0;i<nums;i++){
        cin>>arr[i];
    }
    for(int i=0;i<nums;i++){
        uni=uni^arr[i];
    }
    cout<<uni<<endl;
    return 0;
}




//  Ques 2. Implement the stack using linkedlist.
#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Stack{
public:
    Node* head;
    Stack(){
        head=NULL;
    }
    void push(int val){
        Node* newnode= new Node(val);
        if(head==NULL){
            head=newnode;
        }else{
            newnode->next=head;
            head=newnode;
        }
    }
    void pop(){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    int top(){
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }
};

int main(){ 
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}

