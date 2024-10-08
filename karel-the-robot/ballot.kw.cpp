//
// Created by grigorii on 08.10.2024.
//
#include <karel.h>

void clean_ballots() {
    while (true) {
        while (no_beepers_present()) {
            pick_beeper();
        }
        if (front_is_clear()) {
            move();
        } else {
            break;
        }
    }
}

int main() {
    clean_ballots();

    return 0;
}