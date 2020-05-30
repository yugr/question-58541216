#!/bin/sh

set -eu
set -x

rm -f *.o *.a *.so a.out

CXX=g++
#CXX=clang++

CXXFLAGS='-fsanitize=address -fPIC -fvisibility=hidden -I. -std=c++11 -Wall -Wextra -Werror -D_GNU_SOURCE'
LDFLAGS='-fsanitize=address'

$CXX $CXXFLAGS -c stdwriter.cpp
$CXX $CXXFLAGS -c log.cpp
ar rcs libutil.a log.o stdwriter.o

$CXX $CXXFLAGS $LDFLAGS -shared foo.cpp -L. -lutil -o libfoo.so
$CXX $CXXFLAGS $LDFLAGS -shared bar.cpp -L. -lutil -o libbar.so

$CXX $CXXFLAGS $LDFLAGS prog.cpp -Ldl -L. -lutil

./a.out
