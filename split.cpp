// Testing Git sync: added this comment in VS Code
// Testing: Added this comment on Codio

/*
CSCI 104: Homework 1 Problem 1

Write a recursive function to split a sorted singly-linked
list into two sorted linked lists, where one has the even 
numbers and the other contains the odd numbers. Students 
will receive no credit for non-recursive solutions. 
To test your program write a separate .cpp file and #include
split.h.  **Do NOT add main() to this file**.  When you submit
the function below should be the only one in this file.
*/

#include "split.h"

/* Add a prototype for a helper function here if you need */
// 1 2 3 4 5 6 NULLPtre 


void split(Node*& in, Node*& odds, Node*& evens)
{
  Node* curr = in;

  if (curr == nullptr) {return;}
  split(curr->next, odds, evens);
  if (curr->value%2 == 0) {
    curr->next = evens;
    evens = curr;
    
  }
  else {
    curr->next = odds;
    odds = curr;
  } 
  curr = nullptr; 


  /* Add code here */
// WRITE YOUR CODE HERE
in = nullptr; 
}

/* If you needed a helper function, write it here */
