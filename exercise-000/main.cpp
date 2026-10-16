#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

void changeValueByParameter(int value) {
    value = 99;
    fmt::println(" new value of x in function: {}", value);
}

void changeValueByPointer(int* ptr) {
    *ptr = 77;
    fmt::println(" Pointer points at value: {}", *ptr);
}

int main(int argc, char **argv) {

  // Funktionen deklarieren
  void changeValueByParameter(int value);
  void changeValueByPointer(int* ptr);

    
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    // Teil 1
    int x = 10;
    int* ptr = &x; //// &x liefert die Adresse von x

    fmt::println("Value of x: {} and the address of x: {}", x, fmt::ptr(&x)); 
    fmt::println("Value of *ptr : {} and the address of *ptr: {}", *ptr, fmt::ptr(&ptr)); 
    *ptr = 42;
    fmt::println("Value of x: {}", x); 

    // Teil 2: Speicher reservieren und initialisieren
    double* d =(double*)malloc(sizeof(double)); //Speicher reservieren
    *d = 3.145;
    fmt::println("Value of d: {} and adress of d: {}", *d, fmt::ptr(d));
    free(d);
    fmt::println("Value of d: {} and adress of d: {}", *d, fmt::ptr(d));
    d = new double(3.145); // Speicher reservieren UND initialisieren
    fmt::println("Value of d: {} and adress of d: {}", *d, fmt::ptr(d));
    delete d;
    fmt::println("Value of d: {} and adress of d: {}", *d, fmt::ptr(d));

    //Merke:Jeder mit `new` reservierte Speicher muss mit `delete` wieder freigegeben werden, sonst entsteht ein **Memory Leak**.

    //Teil 3: Funktionen
    changeValueByParameter(x);
    fmt::println(" after function value of x: {}", x);

    int y = 7;
    int* a = &y;
    fmt::println(" Pointer points at value before function: {}", *a);
    changeValueByPointer(a);
    fmt::println(" Pointer points at value after function: {}", *a);

 
    return 0; /* exit gracefully*/
}
