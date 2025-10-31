# ⚙️ Task 4 — Mini RTOS Scheduler Simulation
## 💻 Overview

In this final task, we combine all previous concepts — state machine, non-blocking timers, and multiple tasks — into a single working system that behaves like a mini Real-Time Operating System (RTOS).
This scheduler manages multiple tasks (LED blink, serial print, and sensor simulation) based on their time intervals, without using any blocking delays.

## ⚡ Features

🕐 Timer-based task scheduling using millis()

🔁 Cooperative multitasking (no blocking delay() calls)

🧩 Function pointer–based task table — like a real RTOS task list

💡 Easily scalable — just add a new task to the table

⚙️ Simulates real-time task switching in simple C

## 🧠 Core Concept

This project uses a scheduler loop that:

1. Iterates through a table of tasks

2. Checks if the time since the task last ran exceeds its interval

3. If yes → runs that task’s function and updates the timer

This mimics the behavior of a basic RTOS, where tasks run at specific intervals, sharing CPU time fairly.

## 🧩 Task Structure

Each task is defined using a structure:
<pre>
  typedef struct {
    void (*taskFunction)();       // pointer to task function
    unsigned long interval;       // task execution interval (ms)
    unsigned long lastRunTime;    // last time the task was executed
} Task;
</pre>

The tasks are listed in a task table:
<pre>
  Task tasks[] = {
    { ledTask,    500,  0 },
    { printTask,  2000, 0 },
    { sensorTask, 1000, 0 }
};
</pre>

🔧 How It Works

1. The scheduler checks all tasks continuously.

2. Each task runs only when its timer interval has passed.

3. Tasks never block each other — everything runs smoothly in a single loop.
<pre>
| Task   | Interval | Action                   |
| ------ | -------- | ------------------------ |
| LED    | 500 ms   | Toggles ON/OFF           |
| Print  | 2 sec    | Prints a message         |
| Sensor | 1 sec    | Generates a fake reading |
</pre>

## 📁 File Structure
<pre>
📂 Project_Mini_RTOS
 ┣ 📂 Task1_StateMachine
 ┣ 📂 Task2_TimerLogic
 ┣ 📂 Task3_Multitask
 ┣ 📂 Task4_Mini_Real_Time_Task_Scheduler
 ┃ ┣ 📜 RTOS_Task_Scheduler.c
 ┃ ┣ 📜 RTOS_Task_Scheduler.exe
 ┃ ┣ 📜 outputtask4.txt
 ┃ ┗ 📜 README.md
 </pre>

 ## 💾 Compilation & Run
🛠️ Compile:
<pre>
gcc RTOS_Task_Scheduler.c -o RTOS_Task_Scheduler
</pre>

## ▶️ Run:
<pre>
./RTOS_Task_Scheduler.c > outputtask4.txt
</pre>

## 📊 Sample Output
<pre>
LED is ON
Sensor reading: 47
LED is OFF
LED is ON
Hello! This message prints every 2 seconds.
Sensor reading: 82
</pre>
