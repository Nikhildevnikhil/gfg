// { Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




 // } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    // Reverse a linked list block
    struct Node* reverseList(struct Node *head){
        struct Node* dummyNode = NULL;
        while(head != NULL){
            struct Node *next = head -> next;
            head -> next = dummyNode;
            dummyNode = head;
            head = next;
        }
        return dummyNode;
    }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       if(head == NULL || head -> next == NULL) return true;
       // Finding middle element
       Node *slow = head;
       Node *fast = head;
       while(fast -> next != NULL && fast -> next -> next != NULL){
           slow = slow -> next;
           fast = fast -> next -> next;
       }
       
       slow -> next = reverseList(slow -> next);
       slow = slow -> next;
       
       while(slow != NULL){
           if(head -> data != slow -> data) return false;
           head = head -> next;
           slow = slow -> next;
       }
       return true;
    }
};



// { Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}

  // } Driver Code End
