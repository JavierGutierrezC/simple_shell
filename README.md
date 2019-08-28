![alt text](https://cdn-az.allevents.in/events3/banners/f9a5308926bc6c95eca670e83c0ee0efb7e4fe5431f683e61b8a091b0f57dee9-rimg-w1200-h599-gmir.jpg?v=1563602033)

# Simple shell project
> Create a shell user interface

## shell
* This project is about making a custom prototype of the shell

## Description in a nutshell
* The shell is an interactive user interface with an operating system. In this case, it´s a Command-Line Interface (CLI). It takes commands from the user and executes them.

## Description in deep
* A command-line interface (CLI) is an operating system shell that uses alphanumeric characters typed on a keyboard to provide instructions and data to the operating system, interactively. For example, many command-line shells has the ability to save sequences of commands for re-use. A data file can contain sequences of commands which the CLI can be made to follow as if typed in by a user. Special features in the CLI may apply when it is carrying out these stored instructions. Such batch files (script files) can be used repeatedly to automate routine operations such as initializing a set of programs when a system is restarted. Batch mode use of shells usually involves structures, conditionals, variables, and other elements of programming languages; some have the bare essentials needed for such a purpose, others are very sophisticated programming languages in and of themselves. Conversely, some programming languages can be used interactively from an operating system shell or in a purpose-built program.

1. The shell breaks the input into tokens: words and operators; see Token Recognition.

2. The shell parses the input into simple commands and compound commands.

3. The shell performs various expansions (separately) on different parts of each command, resulting in a list of pathnames and fields to be treated as a command and arguments.

4. The shell executes a function, built-in, executable file, or scripts

5. The shell optionally waits for the command to complete and collects the exit status.

Our operational commands
```SHELL
ls - list directory contents
pwd - print name of current/working directory