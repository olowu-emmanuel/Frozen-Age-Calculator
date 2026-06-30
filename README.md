# Frozen Age Calculator

This is a simple C++ command-line program I wrote to practice control structures like `if` statements, `while` loops, and `switch` cases. 

Basically, it acts as a gatekeeper. It asks for your name and age first, and if you are under 18, it locks you out. If you are old enough, it drops you into a loop with a menu where you can do a couple of basic calculations.

## What it does
* Age Gate: Checks if you are 18 or older before letting you in.
* Age Calculator: You type in your birth year, and it tells you your current age (calculated for 2026).
* Age Difference: Takes two birth years and tells you the exact age gap between the two people.
* Continuous Menu: Keeps running until you specifically choose the "Exit" option.

# How to run it locally
If you want to try it out on your own machine, just clone the repo and compile the `laugh.cpp` file.

Using g++ in your terminal:
```bash
g++ laugh.cpp -o calculator
./calculator
