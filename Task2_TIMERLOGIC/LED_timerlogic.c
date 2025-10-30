#include <stdio.h>
#include <Windows.h>

unsigned long millis() {
    GetTickCount();
}

int main() {

    unsigned long previousLED = 0;  
    unsigned long LED_interval = 500; // LED tasks every 500 ms
   
    int LED_state = 0; // 0 = OFF, 1 = ON

    while(1) {
        unsigned long currentMillis = millis();

    // Task 2: LED Blink
        if (currentMillis - previousLED >= LED_interval)   // Checks if enough time (500ms) passed since the LED has Blinked
        {
            previousLED = currentMillis;
            LED_state =!LED_state;  // Toggle LED State

            if(LED_state)
                printf("LED is ON\n");
            else
                printf("LED is OFF\n");
        }
        
        Sleep(10);  // small delay to reduce CPU usage 
    }

    return 0;
}