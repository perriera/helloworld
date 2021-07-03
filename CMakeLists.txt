cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

function(do_cmake_good first_arg)
    message(STATUS "You called the function: ${first_arg}")
endfunction()

do_cmake_good(1)
do_cmake_good(2)
do_cmake_good(3)
do_cmake_good(4)
