#!/bin/bash

# --- Configuration ---
# Define file paths and expected output
CPP_FILE="rectangle_sorter.cpp"
EXE_NAME="./rect_sorter" # Use a concise executable name
INPUT_FILE="demodata.txt"

# Expected output from the C++ program (Top 3 areas: 100.0, 81.0, 80.0)
# This is the concatenated side output from the C++ program.
EXPECTED_OUTPUT="10.010.0
9.09.0
8.010.0"

# 1. Compilation
# Compile the C++ file silently (redirect stderr to null)
g++ $CPP_FILE -o $EXE_NAME -std=c++11 2>/dev/null
if [ $? -ne 0 ]; then
    echo "❌ Test failed: C++ compilation error in $CPP_FILE."
    exit 1
fi

# 2. Run the compiled program with stdin from file
OUTPUT=$($EXE_NAME < $INPUT_FILE)

# 3. Compare result
if [ "$OUTPUT" == "$EXPECTED_OUTPUT" ]; then
    echo "✅ Test passed: Output is correct (Top 3 found)."
    exit 0
else
    echo "❌ Test failed: Expected:
$EXPECTED_OUTPUT
But got:
$OUTPUT"
    exit 1
fi