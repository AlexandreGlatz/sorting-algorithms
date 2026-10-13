cmake_minimum_required(VERSION 3.3...4.0)

project(SortingAlgorithms_app)

set(SOURCE
    ${PROJECT_SOURCE_DIR}/src/main.cpp
)
    
add_executable(${PROJECT_NAME} ${SOURCE})

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    SortingAlgorithms::library
)
