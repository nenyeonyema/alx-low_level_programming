#!/bin/bash
wget -P /tmp/ https://github.com/nenyeonyema/alx-low_level_programming/blob/master/0x18-dynamic_libraries/randomnum.so
export LD_PRELOAD=/tmp/randomnum.so
