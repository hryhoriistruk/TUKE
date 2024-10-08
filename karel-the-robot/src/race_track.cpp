//
// Created by grigorii on 08.10.2024.
//
#include <karel.h>
#include <stdlib.h>

void jump_over() {
    while (front_is_blocked()) {
        turn_left();
    }
    move();
    turn_left();
    move();
}

void race_track() {
    while (!next_to_a_beeper()) {
        if (front_is_clear()) {
            move();
        } else {
            jump_over();
        }
    }
}

int main() {
    race_track();

    return 0;
}