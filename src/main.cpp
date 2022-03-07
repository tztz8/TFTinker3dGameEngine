#include <iostream>
#include "easylogging++.h"

/**
 * set up Logger
 */
INITIALIZE_EASYLOGGINGPP;

/**
 * Start of the program
 * @param argc Number of arguments
 * @param argv Argument array (char* as strings)
 * @return 0 if run Success
 */
int main(int argc, char* argv[]) {
    // Setup
    // - Setup Logger
    START_EASYLOGGINGPP(argc, argv);
    LOG(INFO) << "Start of Program (Logger is setup)";
    // - Setup OpenGL and GLFW
    // - Setup Sound
    // - Setup Network
    // - Setup Game Engine Tools
    // - Setup Game logic

    LOG(INFO) << "Start Main Loop";
    // Start Loop

    LOG(INFO) << "Shutting Down Program";
    // Shutdown (Ex close open files)

    LOG(INFO) << "End of Program";
    return EXIT_SUCCESS;
}
