English in programming

- All right. First let's learn some basics syntaxes related to usage of variables 
- and some of the important standard library functions such as printf, scanf, and all. And for this I'll not be using the IDE
- which I installed.
- What I do is, I use one online compiler called onlinegdb which is very much easy to use.
- and it only requires internet connection. So, you can also use this for a time being, later will use 
- our eclipse IDE installed to write programs.

- Of course, you cannot program your target board using this tool, but you can practice some basics syntaxes.
- But for any reason if you can't able to use this online tool, then don't worry at all. You can use the IDE install. 
- Anyway now you already know how to create a project, `compile` it, and `execute`. Right?
- and if you don't have access to internet, then no problem you can always use the offline IDE.
- Let's head over (chuyển sang) to the IDE. 
- And here, let me just create a new project.
- So now, let's click save `in order` (để) to save our project.

- and under that project we have one source file that is called as main.c, which is added by this tool automatically.
- So now, for some people you may not able to see this main.c in that case what you should do is,
- you should go and select this language.
- So, that's why, you have to select appropriate (phù hợp) language here.
- And also if you go to the settings, so you can select the theme dark or light, and editor mode, font size,

- Let's write a simple 'C' program which displays the text
- So, please remember that every 'C' program has at least one function that is called main function.
- So, main is actually the starting point of your program execution. A 'C' program is nothing but collection of various functions and it should contain at least one function and that is called as main function.
- Vì vậy, main thực sự là điểm bắt đầu thực thi chương trình của bạn. Một chương trình 'C' không gì khác ngoài một tập hợp các hàm khác nhau và nó phải chứa ít nhất một hàm và nó được gọi là hàm main.
- So now, let's write the main function. So, don't worry about functions, it's prototype, and other details.
- So, we have separate section for that to understand functions. 
- At this point it would be a too early to explore all those things. So, let's write a main function in our 'C' source file.
- For that, just type the function name that is main,
- and after that you have to put the parenthesis (dấu ngoặc đơn)
- And after that you had to mention the return type of this function, that is actually `int` this is according (dựa theo) to the standard.
- So, according to the C90 and C99 standard main should return int.
- So, that's what standard says.
- So, this is a prototype of the main function
- and this is a function name that is main.
- And now let's give the body of the function.

- So, every function will have its own body and that is identified by these brackets.
 
