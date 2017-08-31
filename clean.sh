#!/bin/bash

####################
## by liubaolong @20170323
####################

path=`pwd`
echo "rm all *.swp *~"
find $path -name "*swp" -or -name "*~"|xargs rm -rf
