//
// Created by grigorii on 08.10.2024.
//
#include <karel.h>

void training_program() {
    while (true) {
        while (left_is_blocked()) {
            move();
        }
        turn_left();
    }
}

int main() {
    training_program();

    return 0;
}