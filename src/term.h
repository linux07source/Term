#ifndef term_h
#define term_h

#include <string>
#include <iostream>

namespace term {
    enum Color { RED, GREEN, YELLOW, BLUE, RESET };

    // Funzione inline per i codici colore
    inline std::string getColorCode(Color color) {
        switch (color) {
            case RED:    return "\033[31m";
            case GREEN:  return "\033[32m";
            case YELLOW: return "\033[33m";
            case BLUE:   return "\033[34m";
            default:     return "\033[0m";
        }
    }

    // Template per stampa generica (senza colore)
    template <typename... Args>
    void print(Args... args) {
        (std::cout << ... << args) << std::endl;
    }

    // Template per stampa colorata (Colore per primo)
    template <typename... Args>
    void print_c(Color color, Args... args) {
        std::cout << getColorCode(color);
        (std::cout << ... << args);
        std::cout << getColorCode(RESET) << std::endl;
    }

    // Funzione normale (dichiarata qui, definita nel .cpp)
    void drawbox(std::string title);
}

#endif
