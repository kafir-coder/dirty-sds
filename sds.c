#include "sds.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

__sds_t* make(char* str) {
  char* allocated_str = (char*) malloc(strlen(str)+1);
  __sds_t* sds = (__sds_t*) malloc(sizeof(__sds_t));
  char* begin = strcpy(allocated_str, str);

  sds->value = allocated_str;
  sds->value = str;
  sds->length = strlen(str)+1;

  return sds;
}

int sds_print(__sds_t *sds) {
  if (sds == NULL) return -1;
  printf("value: %s\nlength: %ld\n", sds->value, sds->length);
  return 1;
}

int sds_print_serialized(__sds_t* sds) {
  if (sds == NULL) return -1;
  printf("^%ld-%s$\n",sds->length, sds->value);
  return 1;
}

