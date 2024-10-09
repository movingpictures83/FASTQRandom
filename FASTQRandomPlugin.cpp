#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FASTQRandomPlugin.h"

void FASTQRandomPlugin::input(std::string file) {
 inputfile = file;
}

void FASTQRandomPlugin::run() {}

void FASTQRandomPlugin::output(std::string file) {
 std::string outputfile = file;
myCommand += "randomFQ";
myCommand += " ";
addRequiredParameter("-c", "c");
addRequiredParameterNoFlag("fastq");
myCommand += " >& ";
myCommand += outputfile;
 system(myCommand.c_str());
}

PluginProxy<FASTQRandomPlugin> FASTQRandomPluginProxy = PluginProxy<FASTQRandomPlugin>("FASTQRandom", PluginManager::getInstance());
