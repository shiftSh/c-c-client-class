#include "client.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
//    printf("bout");
    client* nini=new client("nini");
    nini->stringsender("suis la!");
    char* gi=nini->lire();
    cout<<gi<<endl;
    int hi;
    nini->receive_int(&hi);
    cout<<hi<<endl;
    nini->send_int(3);
    printf("fin\n");
    return 0;
}
