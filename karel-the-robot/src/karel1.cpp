//
// Created by grigorii on 08.10.2024.
//
#include <karel.h>

void turn_right() {
    turn_left();
    turn_left();
    turn_left();
}

void climb_stairs_and_pick_beeper() {
    while (front_is_clear()) {
        move();
        if (beepers_present()) {
            pick_beeper();
        }
    }
}

void climb_stairs_and_drop_beeper() {
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
    climb_stairs_and_pick_beeper();
    turn_left();
    climb_stairs_and_pick_beeper();
    turn_left();
    climb_stairs_and_pick_beeper();
    turn_left();
    climb_stairs_and_pick_beeper();
    climb_stairs_and_drop_beeper();

    return 0;
}