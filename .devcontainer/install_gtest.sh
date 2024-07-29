#!/bin/sh

GTEST_VERSION="1.14.0"

if [ $# -eq 1 ]
then
    GTEST_VERSION=$1
fi

ARCHIVE=v${GTEST_VERSION}.tar.gz

#Download & unpack
wget https://github.com/google/googletest/archive/refs/tags/${ARCHIVE}
tar xzf ${ARCHIVE}
cd googletest-${GTEST_VERSION}/

# # Build & install
mkdir build && cd build
cmake ..
make -j all 
sudo make -j install