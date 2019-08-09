# FTPwGUI
# FTP for Production Line based on C++/.NET Framework using Common Language Runtime (CLR)


##  ➤Current Result
### ✔Development Environment: 
Visual Studio 2012 Express
### ✔.NET Target Framework Version:
There is **no** specific version .NET Framework
#### ✔The executables have one version
Release Version (Please see Ver2012.exe in the "Result" directory)

**Notice:** Need to attach all the required dll files in order to successfully run the executable

---
#### 7/29
##### adding new function
1. the endtime will automatically set as the current time + period time
2. the file name we save will automatically add date to filename (e.g. test20190729)

#### 7/17
##### adding new function
1. We can not only set the time (period) with x minutes in order to implement updating the files every x minutes, but also choose when we will stop updating (end time)
2. For convenience, using listbox with scrollbar helps us to know what directory we have on the server, and easily decide which "destination" to upload file (ftp server)

#### 7/16
##### adding new function
1. For convenience, user can choose if he/she wants to upload all the either txt or log files, or he/she can type the file name they want to upload
2. User can store the text file which can be used in the future in order to make it convenient

##### Windows Version Test (VS2012):
1. Production Line 1 Printer (XP-SP2): Fail

---
#### 7/15
##### Windows Version Test (VS2012):
1. Windows 7: Pass
2. Windows 8: Pass
3. Windows XP (SP3): Pass

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

---
---
---
---
---
## ➤Previous Result
### Development Environment : Visual Studio 2015 Community
### .NET Target Framework Version 
1. v4.5.2 (See in UIXP1 folder)
2. V3.5 (See in UIXP(.NET 3.5) folder)
3. V2.0

---
#### 7/10
##### Windows Version Test (VS2015/V4.5.2):
1. Windows 7: Pass
2. Windows 8: Pass
3. Windows XP: Fail

---
#### 7/11 
#####  Creating a directory including code based on .NET Target Framework Version v3.5 and v2.0
##### modifying the code
##### using StreamWriting instead of fstream 
1. fstream will occur LNK 2022, 2034 errors under .NET 3.5 
2. fstream need changing System::String to std::String, but StreamWriting doesn't need that

#### Windows Version Test (VS2015/V3.5):
1. Windows 7: Pass
2. Windows 8: Pass
3. Windows XP: Fail

#### Windows Version Test (VS2015/V2.0):
1. Windows 7: Pass
2. Windows 8: Pass
3. Windows XP: Fail
