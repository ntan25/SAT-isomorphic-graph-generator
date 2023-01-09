#include <vector>
#include <math.h>
#include <string>
#include <unordered_map> 
#include <set> 
#include <iostream> 

typedef std::unordered_map<std::string, std::set<std::string>> GRAPH; 


/* Consider a graph as a mapping of a node to other nodes 
it is only the structure of the graph that matters not so much 
the content of individual nodes or properties of edges 
*/
class Generator{

    GRAPH* original_graph; 
    int* degree_limit; 
    

    void readFile(){
        /* 
        - File read in set of all edges, 
        - File read in incoming/outgoing degree limits 
        - Set of satisfactiable conditions like known node-edge pairs 
        */
    }

    void genGraph(){
    }
}; 

