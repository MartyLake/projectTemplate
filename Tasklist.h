/*Task List
========= */

/*
// DONE add this task list to the eclipse project so it can be picked up by
the tasklist
//TODO Adding a Version Number and Configured Header File
https://cmake.org/cmake-tutorial/
//TODO create cmake cpp project hello world https://cmake.org/cmake-tutorial/
//TODO add boost test :
http://www.boost.org/doc/libs/1_53_0/libs/test/doc/html/utf/tutorials.html
//TODO or add google test: http://www.kaizou.org/2014/11/gtest-cmake/ ?
//TODO compile cute project -> install boost ?
//TODO add lua hpp and lua sources
//TODO add minimal test provine lua is available in the project
//TODO convert the project to cmake
//TODO add graphic dependency:
 * cairo?
 * wxwidget?
https://wiki.wxwidgets.org/Eclipse,_CDT_%26_MingW_%26_MSYS_Setup_Guide
 * cegui + sfml https://github.com/SFML/SFML/wiki/Tutorial%3A-CEGUI-and-SFML

*/

/*
How to compile for windows:
- Install ninja (download at https://github.com/ninja-build/ninja/releases
v1.7.1, and copy to path)

#out of source build because in the source build is not supported by
Cmake/Eclipse
- in the project folder: mkdir ../projectTemplateBuild
- cd ../projectTemplateBuild
- cmake -G "Eclipse CDT4 - MinGW Makefiles" ../projectTemplate \
-DCMAKE_ECLIPSE_GENERATE_SOURCE_PROJECT=TRUE -DCMAKE_BUILD_TYPE=Debug ->
https://cmake.org/Wiki/Eclipse_CDT4_Generator, run it twice to force project
generation
- eclipse -> open project from file system ????
*/

/*
ECLIPSE TIPS:
- by default, the indexer doesn't use the GCC include paths: CDT BUILT IN
COMPILER SETTINGS MINGW + CDT BUILD IN COMPILER SETTINGS,
- I also had to do Preferences -> C/C++ -> Indexer -> Use active build
configuration -> switched from ninja makefile to mingw makefile solved it all
- install llvm (or just clang-format), install plugin cppstyle, Preferences ->
C/C++ -> CppStyle  enable format on save and specify binary location.
*/
