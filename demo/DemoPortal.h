#ifndef DEMO_PORTAL_H
#define DEMO_PORTAL_H
#include "../ecomm/Portal.h"
#include <string>
#include <iostream>
#include <fstream>
#include <map>
using namespace std;

class DemoPortal : public Portal
{

public:
    DemoPortal(string);
    void processUserCommand(string command);
    void checkResponse();
    int req_no;
    vector<string> split(string, string);

private:
    ifstream Fileio;
    string portal_id;
    map<string, string> request_map;
};
#endif
