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
CMAKE_SOURCE_DIR = /home/ferdy/lststools/dune/source

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ferdy/lststools/dune/source

# Include any dependencies generated for this target.
include CMakeFiles/surface_positions.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/surface_positions.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/surface_positions.dir/flags.make

CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o: CMakeFiles/surface_positions.dir/flags.make
CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o: programs/surface_positions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o -c /home/ferdy/lststools/dune/source/programs/surface_positions.cpp

CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ferdy/lststools/dune/source/programs/surface_positions.cpp > CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.i

CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ferdy/lststools/dune/source/programs/surface_positions.cpp -o CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.s

CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o.requires:

.PHONY : CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o.requires

CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o.provides: CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o.requires
	$(MAKE) -f CMakeFiles/surface_positions.dir/build.make CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o.provides.build
.PHONY : CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o.provides

CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o.provides.build: CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o


# Object files for target surface_positions
surface_positions_OBJECTS = \
"CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o"

# External object files for target surface_positions
surface_positions_EXTERNAL_OBJECTS =

surface_positions: CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o
surface_positions: CMakeFiles/surface_positions.dir/build.make
surface_positions: libdune-core.a
surface_positions: CMakeFiles/surface_positions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable surface_positions"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/surface_positions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/surface_positions.dir/build: surface_positions

.PHONY : CMakeFiles/surface_positions.dir/build

CMakeFiles/surface_positions.dir/requires: CMakeFiles/surface_positions.dir/programs/surface_positions.cpp.o.requires

.PHONY : CMakeFiles/surface_positions.dir/requires

CMakeFiles/surface_positions.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/surface_positions.dir/cmake_clean.cmake
.PHONY : CMakeFiles/surface_positions.dir/clean

CMakeFiles/surface_positions.dir/depend:
	cd /home/ferdy/lststools/dune/source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source/CMakeFiles/surface_positions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/surface_positions.dir/depend

