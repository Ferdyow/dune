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
include CMakeFiles/Control.UAV.RemoteOperation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Control.UAV.RemoteOperation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Control.UAV.RemoteOperation.dir/flags.make

CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o: CMakeFiles/Control.UAV.RemoteOperation.dir/flags.make
CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o: src/Control/UAV/RemoteOperation/Task.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Control::UAV::RemoteOperation::Task, ControlUAVRemoteOperationTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -o CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o -c /home/ferdy/lststools/dune/source/src/Control/UAV/RemoteOperation/Task.cpp

CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Control::UAV::RemoteOperation::Task, ControlUAVRemoteOperationTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -E /home/ferdy/lststools/dune/source/src/Control/UAV/RemoteOperation/Task.cpp > CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.i

CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -DDUNE_TASK="DUNE_TASK_EXPORT(::Control::UAV::RemoteOperation::Task, ControlUAVRemoteOperationTask)"  -fexceptions -Wno-long-long -Wextra -Wformat -Wformat-security -Wno-missing-field-initializers -fdiagnostics-show-option -Wall -Wshadow -pedantic -S /home/ferdy/lststools/dune/source/src/Control/UAV/RemoteOperation/Task.cpp -o CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.s

CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o.requires:

.PHONY : CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o.requires

CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o.provides: CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o.requires
	$(MAKE) -f CMakeFiles/Control.UAV.RemoteOperation.dir/build.make CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o.provides.build
.PHONY : CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o.provides

CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o.provides.build: CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o


# Object files for target Control.UAV.RemoteOperation
Control_UAV_RemoteOperation_OBJECTS = \
"CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o"

# External object files for target Control.UAV.RemoteOperation
Control_UAV_RemoteOperation_EXTERNAL_OBJECTS =

libControl.UAV.RemoteOperation.a: CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o
libControl.UAV.RemoteOperation.a: CMakeFiles/Control.UAV.RemoteOperation.dir/build.make
libControl.UAV.RemoteOperation.a: CMakeFiles/Control.UAV.RemoteOperation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ferdy/lststools/dune/source/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libControl.UAV.RemoteOperation.a"
	$(CMAKE_COMMAND) -P CMakeFiles/Control.UAV.RemoteOperation.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Control.UAV.RemoteOperation.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Control.UAV.RemoteOperation.dir/build: libControl.UAV.RemoteOperation.a

.PHONY : CMakeFiles/Control.UAV.RemoteOperation.dir/build

CMakeFiles/Control.UAV.RemoteOperation.dir/requires: CMakeFiles/Control.UAV.RemoteOperation.dir/src/Control/UAV/RemoteOperation/Task.cpp.o.requires

.PHONY : CMakeFiles/Control.UAV.RemoteOperation.dir/requires

CMakeFiles/Control.UAV.RemoteOperation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Control.UAV.RemoteOperation.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Control.UAV.RemoteOperation.dir/clean

CMakeFiles/Control.UAV.RemoteOperation.dir/depend:
	cd /home/ferdy/lststools/dune/source && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source /home/ferdy/lststools/dune/source/CMakeFiles/Control.UAV.RemoteOperation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Control.UAV.RemoteOperation.dir/depend
