#!/usr/bin/bash

echo "================================================="
echo "Cleaning previous build..."
rm -rf build
echo "================================================="
echo
echo "================================================="
echo "Building the program..."
echo "================================================="
echo "================================================="
echo
cmake -S . -B build
cmake --build build
echo "================================================="
echo "================================================="
echo

read -p "Build complete, Press Enter to execute the program..."
./build/program