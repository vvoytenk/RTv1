# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vvoytenk/CLionProjects/rtv

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vvoytenk/CLionProjects/rtv/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/rtv.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/rtv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/rtv.dir/flags.make

CMakeFiles/rtv.dir/main.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/rtv.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/main.c.o   -c /Users/vvoytenk/CLionProjects/rtv/main.c

CMakeFiles/rtv.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/main.c > CMakeFiles/rtv.dir/main.c.i

CMakeFiles/rtv.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/main.c -o CMakeFiles/rtv.dir/main.c.s

CMakeFiles/rtv.dir/usage.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/usage.c.o: ../usage.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/rtv.dir/usage.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/usage.c.o   -c /Users/vvoytenk/CLionProjects/rtv/usage.c

CMakeFiles/rtv.dir/usage.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/usage.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/usage.c > CMakeFiles/rtv.dir/usage.c.i

CMakeFiles/rtv.dir/usage.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/usage.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/usage.c -o CMakeFiles/rtv.dir/usage.c.s

CMakeFiles/rtv.dir/init.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/init.c.o: ../init.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/rtv.dir/init.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/init.c.o   -c /Users/vvoytenk/CLionProjects/rtv/init.c

CMakeFiles/rtv.dir/init.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/init.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/init.c > CMakeFiles/rtv.dir/init.c.i

CMakeFiles/rtv.dir/init.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/init.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/init.c -o CMakeFiles/rtv.dir/init.c.s

CMakeFiles/rtv.dir/scene.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/scene.c.o: ../scene.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/rtv.dir/scene.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/scene.c.o   -c /Users/vvoytenk/CLionProjects/rtv/scene.c

CMakeFiles/rtv.dir/scene.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/scene.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/scene.c > CMakeFiles/rtv.dir/scene.c.i

CMakeFiles/rtv.dir/scene.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/scene.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/scene.c -o CMakeFiles/rtv.dir/scene.c.s

CMakeFiles/rtv.dir/scene1.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/scene1.c.o: ../scene1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/rtv.dir/scene1.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/scene1.c.o   -c /Users/vvoytenk/CLionProjects/rtv/scene1.c

CMakeFiles/rtv.dir/scene1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/scene1.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/scene1.c > CMakeFiles/rtv.dir/scene1.c.i

CMakeFiles/rtv.dir/scene1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/scene1.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/scene1.c -o CMakeFiles/rtv.dir/scene1.c.s

CMakeFiles/rtv.dir/color.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/color.c.o: ../color.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/rtv.dir/color.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/color.c.o   -c /Users/vvoytenk/CLionProjects/rtv/color.c

CMakeFiles/rtv.dir/color.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/color.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/color.c > CMakeFiles/rtv.dir/color.c.i

CMakeFiles/rtv.dir/color.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/color.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/color.c -o CMakeFiles/rtv.dir/color.c.s

CMakeFiles/rtv.dir/vectors.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/vectors.c.o: ../vectors.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/rtv.dir/vectors.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/vectors.c.o   -c /Users/vvoytenk/CLionProjects/rtv/vectors.c

CMakeFiles/rtv.dir/vectors.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/vectors.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/vectors.c > CMakeFiles/rtv.dir/vectors.c.i

CMakeFiles/rtv.dir/vectors.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/vectors.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/vectors.c -o CMakeFiles/rtv.dir/vectors.c.s

CMakeFiles/rtv.dir/render.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/render.c.o: ../render.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/rtv.dir/render.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/render.c.o   -c /Users/vvoytenk/CLionProjects/rtv/render.c

CMakeFiles/rtv.dir/render.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/render.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/render.c > CMakeFiles/rtv.dir/render.c.i

CMakeFiles/rtv.dir/render.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/render.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/render.c -o CMakeFiles/rtv.dir/render.c.s

CMakeFiles/rtv.dir/other.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/other.c.o: ../other.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/rtv.dir/other.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/other.c.o   -c /Users/vvoytenk/CLionProjects/rtv/other.c

CMakeFiles/rtv.dir/other.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/other.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/other.c > CMakeFiles/rtv.dir/other.c.i

CMakeFiles/rtv.dir/other.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/other.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/other.c -o CMakeFiles/rtv.dir/other.c.s

CMakeFiles/rtv.dir/scene2.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/scene2.c.o: ../scene2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/rtv.dir/scene2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/scene2.c.o   -c /Users/vvoytenk/CLionProjects/rtv/scene2.c

CMakeFiles/rtv.dir/scene2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/scene2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/scene2.c > CMakeFiles/rtv.dir/scene2.c.i

