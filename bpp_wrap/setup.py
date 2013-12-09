#!/usr.bin.env python

from distutils.core import setup
from distutils.extension import Extension

setup(name="bpp",
    ext_modules=[
        Extension("bpp", ["FileTools_wrap.cpp", "TextTools_wrap.cpp"],
        libraries = ["boost_python", "bpp-core"])
    ])