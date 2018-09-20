cmake_minimum_required(VERSION 3.12)
project(rtv C)

set(CMAKE_C_STANDARD 90)
# set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -Wextra -Werror")

set(SOURCE_FILES
        main.c usage.c init.c scene.c scene1.c color.c vectors.c render.c other.c scene2.c
        intersection.c )




link_directories("${CMAKE_SOURCE_DIR}/build/lib")
set(SDL2_LIBRARIES SDL2 SDL2_image)
message(STATUS "${SDL2_LIBRARIES}")

add_subdirectory(libft)
include_directories("${CMAKE_SOURCE_DIR}/build/include")

add_executable(rtv ${SOURCE_FILES})
target_link_libraries(rtv ft ${SDL2_LIBRARIES})