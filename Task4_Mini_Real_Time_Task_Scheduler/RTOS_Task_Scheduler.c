#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

unsigned long millis() {
    return GetTickCount();
}

typedef struct {
    void (*taskfunction)();       // Pointer to the function
    unsigned long interval;       // how often to run
    unsigned long last_run_time;  // When Last Executed
} Task;


void LEDtask() {
    static int LEDstate = 0;
    LEDstate = !LEDstate;
    printf("LED is %s\n", LEDstate? "ON":"OFF");
}

void Printtask() {
    printf("Hello! This Message prints every 2 seconds.\n");
}

void Sensortask() {
    int sensorValue = rand() % 100;
    printf("Sensor Reading is %d\n", sensorValue);
}

Task tasks[] = {
    {LEDtask, 500, 0},
    {Printtask, 2000, 0},
    {Sensortask, 1000, 0}
};

int main() {
    int num_of_Tasks = sizeof(tasks) / sizeof(Task);

    while(1) {
        unsigned long currentmilis = millis();

        for (int i=0; i < num_of_Tasks; i++) {
            if (currentmilis - tasks[i].last_run_time >= tasks[i].interval) {
                tasks[i].last_run_time =currentmilis;
                tasks[i].taskfunction();
            }
        }
    Sleep(10);
    }
return 0;
}
