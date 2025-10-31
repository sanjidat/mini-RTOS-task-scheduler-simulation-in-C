#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

// Function to get time in milliseconds
unsigned long millis() {
    return GetTickCount();
}

// Function for Task 1: LED Blink
void LEDtask(unsigned long currentmillis, unsigned long *previousLED, int *LEDstate)  {
    unsigned long LEDinterval = 500; // 500ms

    if (currentmillis - *previousLED >= LEDinterval) {
        *previousLED = currentmillis;
        *LEDstate = !(*LEDstate);
        printf("LED is %s\n", (*LEDstate)? "ON" : "OFF");
    }
}

//Function for Task 2: Print Message 
void PrintTask(unsigned long currentmillis, unsigned long *previousPrint) {
    unsigned long Printinterval = 2000;  //"2 Seconds"
    if (currentmillis - *previousPrint >= Printinterval) {
        *previousPrint = currentmillis;
        printf("Hello! This message prints every 2 seconds.\n");
    }
}

//Function for Task 3: Simulated Sensor Reading 
void Sensortask(unsigned long currentmillis, unsigned long *previousSensor) {
    unsigned long Sensorinterval = 1000;  //1 second
    if(currentmillis - *previousSensor >= Sensorinterval)  {
        *previousSensor = currentmillis;
        int SensorValue = rand() % 100;
        printf("Sensor Reading: %d\n", SensorValue);
    }
}

int main() {
    unsigned long previousLED=0, previousPrint = 0, previousSensor = 0;
    int LEDstate = 0;

    printf("Task3: Multiple Independent Tasks\n");
    while (1) {
        unsigned long currentmillis = millis();

        //Call each Tasks
        LEDtask(currentmillis, &previousLED, &LEDstate);
        PrintTask(currentmillis, &previousPrint);
        Sensortask(currentmillis, &previousSensor);

        Sleep(10);
    } 
    return 0;
}