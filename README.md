# Antlr_Cpp_RandomCoding


This repository contains the majority of the files needed for this to be compiled on a linux os.

To use this :
  - You need to have antlr4 preconfigured on your machine and the aliases created for your current session :
     
          $ cd /usr/local/lib
          $ sudo curl -O https://www.antlr.org/download/antlr-4.7.1-complete.jar
          $ export CLASSPATH=".:/usr/local/lib/antlr-4.7.1-complete.jar:$CLASSPATH"
          $ alias antlr4='java -jar /usr/local/lib/antlr-4.7.1-complete.jar'
          $ alias grun='java org.antlr.v4.gui.TestRig'
      
- Being able to build the C++ target runtime for antlr on your machine.
   On the debian based distros it requires the following package uuid-dev. You can get it via :
            
          $ sudo apt-get install uuid-dev
 
- The "ExternalAntlr4Cpp" and "CMakeLists" files might contain some absolute pathes to the antlr package or... that need to be changed according to your machine.


The main directory contains an already compiled antlr grammar file "ALFA.g4" using both the listener and visitor approach. To recompile it :

          $ antlr4 -Dlanguage=Cpp ALFA.g4 // for the listener 
          $ antlr4 -Dlanguage=Cpp ALFA.g4 -visitor // for the visitor

The "main.cpp" is the one that's been compiled when using cmake. the "main1.cpp" contains a code that doesnt work so far.

To build this project :

      $ mkdir build  // can be skipped since I already put a pre-compiled C++ target on the build directory so the "make" command won't have to download/build the runtime everytime
      // if doenst work, create another build folder, with another name, build2 for exemple, and build the project inside of it
      $ cd build
      $ cmake -G "Unix Makefiles" ..
      $ make -j2 VERBOSE=1
      $ ./test_antlr


The project C++ files are in the 'grammar' directory.

Some problems with the grammar are in the 'GrammarProblems.txt' file in the 'grammar' directory.

Most of the work, so far, is concentrated on the 'Listener.h' and 'Visitor.h' classes in the 'grammar/include' directories.
