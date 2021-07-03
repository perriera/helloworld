cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

set(my_list 1 2 3)
set(target DIRECTORY "${PROJECT_SOURCE_DIR}")
set_property(
    ${target}
    PROPERTY FOO
    "${my_list}"
)

get_property(foo_value ${target} PROPERTY FOO)
message(STATUS "Value of FOO is ${foo_value}")


