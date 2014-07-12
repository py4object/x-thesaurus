
//
// http-get.h
//
// Copyright (c) 2013 Stephen Mathieson
// MIT licensed
//
extern "C" {

#ifndef HTTP_GET_H
#define HTTP_GET_H 1

#define HTTP_GET_VERSION "0.1.0"

typedef struct {
  char *data;
  char *msg;
  size_t size;
  size_t msgsize;
  long status;
  int ok;
} http_get_response_t;

http_get_response_t *http_get(const char *);

int http_get_file(const char *, const char *);

void http_get_free(http_get_response_t *);

#endif
}
