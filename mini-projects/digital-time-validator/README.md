# Digital Time Validator & Classifier

A beginner-level **C program** that validates and classifies time and provides basic work-time calculations.

The program has two modes:

1. **Time Classifier** – validates a given time and classifies it as Morning, Afternoon, Evening, or Night.
2. **Work Time Assistant** – compares the current time with working hours and provides information about work status, break timing, and remaining work time.

## Features

### Time Classification

* Validates hours and minutes.
* Classifies valid times into:

  * Morning
  * Afternoon
  * Evening
  * Night

### Work Time Assistant

* Accepts work start and end times.
* Checks whether work has started or ended.
* Determines whether the user is currently at the workplace.
* Checks break timing.
* Determines whether the user is currently on a break.
* Calculates the remaining work time before clocking out.

## Concepts Practiced

* Variables and data types
* `if-else` statements
* Nested conditional statements
* `switch-case`
* Logical operators
* Relational operators
* User input using `scanf()`
* Input validation
* Arithmetic operations
* Basic time calculations
* Program control flow

## Example Menu

```text
If you are a commuter, type: 1
If you simply need to classify your time, type: 2
```

### Time Classifier

```text
Enter your current time.

Hours: 10
Min: 30

Valid time.
Morning
```

### Work Time Assistant

The program can determine whether:

* Work has not started yet
* The user is currently working
* The user is on a break
* The break has ended
* Work time has ended
* There is remaining time before clocking out

## How to Run

Make sure you have a C compiler such as GCC installed.

Compile the program:

```bash
gcc digital-time-validator.c -o digital-time-validator
```

Run it:

```bash
./digital-time-validator
```

On Windows:

```bash
digital-time-validator.exe
```

## Current Limitations

This is a beginner learning project, so the program currently has some limitations:

* Work hours must be entered within the same day.
* Overnight shifts such as `22:00 → 06:00` are not supported.
* Break timing validation is relatively basic.
* Time calculations are handled using separate hour and minute variables rather than a dedicated time structure.

## Status

Completed as a **C programming learning project**.

This project was created while learning fundamental C programming concepts and practicing conditional logic, `switch-case`, input validation, and basic time calculations.
