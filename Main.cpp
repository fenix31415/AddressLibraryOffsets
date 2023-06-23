#include <iostream>

//#define AE  // uncomment it for AE, comment it for SSE

#ifdef AE

#include "versionlibdb.h"

bool DumpSpecificVersion()
{
	VersionDb db;

	if (!db.Load(1, 6, 318, 0)) {
		std::cout << "-\n";
		return false;
	}

	db.Dump("offsets-1-6-318-0.txt");
	return true;
}

#else

#include "versiondb.h"

bool DumpSpecificVersion()
{
	VersionDb db;

	if (!db.Load(1, 5, 97, 0)) {
		std::cout << "-\n";
		return false;
	}

	db.Dump("offsets-1-5-97-0.txt");
	return true;
}

#endif

int main() {
	DumpSpecificVersion();
}