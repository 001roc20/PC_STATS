#ifndef PROCESSES_HH
#define PROCESSES_HH

#include <filesystem>
#include <fstream>
#include <map>
#include <iostream>
#include <vector>
using namespace std;

class processes {
private:
    struct process {
        string name;
        string state;
        int threads;
        int pid;
        double readKB;
        double writeKB;
        double lastWriteKB;
        double lastReadKB;
    };

    map<string, process*> procsNameMap;
    map<int, process*> procsPidMap;

public:
    processes();

    int getNProcs() const;

    string getProcName(int i) const;

    string getProcState(int i) const;

    int getProcThreads(int i) const;

    int getProcPid(int i) const;
    
    double getWriteKB(int i) const;
    
    double getReadKB(int i) const;

    int getProcIndex(string procName) const;

    process getProcByPid(int pid) const;

    process getProcByName(string name) const;

    void update();
};

#endif
