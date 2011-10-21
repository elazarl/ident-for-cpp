#include "ident.h"

static const Ident __main_cc("$id: main.cc$");

int main(int,char**) {
	Ident::printIdents();
}
