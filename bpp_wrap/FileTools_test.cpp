#include <Bpp/Io/FileTools.h>
using namespace std;

int main() {
    string al1 = "/Users/kgori/programming/cpp/bpp/example_phylo/YAL009W_AA.phy";
    cout << al1 << endl;
    bpp::FileTools *ft = new bpp::FileTools();
    bool fe = ft->fileExists(al1);
    cout << fe << endl;
}