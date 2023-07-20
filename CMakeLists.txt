cmake_minimum_required(VERSION 3.0.0)
project(helloworld VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_subdirectory(/home/yomacho/Documents/importer build)

add_executable(helloworld main.cpp)

# Include the importer library's header files
target_include_directories(helloworld PUBLIC /home/yomacho/Documents/importer)

# target_include_directories(helloworld PUBLIC
#                           "${PROJECT_BINARY_DIR}"
#                           "${PROJECT_SOURCE_DIR}/importer"
#                           )
                
# target_include_directories(helloworld PUBLIC importer)


# Link the importer library
target_link_libraries( helloworld
                       importer )

            
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
