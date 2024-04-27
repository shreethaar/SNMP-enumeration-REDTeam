#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COMMUNITY "public"
#define PORT 161

int main(int argc, char *argv[]) {
	netsnmp_session session, *ss;
    	netsnmp_pdu *pdu;
    	netsnmp_pdu *response;
    	oid anOID[MAX_OID_LEN];
    	size_t anOID_len;
    	int status;


	// argc
	// target ip
	// init_snmp
