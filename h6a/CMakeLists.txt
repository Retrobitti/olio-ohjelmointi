cmake_minimum_required(VERSION 3.16)

project(h6a LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON) #Tätä ei ollut tehtävänannon ohjeissa, mutta sovellus ei toimi ilman tätä


#Minulla on asennettuna Qt5, joten käytän sitä tässä harjoituksessa

find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(h6a main.cpp
    myclass.h myclass.cpp)

target_link_libraries(h6a
    Qt5::Core
)

include(GNUInstallDirs)
install(TARGETS h6a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
