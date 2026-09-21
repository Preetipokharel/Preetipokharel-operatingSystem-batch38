# Operating Systems Lab 3

## Student

Preeti Pokharel

## Lab Title

Investigating Process Lifecycles and OS Interaction

## Description

This lab demonstrates how C programs interact with the Linux operating system. It covers process lifecycles, PID and PPID values, exit codes, standard input and output, and conditional execution.

## Source Files

- `task1_alive.c` - Demonstrates a long-running process.
- `task2_identity.c` - Displays the PID and PPID.
- `task3_exit.c` - Demonstrates success and failure exit codes.
- `task4_input.c` - Demonstrates standard input and output.
- `task5_control.c` - Demonstrates conditional execution and termination.

## Compile and Run

```bash
gcc task1_alive.c -o task1
gcc task2_identity.c -o task2
gcc task3_exit.c -o task3
gcc task4_input.c -o task4
gcc task5_control.c -o task5
