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
    if a vihicle manufacturer has different variant of vehicles it is flexible enough to reuse this developed app SW across 
    this vihicle ECU's since its HW independent.
    Meaning a customer can spend at one time development cost to dev an app like parking assist system, and resuse it on
    different HW of all car variants.
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
- It also acts as a layer to access a few `standardized interfaces` from the basic software.
- Nó hoạt động như một lớp `chuẩn hóa truy cập` từ lớp BSW.

- A quick summary on (tóm tắt về) the layered architecture.
1. The Applications Software layer is mostly hardware independent Communication between application softwares or the application to the basics software layer is only through RTE.
2. The BSW is divided into three major layers and complex drivers. The three major layers consists of (bao gồm) services, ECU abstraction and microcontroller abstraction layer.

-----

- Basic software is the standardized software layer, which provides services to the software components.
- BSW là lớp chuẩn hóa, nó cung cấp các dịch vụ tới các SW components

- It does not fulfill any functional job and is situated below the runtime environment.
- Nó không thực hiện công việc chức năng nào và nó nằm dưới lớp RTE

- It contains `standardized components` and ECU's `specific components`.
- Nó chứa các thành phần tiêu chuẩn và thành phần cụ thể cho ECU

- Components that are interfacing directly to the microcontroller are called the ECU `specific components`,
- Các thành phần giao tiếp trực tiếp với vi điều khiển gọi thành phần cụ thể 

- which is the `operating system`, microcontroller abstraction `MCAL` layer and a complex `device drivers`.
- Đó là `OS`, lớp MCAL và Complex divice driver

- The other BSW modules, like the `Memory`, `Communications Services`, etc. are called the standardized components
- Những modules khác như là Memory, các module giao tiếp,... được gọi là thành phần chuẩn hóa

#### Microcontroller Abstraction Layer. 
- The microcontroller abstraction layer is the lowest layer of the basic software.
- Lớp MCAL là lớp thấp nhất trong BSW
- It contains drivers with direct access to the microcontroller, internal peripherals and memory mapped microcontroller external devices.
- Nó chứa các driver truy cập trực tiếp tới microcontroller, thiết bị ngoại vi bên trong vi điều khiển và ngoại vi bên ngoài được ánh xạ bộ nhớ đến VĐK
- Access (truy cập) to the microcontroller registers is routed (định tuyến) through the microcontroller abstraction layer based on these driver's.
- Nó truy cập tới thanh ghi VĐK được định tuyến thông qua MCAL dựa trên các drivers.
- MCAL is a hardware specific layer that ensures (đảm bảo) a standard interface to the basic software.
- It manages the microcontroller peripherals (ngoại vi) and provides the components of the basic software with microcontroller independent values.
- MCAL implements notification mechanisms to support the distribution of commands, responses and information to process.
The microcontroller abstraction layer is subdivided into four parts:
1. IO drivers has the drivers for analog ADC, PWM, Digital IO etc.
2. The communication drivers for easy on board, like SPI, I2C and vehicle communication like CAN and LIN.
3. The memory drivers for On-Chip memory devices example internal flash, internal EEPROM and memory mapped external memory devices like External Flash.
4. The microcontroller drivers for Internal Peripherals example watchdog block unit and functions with direct access to microcontroller. 
##### Summary: 
    - Là lớp thấp nhất của BSW, truy cập trực tiếp tới ngoại vị trong và ngoài, làm cho lớp trên nó độc lập với phần cứng

#### The ECU abstraction layer.
- The easy abstraction layer provides a software interface to the electrical values of any specific ECU in order to decouple higher level software from all underlying hardware dependencies.
- They are further subdivided into IO hardware abstraction, communication abstraction, memory abstraction and on board device abstraction.
- IO Hardware Abstraction is a group of modules which abstracts from the location of the peripheral IO devices like on-chip or on-board and the ECU hardware layout example, microcontroller pin connections and signal level inversions.
- The task of this group of module's is to represent IO signals as they are connected to the ECU hardware.
    Example current, voltage, frequency and to hide ECU hardware and Layout properties higher software layers 
- The communication hardware Abstraction is a group of modules which abstracts from the location of communication controllers and the ECU hardware layout. 
- For all communication systems, a specific communication hardware abstraction is required. For example for LIN, CAN, Flexray etc.
- Let's consider an example where an ECU has a microcontroller with internal controls and an additional on board ASIC with 4 CAN controllers.
- The CAN IC is connected to the microcontroller via SPI.
- The communication drivers are accessed via BUS specific interface, example can interfaces.
- That means the access to the controller should be regardless of whether it is located inside the microcontroller externally to it or whether it is connected via SPI.
- The task of this group of module's is to provide equal mechanisms to access a BUS channel regardless to its location, either on-chip or on-board. 
- Next, the memory hardware abstraction layer is a group of modules which abstracts from the location of peripheral memory devices, either on chip or on board, and the ECU hardware layout.
- Example, an on Chip EEPROM and external EEPROM devices should be accessible via an equal mechanism.
- The memory drivers are accessed via memory specific interfaces called EPROM interface.
- The task of this group of module's is to provide equal mechanisms to access internal on chip or external on board memory devices.
- Next, the on board device abstraction contains drivers for ECU on board devices, which cannot be seen as sensors or actuators like system basic chip, external watchdogs, etc..
- Those drivers access the ECU on both devices via the microcontroller abstraction layer.
- The task of this group of module's is to abstract from ECU specific on board devices.
- Upper to the abstraction layer comes the service layer that consists of three different parts.
##### Summary: 
    - Offer APIs to access internal or external peripherals
    - Make higher layer independent of ECU Hardware

