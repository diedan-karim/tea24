#include <fmt/chrono.h>
#include <fmt/format.h>
#include "config.h"

int globalVar = 1;

int main(int argc, char **argv) {

   fmt::println("The value of globalVar: {} and the addrress is: {}", globalVar, fmt::ptr(&globalVar)); 

  

    return 0; 
}
