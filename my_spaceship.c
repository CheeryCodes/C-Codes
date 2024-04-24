#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* my_spaceship(char* param_1) {
    // Initialize variables for coordinates and direction
    int x = 0;
    int y = 0;
    char* direction = "up";
    
    // Iterate through the flight path
    for (int i = 0; param_1[i] != '\0'; i++) {
        // Update coordinates and direction based on the current instruction
        switch(param_1[i]) {
            case 'R':
                if (strcmp(direction, "up") == 0) direction = "right";
                else if (strcmp(direction, "right") == 0) direction = "down";
                else if (strcmp(direction, "down") == 0) direction = "left";
                else if (strcmp(direction, "left") == 0) direction = "up";
                break;
            case 'L':
                if (strcmp(direction, "up") == 0) direction = "left";
                else if (strcmp(direction, "right") == 0) direction = "up";
                else if (strcmp(direction, "down") == 0) direction = "right";
                else if (strcmp(direction, "left") == 0) direction = "down";
                break;
            case 'A':
                if (strcmp(direction, "up") == 0) y--;
                else if (strcmp(direction, "right") == 0) x++;
                else if (strcmp(direction, "down") == 0) y++;
                else if (strcmp(direction, "left") == 0) x--;
                break;
            default:
                break;
        }
    }
    
    // Create a string for the result
    char* result = (char*)malloc(50 * sizeof(char)); // Allocate memory for the result string
    sprintf(result, "{x: %d, y: %d, direction: '%s'}", x, y, direction); // Format the result string
    
    return result;
}
