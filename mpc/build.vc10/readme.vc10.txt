======================
A. A Note On Licensing
======================

Where files in this distribution have been derived from files licensed
under Gnu GPL or LGPL license terms, their headers have been preserved 
in order to ensure that these terms will continue to be honoured.  

Other files in this distribution that have been created by me for use
in building MPIR and MPFR using Microsoft Visual Studio 2010 are 
provided under the terms of the LGPL version 2.1

Running the MPFR tests automatically uses Python, which must hence be 
installed if you want to run them.  

============================================
B. Compiling MPC with the Visual Studio 2010
============================================

The VC++ project files are intended for use with Visual Studio 
2010 Professional, but they can also be used with Visual C++ 
2010 Express to build win32 applications.  When the new Windows
7 SDK is released it will allow the Express product to build for
x64 as well. 

Building MPFR
-------------

These VC++ build projects are based on MPIR 2.0 and MPFR-3.0.0. It
is assumed that MPIR has already been built and that the directories
containing MPIR and MPFR are at the same level in the directory 
structure:

    mpir
        build.vc10
            dll     MPIR Dynamic Link Libraries 
            lib     MPIR Static Libraries
            ....
    mpfr
        build.vc10
            dll     MPFR Dynamic Link Libraries
            lib     MPFR Static Libraries
            ....
    mpc
        build.vc10
            dll
            lib
            mpc_dll
            mpc_dll_test
            mpc_lib
            mpc_lib_test
            
            

The root directory name of the MPIR version that is to be used in 
building MPFR should be 'mpir' with any version number such as in
'mpir-3.0' removed.
 
The MPC source distribution should be obtained and expanded into the
MPC root directory (e.g. mpc). After this the build project files 
should be added so that the build.vc10 sub-directory is in the
MPC root directory as shown above.  

The root directory names for mpir and mpfr are assumed to be 'mpir' 
and 'mpfr' (this makes it easier to use the latest version of MPIR 
and MPFR without having to update MPIR and MPFR library names and
locations when new versions are released).
        
The build project for MPC, mpc.sln, contains four build projects:

    mpc_dll         build MPC dll
    mpc_dll_test    test MPC dll
    mpc_lib         build MPC static library
    mpc_lib_test    test MPC static library


each of which supports four configurations:

    win32 or x64
    release or debug
    
If you wish to use the Intel compiler, you need to convert the build files
by right clicking on the MPC top level Solution and then selecting the 
conversion option (this is not yet tested since).

===================
C. Acknowledgements
===================

My thanks to:

1. The GMP team for their work on GMP and the MPFR team for their work 
   on MPFR and MPC
2. Patrick Pelissier, Vincent Lefèvre and Paul Zimmermann for helping
   to resolve VC++ issues in MPFR.
3. The MPIR team for their work on the MPIR fork of GMP.
4  Jeff Gilcrist for his help in testing, debugging and improving the
   readme.txt file giving the build instructions
 
       Brian Gladman, February 2011
