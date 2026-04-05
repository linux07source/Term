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
```
```bash
# 2. Crea la cartella di build e compila
mkdir build && cd build
cmake ..
make
```
```bash
# 3. Installa i file nel sistema
sudo make install
```
```bash
# 4. Aggiorna la cache delle librerie di sistema
sudo ldconfig
```
```bash
### Esempio di Codice (`main.cpp`)
#include <iostream>
#include <term.h>

int main() {
    term::print_c(term::GREEN, "Sistema Swag Attivo!");
    return 0;
}
```

## 📥 Download & Compatibilità

| Sistema Operativo | Stato | Metodo di Installazione |
| :--- | :--- | :--- |
| **Linux** | ✅ Supportato | Compilazione da sorgente (vedi sotto) |
| **Windows** | 🏗️ In arrivo | Sarà disponibile nelle [Releases](https://github.com/linux07source/Term/releases) |
| **macOS** | 🏗️ In arrivo | Sarà disponibile nelle [Releases](https://github.com/linux07source/Term/releases) |

> **Nota:** Per le versioni Windows e Mac, troverai i pacchetti pronti all'uso e le istruzioni specifiche nella sezione delle Release di questo repository.