CMakeFiles/rtv.dir/scene2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/scene2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/scene2.c -o CMakeFiles/rtv.dir/scene2.c.s

CMakeFiles/rtv.dir/intersection.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/intersection.c.o: ../intersection.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/rtv.dir/intersection.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/intersection.c.o   -c /Users/vvoytenk/CLionProjects/rtv/intersection.c

CMakeFiles/rtv.dir/intersection.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/intersection.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/intersection.c > CMakeFiles/rtv.dir/intersection.c.i

CMakeFiles/rtv.dir/intersection.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/intersection.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/intersection.c -o CMakeFiles/rtv.dir/intersection.c.s

CMakeFiles/rtv.dir/scene3.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/scene3.c.o: ../scene3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/rtv.dir/scene3.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/scene3.c.o   -c /Users/vvoytenk/CLionProjects/rtv/scene3.c

CMakeFiles/rtv.dir/scene3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/scene3.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/scene3.c > CMakeFiles/rtv.dir/scene3.c.i

CMakeFiles/rtv.dir/scene3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/scene3.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/scene3.c -o CMakeFiles/rtv.dir/scene3.c.s

CMakeFiles/rtv.dir/scene4.c.o: CMakeFiles/rtv.dir/flags.make
CMakeFiles/rtv.dir/scene4.c.o: ../scene4.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/rtv.dir/scene4.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/rtv.dir/scene4.c.o   -c /Users/vvoytenk/CLionProjects/rtv/scene4.c

CMakeFiles/rtv.dir/scene4.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/rtv.dir/scene4.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/vvoytenk/CLionProjects/rtv/scene4.c > CMakeFiles/rtv.dir/scene4.c.i

CMakeFiles/rtv.dir/scene4.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/rtv.dir/scene4.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/vvoytenk/CLionProjects/rtv/scene4.c -o CMakeFiles/rtv.dir/scene4.c.s

# Object files for target rtv
rtv_OBJECTS = \
"CMakeFiles/rtv.dir/main.c.o" \
"CMakeFiles/rtv.dir/usage.c.o" \
"CMakeFiles/rtv.dir/init.c.o" \
"CMakeFiles/rtv.dir/scene.c.o" \
"CMakeFiles/rtv.dir/scene1.c.o" \
"CMakeFiles/rtv.dir/color.c.o" \
"CMakeFiles/rtv.dir/vectors.c.o" \
"CMakeFiles/rtv.dir/render.c.o" \
"CMakeFiles/rtv.dir/other.c.o" \
"CMakeFiles/rtv.dir/scene2.c.o" \
"CMakeFiles/rtv.dir/intersection.c.o" \
"CMakeFiles/rtv.dir/scene3.c.o" \
"CMakeFiles/rtv.dir/scene4.c.o"

# External object files for target rtv
rtv_EXTERNAL_OBJECTS =

rtv: CMakeFiles/rtv.dir/main.c.o
rtv: CMakeFiles/rtv.dir/usage.c.o
rtv: CMakeFiles/rtv.dir/init.c.o
rtv: CMakeFiles/rtv.dir/scene.c.o
rtv: CMakeFiles/rtv.dir/scene1.c.o
rtv: CMakeFiles/rtv.dir/color.c.o
rtv: CMakeFiles/rtv.dir/vectors.c.o
rtv: CMakeFiles/rtv.dir/render.c.o
rtv: CMakeFiles/rtv.dir/other.c.o
rtv: CMakeFiles/rtv.dir/scene2.c.o
rtv: CMakeFiles/rtv.dir/intersection.c.o
rtv: CMakeFiles/rtv.dir/scene3.c.o
rtv: CMakeFiles/rtv.dir/scene4.c.o
rtv: CMakeFiles/rtv.dir/build.make
rtv: libft/libft.a
rtv: CMakeFiles/rtv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking C executable rtv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rtv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/rtv.dir/build: rtv

.PHONY : CMakeFiles/rtv.dir/build

CMakeFiles/rtv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/rtv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/rtv.dir/clean

CMakeFiles/rtv.dir/depend:
	cd /Users/vvoytenk/CLionProjects/rtv/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vvoytenk/CLionProjects/rtv /Users/vvoytenk/CLionProjects/rtv /Users/vvoytenk/CLionProjects/rtv/cmake-build-debug /Users/vvoytenk/CLionProjects/rtv/cmake-build-debug /Users/vvoytenk/CLionProjects/rtv/cmake-build-debug/CMakeFiles/rtv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/rtv.dir/depend

