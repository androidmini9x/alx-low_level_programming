#!/bin/bash
wget -P /tmp https://github.com/androidmini9x/alx-higher_level_programming/raw/master/0x17-dynamic_libraries/gma.so
export LD_PRELOAD=/tmp/gma.so
