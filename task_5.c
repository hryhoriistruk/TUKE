//
// Created by User on 08.10.2024.
//
#include <superkarel.h>

void turn_on() {
    while (true) {
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
        if (beepers_in_bag() > 0) {
            put_beeper();
        }
        if (front_is_clear() == false && right_is_clear() == false) {
            break;
        }
    }
    turn_around();
    while (front_is_clear()) {
        move();
    }
    turn_around();
    while (front_is_clear()) {
        move();
    }
    turn_around();
}