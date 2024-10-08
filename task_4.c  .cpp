//
// Created by User on 08.10.2024.
//
#include <superkarel.h>

void turn_on() {
    while (true) {
        if (beepers_in_bag() > 0) {
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
        } else {
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
            if (beepers_present()) {
                pick_beeper();
            }
        }
        if (beepers_in_bag() == 0 && front_is_clear() == false) {
            break;
        }
    }
    turn_around();
    while (front_is_clear()) {
        move();
    }
    turn_around();
}