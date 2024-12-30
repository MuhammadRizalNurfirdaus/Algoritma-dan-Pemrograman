#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#define MAXSTACK 200

struct STACK {
    int top;
    char data[MAXSTACK];
};

STACK stackbaru;

void inisialisasi() {
    stackbaru.top = -1;
}

bool isfull() {
    return stackbaru.top == MAXSTACK - 1;
}

bool isempty() {
    return stackbaru.top == -1;
}

void push(char dta) {
    if (!isfull()) {
        stackbaru.top++;
        stackbaru.data[stackbaru.top] = dta;
    } else {
        std::cout << "Maaf Stack penuh\n";
    }
}

void pop() {
    while (!isempty()) {
        std::cout << stackbaru.data[stackbaru.top];
        stackbaru.top--;
    }
}

void print() {
    for (int i = 0; i <= stackbaru.top; i++) {
        std::cout << stackbaru.data[i];
    }
}

int main() {
    char kata[200];
    std::cout << "--- PROGRAM PEMBALIK KALIMAT --- \n\n";
    std::cout << "Masukkan kalimat yang Anda inginkan: \n";
    std::cin.getline(kata, 200);

    inisialisasi();
    for (int i = 0; kata[i]; i++) {
        push(kata[i]);
    }
    std::cout << "------------------------------------ \n\n";
    print();
    std::cout << " menjadi ";
    pop();
    std::cout << "\n";
    
    std::cin.get(); 

    return 0;
}