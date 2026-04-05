cmake_minimum_required(VERSION 3.10)
project(SwagTerm VERSION 0.1.0)

# 1. Configurazione C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 2. Creazione della Libreria (SHARED = .so su Linux, .dll su Windows)
# Usiamo i tuoi file in src/
add_library(swagterm SHARED src/term.cpp)

# 3. Istruzioni di Installazione (Cosa succede con 'sudo make install')
install(TARGETS swagterm
    EXPORT SwagTermTargets
    LIBRARY DESTINATION lib      # Dove va la .so
    ARCHIVE DESTINATION lib      # Dove va la .lib (se sarai su Windows)
    RUNTIME DESTINATION bin      # Dove va la .dll (se sarai su Windows)
    INCLUDES DESTINATION include # Percorso per gli header
)

# Installazione dell'header term.h
install(FILES src/term.h DESTINATION include)

# 4. Generazione file per find_package() 
# Questo permette ad altri progetti di fare: find_package(SwagTerm REQUIRED)
install(EXPORT SwagTermTargets
    FILE SwagTermConfig.cmake
    NAMESPACE Swag::
    DESTINATION lib/cmake/SwagTerm
)

# --- 📦 SEZIONE PACKAGING (CPack) ---
# Questo ti serve per creare il file .tar.gz o .zip da caricare su GitHub
set(CPACK_PACKAGE_NAME "SwagTerm")
set(CPACK_PACKAGE_VENDOR "Leonardo")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Libreria Terminale Swag Style")
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})

# Se sei su Windows crea uno ZIP, altrimenti un TGZ (Linux)
if(WIN32)
    set(CPACK_GENERATOR "ZIP")
else()
    set(CPACK_GENERATOR "TGZ")
endif()

include(CPack)
