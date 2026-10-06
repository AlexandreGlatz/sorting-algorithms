cmake_minimum_required(VERSION 3.3)
project(SortingAlgorithms)

file(COPY ${PROJECT_SOURCE_DIR}/res/ 
     DESTINATION ${PROJECT_BINARY_DIR}/res/
)  

add_subdirectory(app)
add_subdirectory(lib)
