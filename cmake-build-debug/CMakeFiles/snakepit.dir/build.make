# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /home/dmi3coder/Documents/ide/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/dmi3coder/Documents/ide/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dmi3coder/Documents/projects/cpp/snakepit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dmi3coder/Documents/projects/cpp/snakepit/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/snakepit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/snakepit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/snakepit.dir/flags.make

CMakeFiles/snakepit.dir/main.cpp.o: CMakeFiles/snakepit.dir/flags.make
CMakeFiles/snakepit.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dmi3coder/Documents/projects/cpp/snakepit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/snakepit.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/snakepit.dir/main.cpp.o -c /home/dmi3coder/Documents/projects/cpp/snakepit/main.cpp

CMakeFiles/snakepit.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/snakepit.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dmi3coder/Documents/projects/cpp/snakepit/main.cpp > CMakeFiles/snakepit.dir/main.cpp.i

CMakeFiles/snakepit.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/snakepit.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dmi3coder/Documents/projects/cpp/snakepit/main.cpp -o CMakeFiles/snakepit.dir/main.cpp.s

CMakeFiles/snakepit.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/snakepit.dir/main.cpp.o.requires

CMakeFiles/snakepit.dir/main.cpp.o.provides: CMakeFiles/snakepit.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/snakepit.dir/build.make CMakeFiles/snakepit.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/snakepit.dir/main.cpp.o.provides

CMakeFiles/snakepit.dir/main.cpp.o.provides.build: CMakeFiles/snakepit.dir/main.cpp.o


# Object files for target snakepit
snakepit_OBJECTS = \
"CMakeFiles/snakepit.dir/main.cpp.o"

# External object files for target snakepit
snakepit_EXTERNAL_OBJECTS =

snakepit: CMakeFiles/snakepit.dir/main.cpp.o
snakepit: CMakeFiles/snakepit.dir/build.make
snakepit: /usr/lib/x86_64-linux-gnu/libsfml-network.so
snakepit: /usr/lib/x86_64-linux-gnu/libsfml-audio.so
snakepit: /usr/lib/x86_64-linux-gnu/libsfml-graphics.so
snakepit: /usr/lib/x86_64-linux-gnu/libsfml-window.so
snakepit: /usr/lib/x86_64-linux-gnu/libsfml-system.so
snakepit: CMakeFiles/snakepit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dmi3coder/Documents/projects/cpp/snakepit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable snakepit"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/snakepit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/snakepit.dir/build: snakepit

.PHONY : CMakeFiles/snakepit.dir/build

CMakeFiles/snakepit.dir/requires: CMakeFiles/snakepit.dir/main.cpp.o.requires

.PHONY : CMakeFiles/snakepit.dir/requires

CMakeFiles/snakepit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/snakepit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/snakepit.dir/clean

CMakeFiles/snakepit.dir/depend:
	cd /home/dmi3coder/Documents/projects/cpp/snakepit/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dmi3coder/Documents/projects/cpp/snakepit /home/dmi3coder/Documents/projects/cpp/snakepit /home/dmi3coder/Documents/projects/cpp/snakepit/cmake-build-debug /home/dmi3coder/Documents/projects/cpp/snakepit/cmake-build-debug /home/dmi3coder/Documents/projects/cpp/snakepit/cmake-build-debug/CMakeFiles/snakepit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/snakepit.dir/depend

