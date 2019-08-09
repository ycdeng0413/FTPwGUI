# FTP for Production Line based on C++/CLI
### ✔Development Environment: 
Visual Studio 2012 Express
### ✔.NET Target Framework Version:
4.0 using Common Language Runtime (CLR)
#### ✔The executables have one version
Release Version (Please see Ver2012.exe in the "Result" directory)

**Notice:** Need to attach all the required dll files in order to successfully run the executable

---
##### Windows Version Test (VS2012):
1. Windows 7: Pass
2. Windows 8: Pass
3. Windows XP (SP3): Pass
4. Windows XP (SP2): Fail (only 3.5 or older version of .NET can be used in Windows XP-Service Pack 2)

---
##### Issues and Discussion (also posted in issues section)
* **We build solution in "release" version since it requires less dynamic library installations and easier to be used on other platforms.**
1. To build "release" solution => Project --> Properties --> Change "Debug" which is default setting to "Release".
* **To set our executable to be a Win32 application in order to avoid the error "xxx.exe is not a valid Win 32 application" occurring.**
1. Project --> Properties --> Configuration Properties --> General --> Platform Toolset --> choose "Visual Studio 2012 - Windows XP (v110_xp)"
2. Project --> Properties --> Linker --> System --> Subsystem --> choose "Windows(/SUBSYSTEM:WINDOWS)"
* **In order to avoid the error occurring such as  "The program can’t start because MSVCR110.dll/ MSVCP110.dll is missing from your computer, Try reinstalling the program to fix this problem"**
1. Go online and download such cited dynamic library so as to successfully execute the application.
2. **Notice:** you need to download 32 bit version, not 64 bit version. Besides, there will be some errors in few files and if you see the error like "the procedure entry point FlsGetvalue could not be located in the dynamic link library KERNEL32.dll", just download file in another version and use it, sometimes it works
* **String type conversion is the challenging things compared to other bugs**
1. There might be three types of string inside the code: System::String, std::string, and even char or const char
2. System::String is usually employed to display string in the textbox or other the UI designs (toolbox). e.g. the text we extract from textbox is also in System::String format.
3. std::string is utilized to deal with the text in order to execute in cmd to do ftp transmission
4. To convert System::String to std::string: using function called "MarshalString" which is the second function in the h. file
5. To convert std::string to System::String: using "gcnew"
* **fstream might not be albe to be utilized to build text file in older version of Visual Studio**
1. Just using "StremWriter" will be fine
2. Notes that StreamWriter also uses System::String format to write and read

* **If the file path including "space", the cmd will fail to load the complete**
1. Using "dobule quotation" to quote all the path to forestall such errors
