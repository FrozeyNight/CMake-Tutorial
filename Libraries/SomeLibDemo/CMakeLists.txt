cmake_minimum_required(VERSION 2.8)
project(bigbysmath)
add_library(bigbysmath adder.cpp)
set_target_properties(bigbysmath PROPERTIES PUBLIC_HEADER adder.h)
install(TARGETS bigbysmath LIBRARY DESTINATION lib
	PUBLIC_HEADER DESTINATION include
	)
