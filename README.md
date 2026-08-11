# ❤️ Pulsing Heart Animation in C++

> A C++ graphics program using the **BGI (Borland Graphics Interface)** library that displays a pulsing red heart animation with a smooth grow/shrink effect.

---

## 📋 Overview

This program demonstrates **basic animation and graphics primitives** using the BGI library. A red heart is drawn in the center of the screen and pulses continuously by changing its size.

**Key Concepts:**
- **Heart Shape:** Created using two ellipses, a rectangle, and a triangle.
- **Animation Loop:** Continuously updates the heart size and redraws the scene.
- **Pulse Effect:** The heart grows and shrinks smoothly in a loop.
- **Graphics Primitives:** `fillellipse`, `bar`, `fillpoly`, `setcolor`, `setfillstyle`.

---

## ✨ Features

- ✅ Red heart with a realistic shape
- ✅ Smooth pulsing animation (grow and shrink)
- ✅ Centered on the screen
- ✅ Press any key to exit the animation
- ✅ Clean and well-commented implementation
- ✅ Beginner-friendly with proper comments

---

## ⏱️ Complexity Analysis

| Measure | Value |
| :---: | :--- |
| **Time Complexity** | O(frames) – Constant time per frame. |
| **Space Complexity** | O(1) – No extra memory used. |

---

## 💻 Sample Output

- A red heart in the center of the screen.
- The heart pulses by growing and shrinking smoothly.
- The animation continues until a key is pressed.

---

## 🧮 Program Logic & Execution Flow

### 1. **Heart Construction**
The heart is built using three parts:
- **Two Ellipses:** Left and right lobes of the heart.
- **Rectangle:** Connects the two ellipses at the top.
- **Triangle:** The pointed bottom of the heart.

### 2. **`main()`**
- Sets up the graphics window using `initgraph()`.
- Initializes `size = 50` and `grow = 1`.
- Runs while no key is pressed (`!kbhit()`):
  - Clears the screen using `cleardevice()`.
  - Calculates the center: `cx = getmaxx() / 2`, `cy = getmaxy() / 2`.
  - Draws the heart using:
    - Two ellipses at `(cx - size/2, cy - size/2)` and `(cx + size/2, cy - size/2)`.
    - A rectangle from `cx - size` to `cx + size`.
    - A triangle with a point at `(cx, cy + size * 2)`.
  - Updates the size: `size += grow`.
  - If `size > 70` or `size < 50`, reverses `grow = -grow`.
  - Adds a delay (`delay(80)`) to control frame rate.

### 3. **Exit**
- Closes the graphics window using `closegraph()`.

---

## 🛠️ How to Compile and Run (Windows Only)

### 🪟 For Windows Users (Using Turbo C++ / WinBGIm)

#### Option 1: Using Turbo C++ (Old School)
1. Open Turbo C++.
2. Create a new file and paste the code.
3. Go to **Options → Linker → Libraries** and enable the Graphics library.
4. Compile and run (Ctrl+F9).

#### Option 2: Using WinBGIm (Modern Windows)
1. Download WinBGIm from: http://winbgim.codecutter.org/
2. Install and set up the library in your compiler.
3. Compile with:
   ```bash
   g++ -std=c++11 pulsing_heart.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
Run: pulsing_heart.exe

📂 Project Structure

cpp-pulsing-heart-animation/
│
├── pulsing_heart.cpp   # Main source code file
└── README.md           # Project documentation (this file)
🔍 Real-World Applications
Educational Projects: Teaching graphics programming and animation.

Game Development: Basic sprite animation and movement.

UI/UX Prototyping: Demonstrating animated visual effects.

Screen Savers: Simple heart-themed screensaver.

Valentine's Day Projects: Creative coding for special occasions.

🧠 Key Learnings
Shape Composition: Combining primitive shapes to create a complex design.

Animation Loop: The game loop pattern (update → render → delay).

Pulse Effect: Smooth size changes using a growth variable.

Graphics Primitives: fillellipse, bar, fillpoly.

Frame Control: delay() determines the animation speed.

🔧 Potential Enhancements
Color Variation: Change colors with time (e.g., red to pink).

Rotation: Add rotation to the heart.

Background: Add a starry or gradient background.

Multiple Hearts: Display multiple hearts with different sizes.

User Control: Allow the user to change speed using arrow keys.

Cross-Platform: Use SDL, SFML, or OpenGL for portability.

Sound Effects: Add a beating sound using Beep().

⚠️ Important Notes
This program is Windows-only due to the BGI library dependency.

For Turbo C++ users: You may need to adjust the graphics driver and mode.

For modern compilers: WinBGIm is recommended.

The graphics functions may not work directly on Linux/macOS.

👩‍💻 Author
Iqra Maqsood Mughal
C++ Developer | Programming Enthusiast

📅 Date
August 11, 2026

📄 License
This project is open-source and intended for educational purposes.
