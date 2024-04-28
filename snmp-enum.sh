#!/bin/bash

sudo apt-get update
sudo apt-get install -y libsnmp-dev

gcc snmp_enum.c -o snmp_enum -lnet-snmp

# chmod +X snmp_enum.sh 
# ./snmp_enum <target_ip>


