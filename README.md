# MIMACT: Load Balancing Algorithm
Load Balancing Algorithm to Minimise Maximum Completion Time (MIMACT). All of the following codes have been tested using gcc version is 7.5.0.

### Executing the Load Balancing Algorithm
"Load Balancing Algorithm Based on Estimating
Finish Time of Services in Cloud Computing", paper's code can be run using:

`$ cd "Load Balancing Algorithms"`

`$ g++ paper-algo.cpp && ./a.out > outputfile < ../datagenerator/inputfile`

Similarly, MIMAC can be run as follows:

`$ cd "Load Balancing Algorithms"`

`$ g++ mimac.cpp && ./a.out > outputfile < ../datagenerator/inputfile`

### Executing Configuration Code

`$ cd datagenerator`

`$ g++ configuration.cpp && ./a.out > outputfile`