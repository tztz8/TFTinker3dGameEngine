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
    START_EASYLOGGINGPP(argc, argv);
    LOG(INFO) << "Start of Program";

    LOG(WARNING) << "Hello There";

    LOG(INFO) << "End of Program";
    return EXIT_SUCCESS;
}
