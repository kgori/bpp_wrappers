#include <Bpp/Text/TextTools.h>
#include <boost/python.hpp>
#include <boost/noncopyable.hpp>
using namespace boost::python;

void export_TextTools() {

    // static bool (bpp::TextTools::*idn1)(char) = &bpp::TextTools::isDecimalNumber;
    // static bool (bpp::TextTools::*idn2)(const std::string&, char, char) = &bpp::TextTools::isDecimalNumber;

	class_<bpp::TextTools>("TextTools")
	.def("isEmpty", &bpp::TextTools::isEmpty)
    .def("toUpper", &bpp::TextTools::toUpper)
    .def("toLower", &bpp::TextTools::toLower)
    .def("isWhiteSpaceCharacter", &bpp::TextTools::isWhiteSpaceCharacter)
    .def("removeWhiteSpaces", &bpp::TextTools::removeWhiteSpaces)
    .def("removeFirstWhiteSpaces", &bpp::TextTools::removeFirstWhiteSpaces)
    .def("removeLastWhiteSpaces", &bpp::TextTools::removeLastWhiteSpaces)
    .def("removeSurroundingWhiteSpaces", &bpp::TextTools::removeSurroundingWhiteSpaces)
    .def("isNewLineCharacter", &bpp::TextTools::isNewLineCharacter)
    .def("removeNewLines", &bpp::TextTools::removeNewLines)
    .def("removeLastNewLines", &bpp::TextTools::removeLastNewLines)
    // .def("isDecimalNumber", idn1)
    // .def("isDecimalNumber", idn2)
    .def("isDecimalInteger", &bpp::TextTools::isDecimalInteger)
    .staticmethod("isEmpty")
    .staticmethod("toUpper")
    .staticmethod("toLower")
    .staticmethod("isWhiteSpaceCharacter")
    .staticmethod("removeWhiteSpaces")
    .staticmethod("removeFirstWhiteSpaces")
    .staticmethod("removeLastWhiteSpaces")
    .staticmethod("removeSurroundingWhiteSpaces")
    .staticmethod("isNewLineCharacter")
    .staticmethod("removeNewLines")
    .staticmethod("removeLastNewLines")
    // .staticmethod("isDecimalNumber")
    // .staticmethod("isDecimalNumber")
    .staticmethod("isDecimalInteger")
	;
}