# CMakeList.txt: proyecto de CMake para CMakeProject2, incluya el origen y defina
# la lógica específica del proyecto aquí.
#
cmake_minimum_required (VERSION 3.8)

# Agregue un origen al ejecutable de este proyecto.
add_executable (CMakeProject2 "main.cpp" "funciones.h" "casilla.cpp" "almacen.cpp" "tipos.h" "robot.cpp" "slot.cpp")

# TODO: Agregue pruebas y destinos de instalación si es necesario.