- we just implemented is actually a function definition?
- So, this is called as function definition, where it has the prototype at the beginning and it has its body.
- So, now inside this body we are going to write code and that code will be executed by the main, when the main function is called
- And in this program our job is just to print the text "Hello World" and in order to print something on
- and this is a function `in order` (để) to print some text. And it can do various things but for a time
- So, and after that you have to mention your message in double quotes (`kh-ot-s`) (ngoặc kép).
- So now, let's first write the double quotes.
- So, just write a double quote and the IDE will convert that into a two double quotes. Because, your message must be in between these double quotes.
- So, that's what printf expects (mong đợi).
- So, your message should be in between two double quotes.
- So now, in 'C' programming remember that every 'C's `executable statement` (câu lệnh thực thi) should end with `semicolon` (dấu chấm phẩy).
- So, here this is the body of the function.
- And in the body of the function we have `one 'C' statement` (một câu lệnh C). That is actually a call to the printf function.
- And this is a 'C' statement and it should end with semicolon.
- So, `otherwise` (nếu không thì) compiler will `throw erros` (ném/báo lỗi).
- So, that's why, let's end this statement with a semicolon.
- So, this is not true
- if you are coming from the background of Python let's say, so in Python it is not required, but in C, C++
- yes, every statement should end with a semicolon.
- So, after that, we need to do one more important thing that is we have to include a `standard library header file`
- Now about the header file and why we should include that and all those things will understand later.
- So, in the later part of the course we're also going to understand about the compilation process and `various` (nhiều) other things.
- But, remember that in this source file we have used a function called printf which is not written by us,
- it is given by the standard library of 'C'. And compiler should need to understand the `prototype` of that printf function. 
- And the prototype of that printf function is written in a file called header file and that header file name is stdio.h
- and we have to include that file into our project. 
- And now to include a file you have to use #include `directive` (chỉ thị). So now, it is written something like this #include.
- So, this is a directive. Which is used to `indicate` (biểu thị) inclusion of another file and that another file name stdio.h.
- This is written by the technical committee (ủy ban kỹ thuật) or the developers who develop the 'C' standard library.
- `Since` (bởi vì) it's the standard library header file, it `has to` (phải) be enclosed by these symbols `<>`
- So, this is a way you include stdio.h.
- So, this is a include `directive` (chỉ thị) and this is a file name,
- and since it is from standard library, so you have to use this a lesser than and greater than symbols. 
- It is fine
- So, you can also include a header file which is written by you.
- So, that is also possible and more on that will see later.
- Now let's compile and run our code. And for that, in this IDE there is only one button which will compile and run your code and you have to press this run button.
- Let's click over here. And here you can see that, it is compiling and the output is produced and it is successfully printed the text "Hello World" on the console. 
- So, you successfully completed the very first 'C' application.
- So, now I want you to do one small settings in this project. So, go to the settings here, and go to the
- So, just write this compiler argument. So, this is a compiler argument save temps, and click OK, and click done
- So, it has created so many files.
- So, these are the output files produced in the process of compilation. 
- Remember that, this is a main.c written by you, which is a source file, which is given to the compiler for compilation.
- And the first file which is produced `during` (trong lúc) the compilation is a pre processed file. So, that we call as `main.i`
- And here you can see that, main.i is nothing but the collection of your code 
- this is written by you and contents of the stdio.h. Now, you are main.c converted into main.i
- which is a huge file. Isn't it?
- So, your file had only 8 lines. But look at main.i, it now has 849 lines.
- So, what happened was here?
- So, when compiler saw this line that is stdio.h
- compiler included all the contents of this file into this main.c and then it converted (chuyển đổi) that file
- to main.i, which is a output of the `pre-processor` stage of the compilation process.
- And here, the compiler actually looks at the prototype of this function. So, which is written somewhere here.
- You have to search that. So here, that is no search option actually,
- so what I would do is, I would just copy this contents and here I will just search for printf.
- So, which  is right here.
- Just search for printf and just click on match whole word only.
- So, this is a prototype of the function printf.
- So, compiler want this `signature` (chữ kí), so this is also called as a function signature.
- So, that's a `purpose` (mục đích) why we added that stdio.h. So, first main.i is produced,
- then after that main.i is converted into main.s which is collection of assembly `instructions` (hướng dẫn).
- So, your higher level language is converted into a little lower level language that is called as assembly language. 
- So, `main.s` now assembly instructions are generated for your .c file. 
- And after that, this will be converted into a `machine code` and that we call as `main.o`.
- So, this is also called as `object file`. So, you can see that it is not possible to read the contents of this file, 
- because it contains the machine code.
- So, more on that will see later again and we will discuss all these things when we actually do programming on our target.
- So, that is our Embedded Target. At this point
- I just wanted to `briefly` (ngắn gọn) introduce the (`.i` -> `.s` -> `.o`) `intermediate` (trung cấp- trung gian) files. So, all these `intermediate` files you can get. 
- So, it is not required for each and every project. So, that's about the very first application
- Hello World and I will give you a small assignment (phân công công việc).
- So, you have to modify the program what we have just returned to print these messages.
- So, just try to think how you can able to achieve this and you can use two printf statements, no problem.
- So, just think how you can do this and I'll see you in the next lecture.

### 22. Print exercise
- So, printf actually never `causes` (khiến cho) cursor to move to the next line.
- `unless` (trừ khi) you mention the printf to do that
- let's give `couple of space` (một chút thời gian) here in order to `comprehend` (hiểu) this.
- And after that, when the next printf is executed the printing is actually continued from there `onwards`(tiến lên)
- So, that's the behavior a which you can notice from this code
- so you have to use an `escape character`. And in 'C' the escape character is `backslash` (\).
- So, now this is called as an `escape sequence` (chuỗi thoát). An escape sequence is collection of two characters. One is

