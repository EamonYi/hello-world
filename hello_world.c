/*
 * GTK+ Hello World Example
 *
 * This program creates a simple GTK+ window displaying "helloworld".
 *
 * To compile this program, you'll need the GTK+ development libraries.
 * On a Debian-based Linux system (like Ubuntu), you can install them using:
 *   sudo apt-get update
 *   sudo apt-get install libgtk-3-dev pkg-config
 *
 * Then, compile the program using:
 *   gcc hello_world.c -o hello_world $(pkg-config --cflags --libs gtk+-3.0)
 *
 * Run the compiled program:
 *   ./hello_world
 */

#include <gtk/gtk.h>

// Callback function to terminate GTK+ main loop when the window is closed
static void on_destroy(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *label;

    // 1. Initialize the GTK+ library
    gtk_init(&argc, &argv);

    // 2. Create a top-level window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    // 3. Set the window title
    gtk_window_set_title(GTK_WINDOW(window), "Hello World Program");

    // 4. Connect the "destroy" signal to a callback function
    // This ensures the program exits gracefully when the window is closed.
    g_signal_connect(window, "destroy", G_CALLBACK(on_destroy), NULL);

    // Set a default window size (optional, but good for usability)
    gtk_window_set_default_size(GTK_WINDOW(window), 200, 100);

    // Set a border width for the window contents (optional, for aesthetics)
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);

    // 5. Create a label with the text "helloworld"
    label = gtk_label_new("helloworld");

    // 6. Add the label to the window
    gtk_container_add(GTK_CONTAINER(window), label);

    // 7. Show all window elements
    // The label will not be visible until its parent window is shown.
    gtk_widget_show_all(window);

    // 8. Start the GTK+ main event loop
    // GTK+ will now wait for events (like button clicks, window close)
    // and process them until gtk_main_quit() is called.
    gtk_main();

    return 0;
}
