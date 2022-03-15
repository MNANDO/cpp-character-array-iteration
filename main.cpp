#include <iostream>

static char arr[12] = "Hello World";

// checks if the current character is a null character \0
bool has_next(const char* ptr) { return *ptr != '\n' && *ptr != '\0'; }

// gets the next element of the character string
char next(char** ptr) {
    // Move the pointer forward 1 
    // Set the next character to the value of the pointer
    char next = **ptr;
    *ptr += 1;
    return next;
} 
    
// return the current character
char peek(const char* ptr) {
    return *ptr;
}

int main() {
    // arr is a pointer to the address of the first character in arr  
    char* ptr = arr; 
    
    // print every element in arr
    while (has_next(ptr)) {
        std::cout << next(&ptr) << std::endl; 
    }
}

