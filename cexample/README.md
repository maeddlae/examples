# cexample
Is an example project with C/C++ and unit testing. It uses google test (https://github.com/google/googletest) and fff (https://github.com/meekrosoft/fff).

# Installation
1. install Eclipse as described in workspace readme
2. download cygwin: https://www.cygwin.com/install.html
3. install following packages (See https://tls.mbed.org/kb/compiling-and-building/setup-eclipse-cdt-environment-on-windows):
	- gcc-core DEVEL: full
	- c++ DEVEL: full
	- gdb: The GNU Debugger
	- make: The GNU version of the 'make' utility
4. add cygwin\bin path to Windows PATH Environment Variables
5. in Eclipse go to Window -> Preferences -> C/C++ -> Debug -> Source Lookup Path. 
Add there a new source called "Project Source". Now set compilation path to 
"/cygdrive/j" and local file system path to "J:\", with j/J = the drive where your code stays.
See http://www.eclipse.org/forums/index.php/t/57027/. 
6. include Eclipse preferences and launch configurations from .settings folder: File->Import->General->preferences and File->Import->Run/Debug->Launch Configurations
7. also import templates in Window -> Preferences -> C/C++ -> Code Style -> Code Templates
8. install doxygen http://www.stack.nl/~dimitri/doxygen/download.html and graphviz https://graphviz.gitlab.io/_pages/Download/Download_windows.html. Do not 
forget to set PATH variable for graphviz!

# Magic settings
There are some magic settings in this project, otherwise it would not run:
- There are three configurations: Debug, Release and Testing. Debug is meant for debugging your application. Use Release for making your distributed build. 
Testing is similar to Debug.
- test folder is excluded from build in Debug and Release configuration. "main.cpp" is excluded from build in Testing. This must be done because otherwise there 
would be two "int main()" methods..
- also all tests except of AllTests.cpp must be excluded from build of Testing configuration.
- src, lib and test are default folders (no source folder) and must added to include paths in project settings. 
Do this in C/C++ Build -> Settings -> Tool Settings -> Cygwin C++ Compiler -> Includes.
- include library "pthread" in project settings -> C/C++ Build -> Settings -> Tool Settings -> Cygwin C++ Linker -> Libraries.