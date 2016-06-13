/**
 *@file   Readme_kstrade_en.txt  English Documentation for source code file of testing Trade API 
 *@auhor  : xdhu
 *@system ��API Test Demo
 *@company: sungard
 *@history��
    20121203  created
 */

Part One��Files Description��
KSTradeAPI_Sample directory includes the following files
source file   :TraderApi_Sample.cpp   
makefile of Linux enviroment:   makefile
project file of windows enviroment :TraderApi_Sample.sln��TraderApi_Sample.vcproj
help doc:     Readme_kstrade.txt, Readme_kstrade_en.txt(English)

Part Two��Files Function��
TraderApi_Sample.cpp  			        implement the main functions of testing libkstradeapi.so dynamic library
makefile 			    				implement the compile progress of the test demo for linux platform
TraderApi_Sample.sln��TraderApi_Sample.vcproj                       implement the compile progress of the test demo for windows platform


Part Three��Compile and Running Description for linux platform 

1, Compile Description
   Makefile provide compile progress for both 32 bit and 64 bit testing demo 

   1��  Compile Checking
	First make sure your machine has installed gcc 4.1.2 and above version.
	You can execute "gcc -v " command in the  linux shell to check the version of Gcc.
	Lower version of Gcc maybe cause the compiling error.

   2��  How to Compile
	You can execute "make" command in the linux shell.
	make   			generate 64 bit test demo (default)
	make  vtype=32r 	generate 32 bit test demo
        make  vtype=64r 	generate 32 bit test demo

   3��  Executable Files
	Run "make" or "make vtype=64r" will generate "TraderApi_Sample" Executable file in run directory which used to test 64-bit libkstradeapi.so
        Run "make vtype=32r" will generate "TraderApi_Sample" Executable file in run directory which used to test 32-bit libkstradeapi.so      
	
   4��  Announcements
	In current enviroment��when compiling 32 bit and 64 bit program, you need execute "make clean" after exectuing "make" commnad , which used to 
	delete middle object files at last comile period.This operating can avoid cross-bit compile error.

2��Run Description
   
   1��Run Checking
      First make sure the existence of libkstradeapi.so and libkslkc64r.so( 32bit program need libkslkc32r.so)��Release files include both 32 and 64 bit libkstradeapi.so,which uses the same file name, divided by the different directory "sdk/linux/linux32" and "sdk/linux/linux64" .libkslkc32r.so is in sdk/linux/linux32 directory, while libkslkc64r.so is in sdk/linux/linux64 directory.��
      Then check if you has compiled the executable file for testing demo successfully.( Compile stage will generate executable programs in run directory)

   2) Set executable attribute for dynamic library
      
      Make sure the dynamic library libkstradeapi.so has executable attribute.You can use "ls -l libkstradeapi.so"  to see the file-attribute.
      Make sure the dynamic library libkslkc64r.so(or libkslkc32r.so) has executable attribute.
      If the dynamic library libkstradeapi.so doesn't has executable attribute, you can use "chmod +x libkstradeapi.so" in the linux shell to 	change executable attributes. See more "man 1 chmod"

   3��Set loading path of dynamic library
      Suppose the absolute path of libkstradeapi.so is "/xxx/yyy/zzz/libkstradeapi.so". You can use the following method to set loading path of dynamic library ,see also  "man 3 dlopen"

      Add the absolute path of libkstradeapi.so and  libkslkc64r.so(or libkslkc32r.so)  to the LD_LIBRARY_PATH enviroment variable.You can do like this: 
      LD_LIBRARY_PATH=/xxx/yyy/zzz/��${LD_LIBRARY_PATH};  export LD_LIBRARY_PATH

   4) Check Correctness of environment configuration
      a) Check whether the loading stage is right when executable programs loads the dynamic library.
	ldd  TradeAPI_Sample   : check the load stage of test demo 

      b) See the current version of dynamic library "libkstradeapi.so".You can do like this:
	strings libkstradeapi.so|grep KSFT_API_Version

   5��Announcements
      The correctness for running program also needs authorization document "KSInterB2C.lkc" which belongs to Sungard.
      Make sure the running directory has "KSInterB2C.lkc" file .You can connect hot line  for this file if you don't have it .

Part Four��Compile and Running Description for windows platform

1��Compile Description
   In windows enviromnet ,you should use Visual Studio 2005 IDE to compile the source code.

   1) Compile Checking
   First make sure your windows machine has installed Visual Studio 2005 and above version.
   
   2��How to Compile
   Use Visual Studio 2005 to open "TraderApi_Sample.sln" file ��then compile in the IDE.
   
   3��Executable Files
   After compiling progress , you can find the executable file : TraderApi_Sample.exe in the run directory .

2��Run Description
   First make sure run directory has these files: KSTradeAPI.dll,cpack.dll,lkcdll.dll
   Then you can execute the TraderApi_Sample.exe in run directory.
   The correctness for running program also needs authorization document "KSInterB2C.lkc" which belongs to Sungard.
   Make sure the running directory has "KSInterB2C.lkc" file .You can connect hot line  for this file if you don't have it .
      