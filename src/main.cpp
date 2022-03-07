#include <iostream>
#include "easylogging++.h"

INITIALIZE_EASYLOGGINGPP

int main(int argc, char* argv[]) {
    START_EASYLOGGINGPP(argc, argv);
    LOG(INFO) << "Start of Program";

    LOG(WARNING) << "Hello There";

    LOG(INFO) << "End of Program";
    return EXIT_SUCCESS;
}
