#!/bin/bash
rm -rf *.o *.app &> /dev/null
command g++ -c catarrest.cpp
command g++ catarrest.o -o catarrest.app
rm -rf *.o
