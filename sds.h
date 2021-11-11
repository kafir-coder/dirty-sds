#include <stddef.h>

// The _sds_t struct definition
typedef struct {
	size_t length;
	char *value;
} __sds_t;

/*
  @name: make 
  @aim: allocates a __sds_t string
*/
__sds_t* make(char* str);

/*
  @name: sds_print
  @aim: prints a __sds_t string
*/
int sds_print(__sds_t *sds);

/*
* @name: sds_print_serialized
* @aim: prints a serialized __sds_t string with the format => ^[length]-[string]$\n
* 
*/
int sds_print_serialized(__sds_t *sds);

// Author: Caio Tony
// Country: Angola
// Email: caiotony16@gmail.com
