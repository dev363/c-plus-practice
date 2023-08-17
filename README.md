
# C++ on Linux in VS Code

A brief description of what this project does and who it's for

## Prerequisites

To successfully complete this tutorial, you must do the following:

- Install Visual Studio Code.

- Install the C++ extension for VS Code. You can install the C/C++ extension by searching for 'c++' in the Extensions view ```(Ctrl+Shift+X)```.



## Ensure GCC is installed
First, check to see whether GCC is already installed. To verify whether it is, open a Terminal window and enter the following command:

``` gcc -v ```

if GCC isn't installed, run the following command from the terminal window to update the Ubuntu package lists. An out-of-date Linux distribution can sometimes interfere with attempts to install new packages.

``` sudo apt-get update ```

Next install the GNU compiler tools and the GDB debugger with this command:

``` sudo apt-get install build-essential gdb ```


## Write and Run C++ Code

Add hello world source code file

In the File Explorer title bar, select New File and name the file **helloworld.cpp**.

### Run helloworld.cpp
Remember, the C++ extension uses the C++ compiler you have installed on your machine to build your program. Make sure you have a C++ compiler installed before attempting to run and debug helloworld.cpp in VS Code.

- Open **helloworld.cpp** so that it is the active file.

- Press the **play button** in the top right corner of the editor.
![Logo](https://code.visualstudio.com/assets/docs/cpp/playbutton/run-play-button.png)