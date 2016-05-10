#!/bin/sh

UNIT_TEST=$1

shift

echo "Running ./test-interactive $UNIT_TEST $@"
echo ""
echo "NOTE: For debugging purposes, you can run this single test as follows:"
echo "$ libtool --mode=execute \\"
echo "          gdb --eval-command=\"b `echo $UNIT_TEST|tr '-' '_'`_main\" \\"
echo "              --args ./test-interactive $UNIT_TEST" 

/home/opibak/-/bld/clutter-master/tests/interactive/test-interactive $UNIT_TEST "$@"

