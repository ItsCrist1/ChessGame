cmake_minimum_required(VERSION 3.10)
project(ChessGame)

# Add both core and project root to include paths
include_directories(
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/core
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

option(USE_QT_GUI "Build with Qt GUI" OFF)

set(COMMON_SOURCES
    core/board.cpp
    core/pieces/piece.cpp
)

if(USE_QT_GUI)
    find_package(Qt6 COMPONENTS Widgets REQUIRED)
    add_executable(ChessGame 
        ${COMMON_SOURCES}
        # Add GUI-specific sources here
    )
    target_link_libraries(ChessGame PRIVATE Qt6::Widgets)
    target_compile_definitions(ChessGame PRIVATE USE_QT_GUI)
else()
    add_executable(ChessGame 
        ${COMMON_SOURCES}
        terminal/main.cpp
    )
endif()
