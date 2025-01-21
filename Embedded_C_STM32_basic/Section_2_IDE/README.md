# Section 2 IDE

## Intro:
- let's understand about Installing an Integrated Development Environment
- IDE is a software that contains all the essential tools to develop, `compile`, `link`, and `debug` your code
- In some cases, you may have to integrate (integrate) compiler and debugger tools to the IDE manually.
- Throughout this course we will be using `Eclipse-based STM32CubeIDE` which is developed by ST Microelectronics
- to write, compile, debug your embedded system applications on STM32 ARM-based microcontrollers.
- STM32CubeIDE is an `eclipse` based IDE with STM32 related customization.

## Features of the IDE
- The very important thing is, it supports all the OS platforms (Windows, Linux, Mac) 
- Because, it is based on Eclipse.
- And the next important thing is, it comes with inbuilt cross compilers and debuggers. 
- You need not to download any external compilers or debuggers to integrate (thích hợp) that with this IDE
- everything comes in one single bundle (gói).
- this IDE actually uses a GNU based C C++ compiler for ARM embedded processors. It has a several other

## Installation GNU compiler  
- let's understand installation of GNU Compiler Collections for host.
- So, note that the STM32CubeIDE which we installed in the previous video is an integrated development
- environment software to develop, compile, and debug embedded applications for STM32 microcontrollers.
- the STM32CubeIDE installation procedure (thủ tục) which we carried out in the previous.

- So now we need to install the compiler for our host machine, which doesn't come with the STM32CubeIDE installation
- If you are using Linux or Mac, then it is very simple you just have to run few commands in order to install

### How to install GCC for Windows
- It is not that straightforward, because we use `GCC` in windows through a tool called `MinGW`. 
- `MinGW` stands for `Minimalist GNU tools for Windows`.
 

### Install compiler (GCC) for host Windows

- All right. So, now let's download the MINGW compiler.
- So, I have given a link with this lecture, so you can find in the resource section of this lecture.
- Please go through that link.
- So basically it's a Google drive link. So, there you will find a file called CTOOLS.zip.
- So, you do not to Sign In all anything, Ok?
- you can just download that file.   
- And once you download this zip file, OK? actually you have to extract that into the C drive of your computer.
- And in CTOOLS, you will find two directories. `bin` and `mingw32`.
- So, basically Mingw32, it has all the `bin` (binaries) required to compile and manage the project (C project).
- And, so if you just open the command prompt and if you try to run the 'gcc' command, then it says "it is not a recognized command".
- If you try the remove command, which are essential (thiết yếu) to clean and build the projects.
- So but the system says "those commands are not recognized".
- And you may also required to run the 'make' command, and it is also not recognized.
- So, all these commands are actually there, the executables are actually there in these folders.
- So now, we have to configure these paths into the System
- just type env in the Windows search bar and you will get Edit the system environment variables.
- We have successfully installed the 'gcc' command, which is required to compile our C project.
- Similarly, you can run 'rm' or 'make'. OK?

 
