cmake_minimum_required(VERSION 3.3...4.0)
project(SortingAlgorithms_library)

file(GLOB SOURCES "${PROJECT_SOURCE_DIR}/src/*.cpp")

add_library(${PROJECT_NAME} STATIC
    ${SOURCES}
)

add_library(SortingAlgorithms::library ALIAS SortingAlgorithms_library)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${PROJECT_SOURCE_DIR}/include/
)
