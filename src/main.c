#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#include "../include/Notification.h"
#include "../include/HTTP_Server.h"
#include "../include/Routes.h"
#include "../include/Response.h"


int main() {
	// initiate HTTP_Server
	Route* dang = create_Route("Dang", "123");
	Route_LList* list = allocate_LList();
	list = insert_LList(list, dang);
	// list = insert_LList(list, create_Route("Yen", "456"));
	// list = insert_LList(list, create_Route("Yen2", "778"));

	Route_LList* temp = list;
	while (temp)
	{
		printf("%s\n",temp->item->key);
		temp = temp->next;
	}
	
	return 0;
    // client_socket
	
	
	// registering Routes
	

    // print Routes
    DebugLog();

	// display all available routes


	while (1) {
        // read client_msg
		

        // print client_msg
        

		// parsing client socket header to get HTTP method, route
		

		// get template
		
		// render template

		// header OK
		char http_header[4096] = "HTTP/1.1 200 OK\r\n\r\n";

		// concat header and reponse
		

		// send response message
		

		// close socket
		
		// free data after used
		
	}
	return 0;
}
