#!/bin/bash

# This script compiles and runs all the C++ programs in the subdirectories.

# Set the C++ compiler
CXX="g++"
# Set compiler flags
CXXFLAGS="-std=c++17 -Wall -Wextra -pedantic"

# Create a build directory
BUILD_DIR="build"
mkdir -p "$BUILD_DIR"

# Find all main.cpp files in the numbered directories
for project_dir in ./*/; do
    # Check if it's a directory
    if [ -d "$project_dir" ]; then
        main_file="$project_dir/main.cpp"
        # Check if main.cpp exists
        if [ -f "$main_file" ]; then
            # Extract the directory name for the executable
            dir_name=$(basename "$project_dir")
            executable="$BUILD_DIR/$dir_name"
            
            echo "--- Compiling and Running $dir_name ---"
            
            # Compile the C++ program
            # Note: CXXFLAGS is not in quotes so that it's treated as multiple arguments
            "$CXX" $CXXFLAGS -o "$executable" "$main_file"
            
            # Check if compilation was successful
            if [ $? -eq 0 ]; then
                # Run the executable
                "$executable"
            else
                echo "Compilation failed for $main_file"
            fi
            echo "----------------------------------------"
            echo ""
        fi
    fi
done

echo "All projects processed."
echo "Executables are in the '$BUILD_DIR' directory."
echo "To clean up, simply remove the '$BUILD_DIR' directory." 