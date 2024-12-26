# GDB (GNU Debugger)

Khi debug một chương trình chúng ta có thể dùng cách kỹ thuật sau:
- Dùng lệnh `print`
- Đặt `log` (nhảy tới điểm cuối của log để khoan vùng lỗi của chương trình)
Nhưng đây là các giải pháp tối cổ, trừ khi muốn lấy thông tin nhiều hơn 

# Install GDB

## Linux environment.
```SHELL
    sudo apt install -y gdb
    gdb --version
```
## Windown environment.
...

## How to compile a program using GDB

### Build 
```Shell
gcc -g -o binary scr_code.c
```
### Includes:
    - Start debugging
    - Set breakpoints
    - View source code
    - Single step debugging
    - View variables

### How to run
```SHELL
gdb ./binary
gdb
file ./binary 
```

## 3. Basic commad-lines

### Set break point
    ```Shell
    break {line number}
    break {function name}
    ```

### Delete break point
    ```Shell
    delete {breakpoint number}
    ```
### View source at break point
    ```shell
    list
    ```

### Run next command line
    ```shell
    next {line number}
    next 
    ```

### Run inside the function body
    ```shell
    step
    ```

### Back to the top of function
    ```shell
    return    
    ```

### Continue execution until the next breakpoint or the end of program
    ```shell
    continue
    ```

### Manipulating variables  
    ```shell
    display {var name}
    print {var name}
    print &{var name}
    ptype {var name}
    set variable {var name} = {value}
    ```

## 4. Debug coredumper
### 4.1 The problems
### 4.2 Fixing core dumps