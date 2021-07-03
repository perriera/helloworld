cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

function(do_cmake_good first_arg second third forth)
    message(STATUS "You called the function with first arg: ${first_arg}")
    message(STATUS "You called the function with second arg: ${second}")
    message(STATUS "You called the function with third arg: ${third}")
    message(STATUS "You called the function with forth arg: ${forth}")
endfunction()

do_cmake_good(1 2 3 4)

