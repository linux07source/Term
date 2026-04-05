# 🚀 Term (v1.0.0)
**La libreria C++ definitiva per un terminale "Swag"**

Term è una libreria leggera e moderna progettata per semplificare la gestione dell'output nel terminale Linux. Grazie all'uso dei **C++17 Variadic Templates**, permette di stampare stringhe, numeri e variabili di ogni tipo in un'unica riga di codice, aggiungendo colori vivaci senza dover impazzire con i codici ANSI manuali.

---

## 🛠️ Installazione (Linux)

Term è progettata per essere installata nel sistema, rendendola disponibile per ogni tuo progetto futuro come se fosse una libreria standard.

```bash
# 1. Clona il progetto 
git clone https://github.com/linux07source/Term.git
cd SwagTerm

# 2. Crea la cartella di build e compila
mkdir build && cd build
cmake ..
make

# 3. Installa i file nel sistema
sudo make install

# 4. Aggiorna la cache delle librerie di sistema
sudo ldconfig

### Esempio di Codice (`main.cpp`)
#include <iostream>
#include <term.h>
```

Ci saranno anche versioni per windows e macos in futuro!!

int main() {
    term::print_c(term::GREEN, "Sistema Swag Attivo!");
    return 0;
}
