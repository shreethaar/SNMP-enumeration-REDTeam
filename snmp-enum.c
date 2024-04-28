#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>

#define COMMUNITY "public"
#define PORT 161

int main(int argc, char *argv[]) {
	netsnmp_session session, *ss;
    	netsnmp_pdu *pdu;
    	netsnmp_pdu *response;
    	oid anOID[MAX_OID_LEN];
    	size_t anOID_len;
    	int status;

	if(argc<2) {
		printf("Usage: %s <target_ip>\n",argv[0]);
		return 1;
	}

	char *target_ip=argv[1];


	init_snmp("snmp_enum");
	snmp_sess_init(&session);
	session.peername=strdup(target_ip);
	session.version=SNMP_VERSION_2c;
	session.community = (u_char *)COMMUNITY;
    	session.community_len = strlen(COMMUNITY);
    	session.retries = 1;
    	session.timeout = 1000000;

	ss = snmp_open(&session);
    	if (ss == NULL) {
        	snmp_perror("snmp_open");
        	snmp_sess_perror("snmp_open", &session);
        	snmp_close(&session);
        	return 1;
	}

	//Next:
	//create snmp pdu for GET request
	//parsing for OID string (sys info)
	//fails,give log error and return
	//add OID to snmp PDU to retrieve 
	//init snmp request sync
	//if success -> prints sys descrp
	//if success with SNMP errors -> log error & return
	//if utter fails, return
	//close session --> free up memory & close port
	

	return 0;
}

