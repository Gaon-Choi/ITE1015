# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/gaon/2019_ITE1015_2019009261/12-2-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gaon/2019_ITE1015_2019009261/12-2-1/build

# Include any dependencies generated for this target.
include CMakeFiles/list.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/list.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/list.dir/flags.make

CMakeFiles/list.dir/main.cpp.o: CMakeFiles/list.dir/flags.make
CMakeFiles/list.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gaon/2019_ITE1015_2019009261/12-2-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/list.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/list.dir/main.cpp.o -c /home/gaon/2019_ITE1015_2019009261/12-2-1/main.cpp

CMakeFiles/list.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/list.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gaon/2019_ITE1015_2019009261/12-2-1/main.cpp > CMakeFiles/list.dir/main.cpp.i

CMakeFiles/list.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/list.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gaon/2019_ITE1015_2019009261/12-2-1/main.cpp -o CMakeFiles/list.dir/main.cpp.s

CMakeFiles/list.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/list.dir/main.cpp.o.requires

CMakeFiles/list.dir/main.cpp.o.provides: CMakeFiles/list.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/list.dir/build.make CMakeFiles/list.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/list.dir/main.cpp.o.provides

CMakeFiles/list.dir/main.cpp.o.provides.build: CMakeFiles/list.dir/main.cpp.o


# Object files for target list
list_OBJECTS = \
"CMakeFiles/list.dir/main.cpp.o"

# External object files for target list
list_EXTERNAL_OBJECTS =

list: CMakeFiles/list.dir/main.cpp.o
list: CMakeFiles/list.dir/build.make
list: CMakeFiles/list.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gaon/2019_ITE1015_2019009261/12-2-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable list"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/list.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/list.dir/build: list

.PHONY : CMakeFiles/list.dir/build

CMakeFiles/list.dir/requires: CMakeFiles/list.dir/main.cpp.o.requires

.PHONY : CMakeFiles/list.dir/requires

CMakeFiles/list.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/list.dir/cmake_clean.cmake
.PHONY : CMakeFiles/list.dir/clean

CMakeFiles/list.dir/depend:
	cd /home/gaon/2019_ITE1015_2019009261/12-2-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gaon/2019_ITE1015_2019009261/12-2-1 /home/gaon/2019_ITE1015_2019009261/12-2-1 /home/gaon/2019_ITE1015_2019009261/12-2-1/build /home/gaon/2019_ITE1015_2019009261/12-2-1/build /home/gaon/2019_ITE1015_2019009261/12-2-1/build/CMakeFiles/list.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/list.dir/depend

