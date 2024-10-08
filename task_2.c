//
// Created by User on 08.10.2024.
//
#include <superkarel.h>

void turn_on() {
    while (true) {
        if (beepers_present()) {
            pick_beeper();
            turn_around();
            while (front_is_clear()) {
                move();
            }
            turn_around();
            break;
        }
        if (front_is_clear()) {
            move();
        } else {
            turn_left();
            if (right_is_clear()) {
                turn_right();
                move();
            } else {
                turn_right();
                turn_right();
                move();
            }
        }
    }
}