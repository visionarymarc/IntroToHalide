# Project 1 — Halide- By: Shameer, Gurkirat, Marcus, & Jonathan

CSC 321 — Principles of Programming Languages  
Farmingdale State College  

## 📌 Project Overview
This project introduces **Halide**, a domain-specific language for high-performance image and array processing.  
Our presentation covers:
- The problem Halide solves  
- What it’s good at and not good at  
- Standard use cases and examples  
- A simple implementation demo  

## 📂 Repo Contents
- **slides/** → Project presentation (PDF or PPTX)  
- **video/** → Screen recording of the presentation  
- **code/** → (Optional) Small Halide demo program (`mini_square.cpp`)  

## ▶️ Presentation Video
[Click here to watch the video](./video/presentation.mp4)  
*(Or upload the video to YouTube/Google Drive and place the link here if the file is too large for GitHub)*  

## 👨‍💻 Demo Code
Example Halide program: `mini_square.cpp`  
```cpp
square(x) = x * x;
Buffer<int> out = square.realize({10});