#### Service Layer (Os service, Memory service, Com service)

- Communication services, Memory services and systems services.
- The communication services are a group of modules for vehicle network communication like CAN, LIN, Flexray and MOST.
- They are interfacing with the communication drivers via the communication hardware abstraction.
- The task of this group of module's is to provide a uniform interface to the vehicle network for communication between different applications to provide uniform services for network management,
- To provide a uniform interface to the vehicle network for diagnostic communication and to hide protocol and message properties from the application.
- Next, the memory services are a group of modules responsible for the management of nonvolatile read or write from different memory drivers.
- The NVRAM manager provides a RAM mirror as a data interface to the application for fast read access.
- The task of this group of module's is to provide nonvolatile data with the application in a uniform way, to abstract memory locations and properties and to provide mechanism for nonvolatile data management, like saving, loading, check sum protection and verification, reliable storage, etc..
- Next, the system services are a group of modules and functions which can be used by modules of all layers
- Examples are realtime operating system, error management and library functions like CRC, Interpolation,etc.
- Some of these services are microcontroller dependent, like the operating system.
- ECU hardware are application dependent, like ECU state manager, diagnostic communication manager.
- The task of this group of module's is to provide basic services for application and basic software modules.
##### Summary: 
    - Provices basic services to RTE and App layer
    - Includes Os, Communication, Memory, Diagnostic services



### 2.2 Autosar interfaces

#### 1. AUTOSAR Interface

Định nghĩa: Đây là giao diện tổng quát (generic), được sinh ra dựa trên cấu hình (configuration).

Được cung cấp bởi RTE (RunTime Environment).

Mục đích: Làm cầu nối giữa:

Application Software (ASW) ↔ Application Software khác

Application Software (ASW) ↔ Base Software (BSW, như Hardware Abstraction Layer hoặc Complex Device Driver).

Ví dụ:
Một phần mềm ứng dụng muốn đọc tín hiệu cảm biến (input) hoặc ghi tín hiệu ra cơ cấu chấp hành (output). Nó sẽ gọi API được RTE sinh ra (theo config).
→ Kiểu như:

SensorValue = Rte_Read_SensorInput();
Rte_Write_ActuatorOutput(Command);


API này không viết tay mà được RTE tự động tạo từ file cấu hình.

#### 2. Standardized AUTOSAR Interface

Định nghĩa: Đây cũng là AUTOSAR Interface, nhưng là loại được tiêu chuẩn hóa sẵn trong AUTOSAR (không phải tự config ra).

Dùng để: Application Software truy cập các dịch vụ chuẩn do các BSW module cung cấp (ở Service Layer).

Ví dụ:

ECU State Manager (ECU trạng thái: bật/tắt, sleep/wakeup).

Diagnostic Manager (xử lý chẩn đoán lỗi).
→ App software có thể gọi trực tiếp các service này thông qua standardized AUTOSAR interface mà không cần tự định nghĩa.

#### 3. Standardized Interface

Định nghĩa: Đây là các API viết bằng C đã được AUTOSAR định nghĩa sẵn, dùng để giao tiếp giữa:

Các module BSW với nhau,

RTE ↔ Hệ điều hành (OS),

RTE ↔ BSW Communication Module.

Ví dụ: Ở MCAL (Microcontroller Abstraction Layer), AUTOSAR đã định nghĩa sẵn hàm để đọc một chân IO:

Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);


Đây là standardized interface vì nó đã có sẵn trong chuẩn AUTOSAR.

Mục đích: Đảm bảo mọi vendor (Bosch, Continental, Valeo, …) đều viết driver theo API chuẩn này → Tạo tính tương thích.

#### 🔑 Tóm lại (cho dễ nhớ):

AUTOSAR Interface → Sinh ra từ config, kết nối App ↔ App hoặc App ↔ BSW.

Standardized AUTOSAR Interface → Đã chuẩn hóa, cho App gọi dịch vụ BSW (như diagnostics, ECU manager).

Standardized Interface → API C chuẩn, cho BSW ↔ BSW, hoặc RTE ↔ BSW/OS.

#### 👉 Nói ngắn gọn:

AUTOSAR Interface = linh hoạt, sinh ra từ config.

Standardized AUTOSAR Interface = chuẩn, dành cho App ↔ Service Layer.

Standardized Interface = API C chuẩn, dành cho BSW nội bộ hoặc RTE ↔ BSW.


### Complex device driver:
- The next is the complex device driver, which implements complex sensor and actuator control with direct access to the microcontroller using specific interrupts and to access complex microcontroller peripherals.
- Its task is to fulfill the special functional and timing requirements for handling complex sensors and actuators like injection control, electrical valve control, etc..
- Further, the complex device drivers will be used to implement drivers for hardware, which is not supported by Autosar
- If for example, a new communication system will be introduced in general, then no Autosar drivers will be available.
- To enable the communication via this media, the driver will be implemented inside the complex device.
- In case of a communication request via that media, the communication services will call the complex device driver instead of the communication hardware abstraction to communicate.
- This is a summary of all the BMW modules that are available. 
##### Summary: 
    - Direct interaction-HW to RTE
    - Used for high time constraint apps
    - Cases which are not specified by AutoSar