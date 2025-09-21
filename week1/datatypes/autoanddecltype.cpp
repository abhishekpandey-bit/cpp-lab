#include<iostream>
int main(){
    auto i = 5;           // int
auto d = 3.14;        // double
auto str = "hello";   // const char*
auto it = v.begin();  // deduces iterator type
  int x = 0;
decltype(x) y = 10;   // y is int
decltype((x)) z = y;  // z is int& (lvalue reference)
 return 0;
}