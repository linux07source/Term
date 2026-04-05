#include "term.h"
#include <iostream>

int main() {
  term::drawbox("SWAG TERM ONLINE");
  term::print("Caricamento moduli...", term::YELLOW);
  term::print("Sistema pronto!", term::GREEN);
  return 0;
}