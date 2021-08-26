#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

          Node* removeDuplicates(Node *head)
          {
            //Write your code here
             Node *current = head;
              while(current->next != NULL){
                  if(current->data == current->next->data){
                     current->next = current->next->next;
                  }
                  else{
                      current = current->next;
                  }
              }

              return head;
          }

          Node* insert(Node *head,int data)