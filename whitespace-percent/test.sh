#!/bin/bash

EXE="./main"
INPUT="demodata.md"
EXPECTED="10.1358"

# Run the compiled program with stdin from file
OUTPUT=$($EXE < "$INPUT")

# Allow small floating-point differences using bc
DIFF=$(echo "$OUTPUT - $EXPECTED" | bc -l)
ABS_DIFF=$(echo "${DIFF#-}")

# Tolerance for floating-point comparison
TOL=0.001

if (( $(echo "$ABS_DIFF < $TOL" | bc -l) )); then
    echo "✅ Test passed: Output is $OUTPUT (within tolerance $TOL)"
    exit 0
else
    echo "❌ Test failed: Expected $EXPECTED but got $OUTPUT"
    exit 1
fi
