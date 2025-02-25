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
include CMakeFiles/Monitors.Servos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Monitors.Servos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Monitors.Servos.dir/flags.make

CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o: CMakeFiles/Monitors.Servos.dir/flags.make
CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o: src/Monitors/Servos/Task.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Monitors::Servos::Task, MonitorsServosTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -o CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o -c /home/ferdy/lststools/dune/source/src/Monitors/Servos/Task.cpp

CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Monitors::Servos::Task, MonitorsServosTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/ferdy/lststools/dune/source/src/Monitors/Servos/Task.cpp > CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.i

CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Monitors::Servos::Task, MonitorsServosTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/ferdy/lststools/dune/source/src/Monitors/Servos/Task.cpp -o CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.s

CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o.requires:

.PHONY : CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o.requires

CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o.provides: CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o.requires
	$(MAKE) -f CMakeFiles/Monitors.Servos.dir/build.make CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o.provides.build
.PHONY : CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o.provides

CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o.provides.build: CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o


# Object files for target Monitors.Servos
Monitors_Servos_OBJECTS = \
"CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o"

# External object files for target Monitors.Servos
Monitors_Servos_EXTERNAL_OBJECTS =

libMonitors.Servos.a: CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o
libMonitors.Servos.a: CMakeFiles/Monitors.Servos.dir/build.make
libMonitors.Servos.a: CMakeFiles/Monitors.Servos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libMonitors.Servos.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Monitors.Servos.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Monitors.Servos.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Monitors.Servos.dir/build: libMonitors.Servos.a

.PHONY : CMakeFiles/Monitors.Servos.dir/build

CMakeFiles/Monitors.Servos.dir/requires: CMakeFiles/Monitors.Servos.dir/src/Monitors/Servos/Task.cpp.o.requires

.PHONY : CMakeFiles/Monitors.Servos.dir/requires

CMakeFiles/Monitors.Servos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Monitors.Servos.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Monitors.Servos.dir/clean

CMakeFiles/Monitors.Servos.dir/depend:
	cd /home/ferdy/lststools/dune/source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source/CMakeFiles/Monitors.Servos.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Monitors.Servos.dir/depend

