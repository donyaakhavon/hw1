#include <string>
#include <vector>
#include <iostream>
#include <sstream>

#include "ulliststr.h"

//Use this file to test your ulliststr implementation before running the test suite

int main(int argc, char* argv[])
{
ULListStr list;
list.push_back("1");
list.push_front("2");
list.push_back("3");


std::cout << list.get(0) << " " << list.get(1) << " " << list.get(2) << std::endl;
std::cout << list.size() << std::endl;
}
