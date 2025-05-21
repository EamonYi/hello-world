# hello-world
This project is a simple "Hello World" GUI application.

It uses GTK+ (version 3) to create a graphical window that displays the text "helloworld".

## Dependencies
To compile and run this application, you will need the GTK+ 3 development libraries.

### Installing GTK+ 3 on Debian/Ubuntu
You can install the necessary libraries on a Debian-based Linux system (like Ubuntu) using the following command:
```bash
sudo apt-get update && sudo apt-get install -y libgtk-3-dev pkg-config
```

## Compilation
To compile the `hello_world.c` program, use the following command:
```bash
gcc hello_world.c -o hello_world $(pkg-config --cflags --libs gtk+-3.0)
```
This command uses `gcc` (the GNU Compiler Collection) and `pkg-config` to automatically include the necessary compiler flags and libraries for GTK+ 3.

## Running the Application
After successful compilation, an executable file named `hello_world` will be created. To run the application, execute the following command in your terminal:
```bash
./hello_world
```
This will open a small GUI window with the "helloworld" message.
