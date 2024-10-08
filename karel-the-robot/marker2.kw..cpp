//
// Created by grigorii on 08.10.2024.
//
#include <karel.h>

void mark_corners() {
    while (true) {
        if (left_is_clear() && right_is_clear() && no_beepers_present()) {
            put_beeper();
        }
        if (front_is_clear()) {
            move();
        } else {
            turn_left();
        }
        if (facing_north() && left_is_blocked() && right_is_blocked()) {
            break;
        }
    }
}

int main() {
    mark_corners();

    return 0;
}
