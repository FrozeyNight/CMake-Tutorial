cmake_minimum_required(VERSION 3.13.4)
project(main VERSION 1.0) #here specify the version of your program

configure_file(mainConfig.h.in mainConfig.h) #this is where the version is stored so it can be called in the .cpp files

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR}) #this is how we can call the header that hold the version in .cpp files

#add and link the glfw library to the executable
add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)
