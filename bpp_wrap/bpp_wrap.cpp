#include <Bpp/Io/FileTools.h>
#include <Bpp/Text/TextTools.h>
#include <boost/python.hpp>
using namespace boost::python;

void export_FileTools();
void export_TextTools();

BOOST_PYTHON_MODULE(bpp)
{
	export_FileTools();
	export_TextTools();
}