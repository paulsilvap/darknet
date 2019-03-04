#ifndef PARSER_H
#define PARSER_H
#include "darknet.h"
// #include "network.h"
#include "option_list.h"
#include "activations.h"

void save_network(network net, char *filename);
void save_weights_double(network net, char *filename);

#endif
