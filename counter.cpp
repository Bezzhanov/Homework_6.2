#include <iostream>
#include "counter.h"

//class Counter {
//public:
Counter::Counter(int x) {this->count = x;};
Counter::Counter() {count = 1;};
void Counter::print_counter() {std::cout << this->count << std::endl;}
void Counter::add() {this->count++;}
void Counter::subtraction() {this->count--;}

//protected:
//	int count;

//};
