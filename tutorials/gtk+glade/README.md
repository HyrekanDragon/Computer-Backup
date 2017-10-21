# Installation
The programs contained in this folder use GTK+, gtkmm, and GLADE. Required libraries need to be installed before running them. Below are instructions to install these libraries on the specified operating systems

## Ubuntu
    sudo apt-get install libgtkmm-3.0-dev glade
    
# Compilation
Most of the contained programs contain a Makefile that allows you to run GNU make. You can run make as shown below to compile the program

    make

# Execution
Running make will compile the programs and generate an executable file. Most, if not all, contained programs will produce a file called main. You can use the code below to run the executable file called main.

    ./main

In case a program generates an exectuable file with a different file name, you can run this file by typing ./ followed by the filename in a command line.

# License
The following programs are released under the MIT license. However, they refer to the GTK+ and gtkmm libraries which are both released under LGPL. These libraries have not been packaged with this project, but they require the user to install them for the programs to work.

The GPL_licenses folder contains the GPL and LGPL licenses used by GTK+ and gtkmm.
