#ifndef FASTQRANDOMPLUGIN_H
#define FASTQRANDOMPLUGIN_H

#include "Plugin.h"
#include "Tool.h"
#include "PluginProxy.h"
#include <string>

class FASTQRandomPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "FASTQRandom";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
