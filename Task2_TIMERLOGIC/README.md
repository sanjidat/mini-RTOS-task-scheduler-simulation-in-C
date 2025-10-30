### 💻 **Task 2 — Non-Blocking LED Blink**

### 🔹 **Overview**  
This task demonstrates a **non-blocking LED blink** in C using **millisecond timers** (`millis()` / Windows `GetTickCount()`).  
Instead of using `delay()`, the LED toggles every 500 ms without blocking the main program loop, simulating a **real-time embedded task**.

### ⚡ **Features**  
- LED toggles ON/OFF every 500 milliseconds.  
- Non-blocking logic using `previousLED` and `millis()`.  
- CPU-friendly loop with `Sleep(10)` to reduce usage.  

### 🛠️ **How It Works**  
1. previousLED` keeps track of the last time the LED changed state.  
2. The main loop continuously checks:

if (currentMillis - previousLED >= ledInterval) { ... }

3. The loop never stops, allowing future multitasking integration.


### 📁 **File Structure**
Task2_TimerLogic/
│
├─ LED_timerlogic.c     # C program for non-blocking LED blink
├─ LED_timerlogic.exe
└─ README.md

### 💾 **Compilation Instructions (Windows)**

1. Open terminal in the project folder.

2. Compile the program:
  <pre>
  gcc LED_timerlogic.c -o LED_timerlogic.exe
  </pre>

3. Run the program:
  <pre>
  .\LED_timerlogic.exe
  </pre>
    
### 📊 **Sample Output**
Day 2: Non-blocking LED Blink
LED is ON <br>
LED is OFF <br>
LED is ON <br>
LED is OFF <br>
...        <br>
