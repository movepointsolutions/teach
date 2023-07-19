cmake_minimum_required (VERSION 3.12)
project(teach)

add_executable(test
	test.c++
)

set_property(TARGET test PROPERTY CXX_STANDARD 20)
