// typedef = reserved keyword used to create an additional name 
//            may refer as ( alias )for another type of data. 
//            new identifier for an existing type
//            help with readability and reduce typos.
//            consider to use when it has a clear benefit
//            may replace with 'using' ( work better w/ templates ) 

// vector = a sequence containers representating an dinamic array
//          it manage storage by memory allocation
//          provides contiguous memory storage
//          atomatic handlering resizing, memory re-allocation, and element lifecyle management
//          at runtime 

//  pair =  it is like capsulates the 2 datatpye into 1 entites or variables to pairs 

//examples;

#include <iostream> 
#include <vector>  // dosent not include right here but somwhere later 
#include <string>

using std::cout;
using std::endl;

// typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string alias_t;
typedef int items_t;
typedef std::string itemDescription_t;

int main(){
    alias_t name = "hakumori";
    items_t quatitity = 10 ;
    itemDescription_t descript = " herb tea";

    cout << "hallo, my alias is " << name << endl;
    cout << " in my invetory, i have "  << quatitity << descript << endl;
    cout << " it is good, and help HP regeneration" << endl;

    return 0;
}