#include <fmt/chrono.h>
#include <fmt/format.h>
#include "config.h"

int globalVar = 2;
int globalVar2 = 0;
int globalVar3 = 3;
static int globalVar4 = 10;
const int globalVar5 = 11; 

void foo() { 
    fmt::println("Hello from foo!");
} 


int main(int argc, char **argv) {

    // Teil 1
   fmt::println("The value of globalVar: {} and the addrress is: {}", globalVar, fmt::ptr(&globalVar)); 
   fmt::println("The value of globalVar2: {} and the addrress is: {}", globalVar2, fmt::ptr(&globalVar2)); 
   fmt::println("The value of globalVar3: {} and the addrress is: {}", globalVar3, fmt::ptr(&globalVar3)); 
   fmt::println("The value of static globalVar4: {} and the addrress is: {}", globalVar4, fmt::ptr(&globalVar4)); 
   fmt::println("The value of const globalVar: {} and the addrress is: {}", globalVar5, fmt::ptr(&globalVar5)); 

   // Teil 2
   static int localVar = 2;
   fmt::println("The value of localVar: {} and the addrress is: {}", localVar, fmt::ptr(&localVar)); 


  // Teil 3
  int* heapVar = new int(3);
  fmt::println("The value of heapVar: {} and the addrress is: {}", *heapVar, fmt::ptr(heapVar)); 
  delete heapVar;

  //Teil 4
  fmt::println("Adresse von foo: {}", fmt::ptr(&foo));

  //Teil 5: Pointer
  int x = 1;
  int* ptr = &x;
  fmt::println("Adresse von ptr: {} und von x: {}", fmt::ptr(ptr), fmt::ptr(&x));


    return 0; 
}
