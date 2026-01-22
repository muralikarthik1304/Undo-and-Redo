# Undo-and-Redo Stack for Basic Shapes (C Graphics)

A C graphics-based application that demonstrates **Undo and Redo functionality**
for basic shapes using the **Stack data structure**.

---

##  Project Description
This project implements an **Undo and Redo mechanism** for drawing basic shapes
such as **line, rectangle, and circle** using **C graphics**.
Each drawing operation is stored in a stack, allowing the user to undo or redo
actions efficiently.

The project helps understand **stack operations**, **graphics programming**, and in C.

---

##  Features
- Draw basic shapes (Line, Rectangle, Circle)
- Undo last drawing operation
- Redo previously undone operation
- Stack-based implementation
- Simple graphics interface

---

##  Technologies Used
- **Language:** C  
- **Graphics Library:** graphics.h (BGI)  
- **Compiler:** Dev C++  
- **Platform:**  Windows (Turbo C / WinBGIm)

---

---

##  Data Structures Used
- **Stack**
  - Undo Stack
  - Redo Stack
- **Structure**
  - To store shape type and coordinates

---

##  How It Works
1. User draws a shape
2. Shape data is pushed onto the **Undo Stack**
3. Redo Stack is cleared
4. On **Undo**:
   - Pop from Undo Stack
   - Push to Redo Stack
   - Redraw remaining shapes
5. On **Redo**:
   - Pop from Redo Stack
   - Push back to Undo Stack
   - Redraw shapes

---

##  How to Compile
For Windows (BGI):
Dev-C++ does not support graphics.h by default.  
Follow these steps to install WinBGIm:
1.Download the **WinBGIm graphics library for Dev-C++**.
2.Copy the following files:
graphics.h
winbgim.h
3.paste it into C:\Program Files (x86)\Dev-Cpp\MinGW64\include
4.Copy Library File - libbgi.a
5.paste it into C:\Program Files (x86)\Dev-Cpp\MinGW64\lib
6.linker setting :
Go to Tools → Compiler Options
Select General
Add: -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32




## 📂 Project Structure
