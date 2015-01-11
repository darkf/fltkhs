FltkHs - A Haskell Binding to the FLTK GUI Library
=============================================

Fltkhs aims to be a complete Haskell binding to the [FLTK GUI library] [1].

It also comes with the requisite C-wrappers around FLTK. These wrappers will be published as independent library but for now they are bundled because the API is not yet suitable for C programmers.

The `c-src` directory contains the C-wrappers around the FLTK widgets and functions.

The `c-examples` directory contains C ports of some of the examples provided with the FLTK distribution.

The `src` directory contains the Haskell bindings.

The Haskell demo examples are in `src/Examples`.

Building
________

First download and install FLTK. On OSX and Linux it should build using the standard:

    > ./configure
    > make
    > make install

Only on Linux and OSX, once FLTK is installed the standard Cabal build command `cabal build` from the top-level directory should build everything including the C/C++ wrappers.

The effort to have the library and demos build/install seamlessly on Windows in on-going.

While most of the bindings are complete, the following still needs to be done:

- the rest of the bindings
- More Haskell demos
- Documentation
- make the library portable across Windows/Linux/OSX.

Once the work is complete this README will include more extensive instructions.

  [1]: http://www.fltk.org/index.php      "FLTK"
