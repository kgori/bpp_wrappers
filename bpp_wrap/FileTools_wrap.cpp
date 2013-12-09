#include <Bpp/Io/FileTools.h>
#include <boost/python.hpp>
#include <boost/noncopyable.hpp>
using namespace boost::python;

void export_FileTools() {
    class_<bpp::FileTools, boost::noncopyable>("FileTools", init< >())
    .def("fileExists", &bpp::FileTools::fileExists)
    .def("directoryExists", &bpp::FileTools::directoryExists)
    .def("getFileName", &bpp::FileTools::getFileName)
    .def("getFileSize", &bpp::FileTools::getFileSize)
    .def("getParent", &bpp::FileTools::getParent)
    .def("getExtension", &bpp::FileTools::getExtension)
    .def("putStreamIntoVectorOfStrings", &bpp::FileTools::putStreamIntoVectorOfStrings)
    .def("getNextLine", &bpp::FileTools::getNextLine)
    .staticmethod("fileExists")
    .staticmethod("directoryExists")
    .staticmethod("getFileName")
    .staticmethod("getFileSize")
    .staticmethod("getParent")
    .staticmethod("getExtension")
    .staticmethod("putStreamIntoVectorOfStrings")
    .staticmethod("getNextLine")
    .def_readonly("DIR_SEP", &bpp::FileTools::DIR_SEP)
    ;
}