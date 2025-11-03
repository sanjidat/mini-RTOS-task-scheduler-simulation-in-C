# 🧠 mini-RTOS-task-scheduler-simulation-in-C
RTOS-lite simulation: cooperative multitasking and state machine scheduling in C.
## 💻 Overview

This repository demonstrates how to build a mini real-time task scheduler (RTOS-Lite) in C, step by step — without using any blocking delays, such as delay(), for timing control.

## 📅 Project Roadmap
<pre>
| Day          | Focus                    | Goal                                                   |
| ------------ | ------------------------ | ------------------------------------------------------ |
| 🟢 **Day 1** | State Machine Basics     | Implement a simple LED state machine                   |
| 🟡 **Day 2** | Non-blocking Timer Logic | Use `millis()` for timing without `delay()`            |
| 🟠 **Day 3** | Multitasking             | Run multiple tasks (LED, print, sensor) concurrently   |
| 🔵 **Day 4** | Mini RTOS Scheduler      | Combine everything into a cooperative RTOS-like system |
</pre>

## ⚡ Key Concepts Covered

- 🧩 State Machine Design – clean task structure and mode switching

- ⏱️ Timer-based Multitasking – manage tasks without blocking delays

- 🧵 Task Scheduling – running multiple tasks using function pointers

- 🧠 RTOS Fundamentals – lightweight scheduler logic and task tables

## 📁 Repository Structure
<pre>
  📂 Project_Mini_RTOS
 ┣ 📂 Task1_StateMachine
 ┃ ┣ 📜 led_state_machine.c
 ┃ ┣ 📜 led_state_machine.exe
 ┃ ┣ 📜 output_task1.txt
 ┃ ┗ 📜 README.md
 ┣ 📂 Task2_TimerLogic
 ┃ ┣ 📜 LED_timerlogic.c
 ┃ ┣ 📜 LED_timerlogic.exe
 ┃ ┣ 📜 output_task2.txt
 ┃ ┗ 📜 README.md
 ┣ 📂 Task3_Multitask
 ┃ ┣ 📜 Multitask.c
 ┃ ┣ 📜 Multitask.exe
 ┃ ┣ 📜 output_task3.txt
 ┃ ┗ 📜 README.md
 ┣ 📂 Task4_MiniScheduler
 ┃ ┣ 📜 RTOS_Taask_Scheduler.c
 ┃ ┣ 📜 RTOS_Taask_Scheduler.exe
 ┃ ┣ 📜 output_task4.txt
 ┃ ┗ 📜 README.md
 ┗ 📜 README.md  ← (this file)
</pre>

## 🧩 Progress Summary
<pre>
| Task          | Focus             | Description                                                      |
| ------------- | ----------------- | ---------------------------------------------------------------- |
| 🟩 **Task 1** | LED State Machine | Implemented basic ON/OFF/BLINK behavior using `switch-case`.     |
| 🟨 **Task 2** | Timer Logic       | Replaced blocking delays with non-blocking `millis()` function.  |
| 🟧 **Task 3** | Multitasking      | Added multiple independent tasks (LED, print, sensor).           |
| 🟦 **Task 4** | Mini Scheduler    | Created RTOS-like cooperative task scheduler using a task table. |

</pre>

## 🧠 Core Principle

Instead of running one task at a time (blocking others), each task:

- Checks if its time interval has passed

- Runs quickly

- Returns control to the scheduler

- This creates an illusion of parallel execution — a simple form of cooperative multitasking.

## 🛠️ Tools Used

- 🧮 Language: C

- 💻 Compiler: GCC (MinGW for Windows 10)

- ⚙️ Environment: VS Code / Command Prompt
## 🚀 How to Run
1. Clone the repository
   <pre>
     git clone https://github.com/<your-username>/Project_Mini_RTOS.git
     cd Project_Mini_RTOS/Task4_MiniScheduler
   </pre>
2. Compile using GCC
   <pre>
  gcc mini_scheduler.c -o mini_scheduler
  </pre>
3. Run the program
<pre>
  ./mini_scheduler > output_task4.txt
</pre>

## 🧠 What You Learned

- ✅ State Machines
- ✅ Timer Logic
- ✅ Multitasking
- ✅ Cooperative Scheduling
- ✅ Function Pointers
- ✅ Modular C Design

## ✨ Future Improvements

- Add task priority handling

- Implement pause/resume for tasks

- Use interrupt-based timers

- Add task creation and deletion at runtime

## 👩‍💻 Author

Sanjida Orin Tawhid

📘 Mini RTOS Scheduler in C – Learning Project
