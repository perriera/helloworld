cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

function(do_cmake_good one two three fourth)
  foreach(arg IN LISTS ARGN)
    message(STATUS "Got ARGN: ${arg}")
  endforeach()
  foreach(arg IN LISTS ARGV)
    message(STATUS "Got ARGV: ${arg}")
  endforeach()
endfunction()

do_cmake_good(1 2 3 4 5 6 7 8 9)
