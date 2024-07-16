#include <Windows.h>
#include <winhttp.h>

#include <stdio.h>
#include <stdlib.h>

#include "https_windows.h"


void open_request(request * res, char * url, char * method)
{
    res = (request *)malloc(sizeof(request));
    res->method = method;
    res->url = url;

    // creating a request handle
    HINTERNET http_handle = WinHttpOpen(
        L"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/126.0.0.0 Safari/537.36",
        WINHTTP_ACCESS_TYPE_NO_PROXY,
        WINHTTP_NO_PROXY_NAME,
        WINHTTP_NO_PROXY_BYPASS,
        WINHTTP_FLAG_SECURE_DEFAULTS
    );

    // unable to create a handle
    if (http_handle == NULL) 
    {
        printf("WinHttpOpen(): Unable to create a request handle\n");
        exit(GetLastError());
    }

    // creating a seassion handler for request
    HINTERNET http_connection = WinHttpConnect(
        http_handle,
        
    );

}
void read_request(request * res);
void close_request(request * res)
{
    free(res);
}