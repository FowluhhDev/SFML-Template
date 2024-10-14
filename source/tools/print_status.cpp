#include "./print_status.hpp"
#include <stdio.h>

void print_status::info(char text[]) {
    printf("[ INFO ] - %s\n", text);
}

void print_status::warn(char text[]) {
    printf("[ WARNING ] - %s\n", text);
}

void print_status::err(char text[]) {
    printf("[ ERROR ] - %s\n", text);
}