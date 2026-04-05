# 🚀 SwagTerm (v1.0.0)
**La libreria C++ definitiva per un terminale "Swag"**

SwagTerm è una libreria leggera e moderna progettata per semplificare la gestione dell'output nel terminale. Dimentica le lunghe concatenazioni di stringhe e i codici ANSI complessi: con SwagTerm stampi variabili di ogni tipo (int, float, string) con colori vivaci in una sola riga di codice.

---

## ✨ Caratteristiche
* **Variadic Printing**: Passa infiniti argomenti a `print_c` separati da virgola.
* **Type Safe**: Grazie ai C++17 Templates, non devi convertire i numeri in stringhe.
* **Zero Boilerplate**: Includi l'header e sei pronto a partire.
* **CMake Ready**: Supporto nativo per `find_package`.

---

## 🛠️ Installazione (Linux / Ubuntu / Debian / Derivate )
Attualmente SwagTerm è ottimizzato per sistemi **Linux**.

```bash
# Clona il repository
git clone [https://github.com/TUO_UTENTE/Term.git](https://github.com/TUO_UTENTE/Term.git)
cd Term

# Compila e installa nel sistema
mkdir build && cd build
cmake ..
make
sudo make install
sudo ldconfig
