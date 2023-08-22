cmake_minimum_required(VERSION 3.0.0)
project(helloworld VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()


#HIER WAS je
if (NOT "$ENV{Importer_DIR}" STREQUAL "")
   message ("inside the if statement")
   set(ENV{Importer_DIR} /home/yomacho/Documents/importer)
endif()

message ("qweee")
message ($ENV{Importer_DIR})
message("Importer_DIR = ${Importer_DIR}")

add_subdirectory($ENV{Importer_DIR} build)


#add_subdirectory(/home/yomacho/Documents/importer build)

#add_executable(helloworld main.cpp)
add_executable(helloworld helloworld.cpp)




# Include the importer library's header files
target_include_directories(helloworld PUBLIC /home/yomacho/Documents/importer)

#target_include_directories(usb_gui PUBLIC ${IMPORTER_DIR})

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
