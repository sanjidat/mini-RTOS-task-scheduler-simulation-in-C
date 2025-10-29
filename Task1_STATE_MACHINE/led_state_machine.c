#include <stdio.h>
#include <stdbool.h>
#include <time.h>

typedef enum {
    LED_OFF,
    LED_ON,
    LED_Blink
} LED_state ;

LED_state current_state = LED_OFF;

void update_LED() {
    switch (current_state)
    {
    case LED_OFF:
        printf("LED is OFF\n");
        break;
    case LED_ON:
        printf("LED is ON\n");
        break;
    case LED_Blink:
        printf("LED is Blinking\n");
        break;
    default:
        break;
    }
}

int main() {
    int counter = 0;

    while (counter < 9)
    {
        if (counter == 0) current_state = LED_OFF;
        if (counter == 3) current_state = LED_ON;
        if (counter == 6) current_state = LED_Blink;

    update_LED();
        counter ++;
        
    }
    return 0;
}

