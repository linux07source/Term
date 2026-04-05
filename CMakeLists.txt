cmake_minimum_required(VERSION 3.10)
project(SwagTerm VERSION 0.1.0)

# Standard C++ moderno
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Crea la libreria (SHARED = file .so su Linux)
add_library(swagterm SHARED src/term.cpp)

# Crea l'eseguibile di prova
#add_executable(swag_demo src/main.cpp)

# Collega l'eseguibile alla libreria
target_link_libraries(swag_demo swagterm)

# Opzionale: Rendi l'eseguibile piccolo (strip) automaticamente in Release
if(CMAKE_BUILD_TYPE STREQUAL "Release")
    add_custom_command(TARGET swag_demo POST_BUILD
        COMMAND ${CMAKE_STRIP} swag_demo)
endif()

# ... parte iniziale (project, standard C++, ecc.) ...

# Crea la libreria usando i tuoi nuovi file
add_library(term SHARED src/term.cpp)

# 1. Definiamo dove vanno i file quando l'utente farà 'make install'
install(TARGETS term
    EXPORT SwagTermTargets
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

# 2. Installiamo il tuo header term.h
install(FILES src/term.h DESTINATION include)

# 3. Generiamo il file di configurazione per il find_package
install(EXPORT SwagTermTargets
    FILE SwagTermConfig.cmake
    NAMESPACE Swag::
    DESTINATION lib/cmake/SwagTerm
)
