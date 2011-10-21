#include "ident.h"
#include <vector>
#include <iostream>

static std::vector<const char*> idents;

Ident::Ident(const char* ident) {
	idents.push_back(ident);
}

void Ident::printIdents() {
	for (int i=0;i<idents.size();i++) std::cout << idents[i] << "\n";
}

