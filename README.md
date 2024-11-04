# Task_Management_system

This C++ Task Management System allows users to manage and prioritize tasks based on priority and available time. The program helps you schedule tasks within a given time limit, focusing on higher-priority tasks first. Tasks are organized so that higher-priority tasks are scheduled first, followed by shorter-duration tasks when priorities are equal.


This project provides hand-on practice of scheduling using data structures.

## Table of Contents

- [Features](#features)
- [How It Works](#how-it-works)
- [Installation](#installation)
- [Usage](#usage)
- [Example](#example)


## Features

- **Add Tasks with Priority and Duration**: Users can add tasks, specifying a name, priority (low, moderate, or high), and duration (in minutes).
- **Automatic Scheduling**: Tasks are automatically scheduled based on priority, with higher-priority tasks scheduled first.
- **Custom Time Limit**: Set a custom total time limit for all tasks.
- **Task Summary**: Display a summary of tasks, showing which tasks were scheduled, the total time used, and the remaining time.
- **Clear Output Display**: The program organizes output into a well-formatted table for easier reading.

## How It Works

1. **Task Scheduling**: The program sorts tasks by:
   - Primary: Highest priority first.
   - Secondary: Shortest duration first (if priorities are the same).
2. **Time Management**: Only tasks that fit within the remaining available time are scheduled. Remaining tasks are marked as "Not scheduled."
3. **Output Summary**: After scheduling, the program displays all tasks, including their scheduling status, time used, and remaining time.

## Installation
## For terminal Usage
1. **Clone the Repository**:
    ```bash
    git clone https://github.com/yourusername/task-management-system.git
    cd task-management-system
    ```

2. **Compile the Program**:
    Ensure you have a C++ compiler that supports C++11 or later.

    ```bash
    g++ -o task_scheduler task_scheduler.cpp
    ```

3. **Run the Program**:
    ```bash
    ./task_scheduler
    ```

## Normal IDE
1: **Copy the code**

2: **Compile and run it**

## Usage

1. **Enter Total Time**: First, input the total time available for scheduling tasks (in minutes).
2. **Enter Task Details**:
   - For each task, input:
     - Name
     - Duration (in minutes)
     - Priority (1 = Low, 2 = Moderate, 3 = High)
3. **View Schedule Summary**: The program will display a summary of the scheduled tasks, time used, and any remaining time.

### Example

```
WELCOME TO TASK MANAGEMENT SYSTEM

Enter the total time available in minutes: 120

Enter the number of tasks: 3

For task #1
Enter task name: Homework
Enter the duration of the task in minutes: 30
Enter the priority (1: low, 2: moderate, 3: highest): 3

For task #2
Enter task name: Workout
Enter the duration of the task in minutes: 40
Enter the priority (1: low, 2: moderate, 3: highest): 2

For task #3
Enter task name: Reading
Enter the duration of the task in minutes: 20
Enter the priority (1: low, 2: moderate, 3: highest): 1

Schedule summary:
Total time available: 120 Minutes
Task        Priority    Duration    Status
--------------------------------------------------
Homework       3          30        Scheduled
Workout        2          40        Scheduled
Reading        1          20        Not scheduled

Summary
Tasks Scheduled: 2 / 3
Total time used: 70 minutes
Total time remaining: 50 minutes
```
