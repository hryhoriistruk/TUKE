//
// Created by grigorii on 08.10.2024.
//
#include <karel.h>

void turn_right() {
    turn_left();
    turn_left();
    turn_left();
}

void climb_to_highest_step() {
    while (front_is_clear()) {
        move();
        if (beepers_present()) {
            pick_beeper();
        }
    }
    while (!facing_north()) {
        turn_left();
    }
    while (front_is_clear()) {
        move();
    }
    while (!facing_south()) {
        turn_left();
    }
    while (front_is_clear()) {
        move();
        if (beepers_present()) {
            pick_beeper();
        }
    }
    while (beepers_in_bag()) {
        put_beeper();
    }
}

int main() {
    climb_to_highest_step();

    return 0;
}