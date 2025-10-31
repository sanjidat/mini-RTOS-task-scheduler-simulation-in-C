# 🧠 Task 3: Multiple Independent Tasks (Non-Blocking Multitasking)

## 🎯 **Objective**
Simulate **multiple real-time tasks** running independently — like LED blinking, serial message printing, and sensor data simulation — all **without using `delay()`**.  
This demonstrates the concept of **cooperative multitasking** using `millis()` and task-based design logic.

---

## ⚙️ **Concept**
In this task, we extend the logic from Task 2 to handle **multiple time-based operations** in the same loop.  
Each task runs on its own schedule, controlled by its own timer variable — just like a mini version of an RTOS.

**Example tasks implemented:**
- 💡 **Task 1:** Blink LED every **500 ms**
- 🖨️ **Task 2:** Print message every **2 seconds**
- 🌡️ **Task 3:** Simulate sensor reading every **1 second**

Each of these tasks works independently without blocking the others.

---

## 💻 **Code Overview**

The program defines **three separate functions**, one for each task:
<pre>
void ledTask(unsigned long currentMillis, unsigned long *previousLED, int *ledState);
void printTask(unsigned long currentMillis, unsigned long *previousPrint);
void sensorTask(unsigned long currentMillis, unsigned long *previousSensor);
</pre>

And calls them from main():
<pre>
ledTask(currentMillis, &previousLED, &ledState);
printTask(currentMillis, &previousPrint);
sensorTask(currentMillis, &previousSensor);
</pre>

## 📁 File Structure
<pre>
  Project_MiniRTOS/
│
├── Task1_StateMachine/
├── Task2_NonBlockingTimer/
├── Task3_Multitasking/
│   ├── multitask.c
│   ├── multitask.exe 
│   ├── output_task3.txt
│   └── README.md
└── ...
</pre>

## 🧪 Expected Output

Sample console output:

LED is ON <br>
Sensor reading: 73 <br>
Hello! This message prints every 2 seconds. <br>
LED is OFF <br>
Sensor reading: 48 <br>
LED is ON <br>
... <br> 
