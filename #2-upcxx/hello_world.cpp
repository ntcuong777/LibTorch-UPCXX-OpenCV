#include <iostream>
#include <upcxx/upcxx.hpp>

using namespace std;

int main(int argc, char *argv[]){
    // setup UPC++ runtime
    upcxx::init();

    cout << "Hello world from process " << upcxx::rank_me()
    << " out of " << upcxx::rank_n() << " processes" << endl;

    // close down UPC++ runtime
    upcxx::finalize();

    return 0;
}
