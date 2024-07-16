
struct request {
    char * url;
    char * method;
};

typedef struct request request;


void open_request(request * res, char * url, char * method);
void read_request(request * res);
void close_request(request * res);



