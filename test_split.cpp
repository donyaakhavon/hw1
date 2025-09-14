/*
CSCI 104: Homework 1 Problem 1

Use this file to test your split.cpp file.

Create linked lists and split them with your split() function.

You can compile this file like this:
g++ split.cpp test_split.cpp -o test_split
*/

#include "split.h"

int main(int argc, char* argv[])
{

int x = 0;
Node* axolotl = new Node(5, nullptr)
Node* iguana = new Node(4, axolotl)
Node* bird = new Node(3, iguana)
Node* rat = new Node(2, bird)
Node* cat = new Node(1, rat)
Node* dog = new Node(0, cat)


// pink is odd
// green is even
Node* pink_house = new Node(2, nullptr)
Node* green_house = new Node(1, nullptr)



// using these to compare
Node* even_list = new Node(4, nullptr)
Node* steven_list = new Node(2, even_list)
Node* evensteven_list = new Node(0, steven_list)

Node* odd_list = new Node(5, nullptr)
Node* codd_list = new Node(3, odd_list)
Node* todd_list = new Node(1, codd_list)

split(dog, pink_house, green_house);
for(i = 0; i < 3; i++) {
  cout << pink_house->value << endl;
  pink_house = pink_house->next;
}

return 0;

}