//
// Created by grigorii on 08.10.2024.
//
#include <karel.h>

void move_between_walls() {
    while (true) {
        if (front_is_clear()) {
            move();
        } else {
            turn_left();
        }
    }
}

int main() {
    move_between_walls();

    return 0;
}