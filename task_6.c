//
// Created by User on 08.10.2024.
//
#include <superkarel.h>

void turn_on() {
    while (true) {
        if (beepers_present()) {
            pick_beeper();
        }
        if (beepers_present() == 5) {
            break;
        }
        if (front_is_clear()) {
            move();
        } else {
            if (beepers_present() == 1) {
                turn_north();
            } else if (beepers_present() == 2) {
                turn_west();
            } else if (beepers_present() == 3) {
                turn_south();
            } else if (beepers_present() == 4) {
                turn_east();
            }
        }
    }
}