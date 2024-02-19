#include <iostream>
#include "ev.h"

using namespace std;

int main()
{
	cout << ev_supported_backends() << endl;

    auto loop = ev_default_loop();
    return 0;
}

