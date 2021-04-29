#include <stdio.h>
#include <string.h>
#include <curl/curl.h>
#include "appdev.h"

void send_data(rock r) {
	CURL* curl;
	CURLcode res;
	char poststr[100];
	//prepare post data
	sprintf_s(poststr, "min=%d&max=%d&user=%s", r.min, r.max, r.rname);

	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e1601139/appdev/database.php");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, poststr);

		/* Perform the request, res will get the return code */
		res = curl_easy_perform(curl);
		/* Check for errors */
		if (res != CURLE_OK) {
			fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
		}
		curl_easy_cleanup(curl);
	}
}