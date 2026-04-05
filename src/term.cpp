#include "term.h"
#include <iostream>

namespace term {

    void drawbox(std::string title) {
        std::cout << "##################################" << std::endl;
        std::cout << "# " << title << std::endl;
        std::cout << "##################################" << std::endl;
    }

} // Fine namespace term
