#!/bin/bash

grep '" 200 ' ../Dane/cdlinux.www.log | cut -d ' ' -f 1,7 | sort -u | sed "1,\$s#.*/##" | grep "\.iso" | sort | uniq -c | sed -n '/\.iso$/p'
