# Autosar Architecture

## Section 1: Introduction

### 1.1 Intro AutoSar in nowday.
Autosar is a demanding standard in the automotive industry, which has become a must know knowledge nowadays.
Autosar architecture is complicated and not an easy topic to understand at the beginning, but if explained in a better way it's quite easy.
- Where do we use AutoSar
- How apply them

The layer of AutoSar
- BSW layer
- Autosar Interfaces
- ASW (Aplication Software)
    - Software components and types
    - Port and port interfaces
        - Sender reciver interface and client server interface
    - Compositions and Connectors
    - Runnables and Events
    - Application software Consolidated summary
- MCAL Layer  
- Autosar RTE Layer(Run-time environment)
    - RTE's API for Sender Reciver and Client-Server Interface\
    - RTE Layer Communication and Scheduling
    - RTE Generator and Tools overview
- Autosar methodologys 
- Design an AutoSar software

### 1.2 How  to approach Autosar 

There are 3 theory:
    1. BSW
    2. ASW
    3. RTE


Demo: Implement
    1. BSW (MCAL, ECU-Abstrection)
    2. ASW
    3. RTE

### 1.3 Introduction to Autosar
Autosar is an Automotive Open System Architecture, which was developed in 2003.

Example, the engine control unit controls the vehicle injection, ignition extra.
Likewise, there are many control units available in the vehicle, which will be calling it as ECUs

The first, web site we can refer 
`https://www.autosar.org/standards/classic-platform`

About Autosar:
- 9 core partners (GM, Bosch, Toyoda, GM, BMW, Peugeot, VW, Ford, Daimler)
- 39 premium members 
- Development member (Small Companys)
- Associate members (followers)

### 1.4 Neede for AutoSar:
- Easy handling: handling increased complexity of automotive software
- Abstraction: Abstraction of hardware from software, make development more flexible
- Reuseability: reuse software modules across customers
- Fast to market: astablish development distribution among suppliers
- Competition: compete on innovative functions with increased design flexibility

## Section 2 - Base software

### 2.1 Base Software overview

![alt text](.//Images//three_biggest_layer.png)

The Autosar layered architecture is offering (cung cấp) all the mechanisms needed (các cơ chế cần thiết) for software and hardware independence (tính độc lập).
It distinguishes (phân biệt) between three main software layers, which run on a microcontroller.

1. Application Layer
    
    Which be called as ASW
    Functional modules (Application software) that communicate with RTE

2. RTE (Run-time env)
    
    Middleware which realizes the communication between the software components and BSW

3. BSW (Base SW)
    Standardize  SW modules that are necessary for functioning of higher software layer.

4. Micro-controller

#### Note: 
The main concept of standardised ECU SW achitecture is the separation of hardware independent application SW and  HW oriented (SW theo một HW cụ thể) BSW by means of a SW abstraction layer RTE form a very clear separation here
The upper side of the RTE is hardware independent, this abstraction layer enables the development of customer specific and competitive SW app without the HW dependency characteristics of AR-SW Architecture, are the scalability of ECU SW for several car lines and variants.

#### For example:
    if a vihicle manufacturer has different variant of vehicles it is flexible enough to reuse this developed app SW across this vihicle ECU's since its HW independent.
    Meaning a customer can spend at one time development cost to dev an app like parking assist system, and resuse it on different HW of all car variants.
    It also gives the possibility to distribute app or the functional SW modules arcoss ECU's
    And the ability to integrate SW modules from different sources
    On the lower side of RTE, it enables the standardisation and customer independence to the BSW.
    The BSW developers can concentrate on the HW specific developments and need not worry or consider about the App layer

The basic software within (trong) the software architecture is further(tiếp tục) divided (chia) into the following layers
Trong kiến trúc AutoSar, BSW được chia tiếp tục thành các lớp sau.

the `Service` layer, The `ECU abstraction` layer and the `microcontroller abstraction` layer or the `MCAL` layer.

![alt text](.//Images//bsw_layer.png)

- The separation (sự tách biệt) of the application layer from the basic software is released by the RTE includes the control of the data exchange between these layers.
- Sự tách biệt của lớp `App` và lớp `BSW` được tạo ra là nhờ vào lớp `RTE` (Kiểm soát việc trao đổi dữ liệu của 2 lớp kia)
- The `complex device driver` is a specialized layer provided from Autosar in case the application needs to access the hardware in a faster way.
- It's mainly (chủ yếu) when we have time critical (chú trọng thời gian) features where the communication passing through differentBSW layers would consume (tốn) time.
-It also acts as a layer to access a few standardized interfaces from the basic software.








