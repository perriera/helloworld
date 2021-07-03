cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

function(do_cmake_good)
  foreach(arg IN LISTS ARGN)
    message(STATUS "You called the function with arg: ${arg}")
  endforeach()
endfunction()

do_cmake_good(1 2 3 4 5 6 7 8 9)


