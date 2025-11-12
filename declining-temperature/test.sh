#!/bin/bash

# Configuration
EXE="./main"
INPUT="demodata.txt"
EXPECTED="98"

# Run the compiled program with stdin from file
OUTPUT=$($EXE < $INPUT)

# Compare result
if [ "$OUTPUT" == "$EXPECTED" ]; then
    echo "✅ Test passed: Output is $OUTPUT"
    exit 0
else
    echo "❌ Test failed: Expected $EXPECTED but got $OUTPUT"
    exit 1
fi
