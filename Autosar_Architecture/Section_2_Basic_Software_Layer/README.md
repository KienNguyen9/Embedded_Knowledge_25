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


# 3. Software Components (SWC)
## 3.1 Định nghĩa SWC
1. Bắt đầu với yêu cầu

“We have to get the vehicle speed from an external speed sensor. If the speed is more than a calibrated set point, then the following action should be taken. Cut off the injector immediately and stop the vehicle. Log an error through the diagnostics module. In parallel, the application should calculate the maximum speed that the vehicle was driven and save this data during shutdown. The same data should be restored to the application when the ECU is powered up in the next driving cycle.”

👉 Yêu cầu:

Đọc tốc độ từ sensor tốc độ xe.

Nếu tốc độ vượt ngưỡng cài đặt → ngắt kim phun ngay (cắt nhiên liệu, dừng xe).

Ghi lỗi qua module chẩn đoán.

Tính tốc độ tối đa trong chu kỳ lái → lưu khi tắt máy, khôi phục khi bật ECU lại.

2. Đầu vào từ cảm biến

“Let's assume that the sensor input is already available on a digital IO pin of the controller. So now from the application point, we first need an ECU abstraction software component that can read the corresponding IO Pin and calculate the count information of the pulses that the speed sensor provides.”

👉 Sensor tốc độ thường xuất xung (pulse).

Tín hiệu này vào IO pin của MCU.

Cần 1 ECU Abstraction SWC để đọc chân IO này, chuyển xung → thông tin đếm (pulse count).

Lý do: Application không được phép đọc trực tiếp IO, mà phải qua abstraction.

3. Xử lý sensor

“we introduce a sensor actuator software component here to interact with the ECU abstraction layer and get the sensor pulses. The sensor actuators software component further calculates the speed … in different units.”

👉 Tiếp theo:

Sensor/Actuator SWC lấy dữ liệu pulse từ ECU Abstraction.

Thực hiện tính toán: số xung → tốc độ (km/h, mph…).

Cung cấp giá trị tốc độ đã xử lý cho Application SWC.

4. Logic ứng dụng chính

“we need an application software component to perform the core logic … cut off the engine when it crosses a particular speed.”

👉 Tạo Application SWC:

Nhận dữ liệu tốc độ từ Sensor SWC.

So sánh với giá trị ngưỡng (calibration).

Nếu vượt → gửi lệnh ngắt kim phun.

5. Calibration parameter

“we need a calibration parameter software component … to decide the high speed cutoff value, and this must be tune-able during production.”

👉 Cần thêm Calibration Parameter SWC:

Giữ giá trị ngưỡng tốc độ.

Có thể thay đổi (tuning) khi hiệu chỉnh xe ở nhà máy.

6. Ngắt kim phun ngay lập tức

“Hence, we introduce a complex device driver to make the cutoff operation faster … set the corresponding IO Pins of the controller, so the injector is immediately cut off.”

👉 Vì thao tác ngắt kim phun phải cực nhanh (không delay):

Dùng Complex Device Driver (CDD).

Application SWC → gửi lệnh cho CDD → CDD trực tiếp điều khiển IO pin → ngắt kim phun.

7. Ghi lỗi chẩn đoán

“we would need the help of the base software diagnostic manager … we introduce a BSW service software component for diagnostics.”

👉 Khi vượt tốc → phải log lỗi.

Application SWC gửi thông tin đến Diagnostic Service SWC (thuộc BSW).

Diagnostic Manager xử lý việc lưu, báo cáo lỗi.

8. Lưu tốc độ tối đa

“we introduce a NVBlock software component … which further gets the data from the application software component and passes on to the NVM manager … handled from the BSW layers like the memory abstraction layer.”

👉 Ứng dụng phải lưu tốc độ tối đa (trong chu kỳ lái).

Dùng NV Block SWC để tạo vùng nhớ không mất (NVM).

NV Block SWC chuyển dữ liệu đến NVM Manager (thuộc BSW).

ECU có Flash ngoài → Memory Abstraction Layer của BSW xử lý lưu vào đó.

Khi khởi động lại → NVM Manager tự động khôi phục dữ liệu, trả về Application SWC.

9. Kết luận

“Hope it was clear on how to choose the right software components for our application.”

👉 Qua ví dụ, ta đã chọn đủ loại SWC cần thiết:

ECU Abstraction SWC → đọc IO.

Sensor/Actuator SWC → tính tốc độ.

Application SWC → core logic.

Calibration SWC → ngưỡng tốc độ.

CDD → ngắt kim phun ngay.

Diagnostic SWC → ghi lỗi.

NV Block SWC → lưu tốc độ tối đa.


# 4 Ports and Port Interfaces
1. Khái niệm Port

“Ports are the connecting points for communication … They are responsible for carrying information across the components.”

👉 Port giống như cổng kết nối để các SWC trao đổi dữ liệu với nhau.

Không có port thì SWC không giao tiếp được.

Mỗi port phải có một interface để quy định nó truyền cái gì và truyền như thế nào.

2. Các loại Port

“three possible Port types: P-Port, R-Port, PR-Port”

P-Port (Provider Port): nơi cung cấp thông tin. Ví dụ: Sensor SWC có P-Port để xuất dữ liệu tốc độ.

R-Port (Receiver Port): nơi nhận thông tin. Ví dụ: Application SWC có R-Port để nhận dữ liệu tốc độ.

PR-Port (Provider-Receiver Port): vừa cung cấp vừa nhận dữ liệu cùng một loại. Ít dùng hơn, nhưng có khi cần trao đổi 2 chiều.

👉 Hiểu đơn giản:

P = phát,

R = thu,

PR = vừa phát vừa thu.

3. Các loại Interface

“On what kind of information is actually carried … defined by the port interfaces.”

AUTOSAR quy định 6 loại interface.

a) Sender-Receiver Interface

Dùng để trao đổi dữ liệu (giống như truyền biến).

Dữ liệu có thể là kiểu cơ bản (int, float, bool) hoặc phức tạp (struct, array).

Muốn gửi → SWC cần có P-Port với SR interface.

Muốn nhận → SWC cần có R-Port với SR interface.
📌 Đây là loại phổ biến nhất.
Ví dụ: Sensor SWC (P-Port) → Application SWC (R-Port).

b) Client-Server Interface

Dùng khi một SWC gọi hàm của SWC khác.

Giống cơ chế Remote Function Call.

Server = SWC sở hữu hàm (Provider Port).

Client = SWC cần gọi hàm (Receiver Port).
📌 Cũng rất phổ biến, thường dùng khi cần cung cấp dịch vụ/hàm.
Ví dụ: Application SWC gọi hàm GetDiagnosticStatus() từ Diagnostic SWC.

c) NV Data Interface

Dùng cho dữ liệu Non-Volatile (không mất khi tắt máy).

Chủ yếu dùng bởi NV Block SWC để giao tiếp với NVM Manager.
Ví dụ:

Application SWC (P-Port) ghi dữ liệu tốc độ tối đa → NV Block SWC (R-Port).

Khi khôi phục → NV Block SWC (P-Port) → Application SWC (R-Port).

d) Parameter Interface

Dùng để chia sẻ tham số hiệu chỉnh (calibration).

Thường dữ liệu này là hằng số hoặc chỉ chỉnh khi production, không thay đổi lúc runtime.
Ví dụ: Calibration SWC cung cấp giá trị “giới hạn tốc độ” cho Application SWC.

e) Mode Switch Interface

Dùng khi hệ thống có các trạng thái (modes) đã định nghĩa trước.

Ví dụ: Đèn xe có chế độ OFF / Low Beam / High Beam.

SWC quyết định mode → P-Port.

SWC sử dụng mode để hành động → R-Port.

f) Trigger Interface

Dùng để kích hoạt một hành động khi có sự kiện xảy ra.

Ví dụ: Một SWC quyết định trigger → P-Port.

SWC khác có hành động cần trigger → R-Port.

Chỉ khi có sự kiện, hành động mới chạy.

4. Kết luận

Có 3 loại Port: P, R, PR.

Có 6 loại Interface: SR, CS, NV, Parameter, Mode Switch, Trigger.

Trong thực tế dự án:

Sender-Receiver và Client-Server là quan trọng nhất (chiếm 80–90%).

Các loại khác dùng cho tình huống đặc biệt (NVM, Calibration, Mode, Trigger).

👉 Tóm lại: Port + Interface = Ngôn ngữ giao tiếp giữa các SWC.


# 5. Compositions - Connectors
1. "Composition is a software component type that clusters or aggregates other software components or compositions"
👉 Composition là một loại Software Component dùng để gom nhóm hoặc kết hợp nhiều Software Component hoặc nhiều Composition khác.
→ Nghĩa là Composition = “container” có thể chứa SWC hoặc cả Composition lồng nhau.

2. "In simple terms, a composition could be understood as a container that can hold a group of software components."
👉 Nói đơn giản, Composition giống như cái hộp, trong đó có thể chứa một nhóm các Software Component.

3. "Now the connectors"
👉 Giờ ta nói về connector – các “dây nối” giữa các thành phần.

4. "We have been seeing from the last examples that communication is established through ports and data is passed from the provider port to the receiver port."
👉 Ở các ví dụ trước, ta thấy việc giao tiếp được thực hiện qua port: dữ liệu đi từ provider port đến receiver port.

5. "In a live system, you might have thousands of provider ports and receiver ports and who's connected with whom is decided from the connector configuration."
👉 Trong hệ thống thực tế có thể có hàng ngàn provider và receiver port. Việc port nào nối với port nào được quyết định bởi cấu hình connector.

6. "A connector can be of either one of these three types assembly connector, delegation connector and Pass through Connector."
👉 Có 3 loại connector: Assembly, Delegation, và Pass-through.

7. "We shall see how to use these connectors with an example."
👉 Ta sẽ xem ví dụ để hiểu cách dùng từng loại connector.

8. "Let's take two software components that has a sender receiver and a client server communication with the two provider and two receiver ports."
👉 Giả sử có 2 SWC, mỗi SWC có cả sender-receiver và client-server với 2 provider port và 2 receiver port.

9. "And we shall place them under a composition called Composition One."
👉 Ta đặt 2 SWC này vào trong một Composition gọi là Composition 1.

10. "To connect these two ports, we can use a simple assembly connector."
👉 Để nối các port này, ta dùng assembly connector.

11. "An assembly connector is used to connect to ports within the same composition."
👉 Assembly connector chỉ dùng để nối port trong cùng một composition.

12. "This is the assembly configuration will look like."
👉 Đây là cách cấu hình assembly connector trong file ARXML.

13. "An Assembly connector will find a provider and a receiver port within it."
👉 Assembly connector sẽ kết nối 1 provider port với 1 receiver port.

14. "Above in the configuration, we could see the composition software component for composition one created, and this encapsulate these two Software components, SWC 1 and SWC 2."
👉 Trong cấu hình, Composition 1 được tạo ra và bao bên trong nó có SWC1 và SWC2.

15. "Let's consider we have another component in the system called software component 3, and this is placed within a new composition called Composition 2."
👉 Giả sử ta có thêm SWC3, đặt trong một Composition khác gọi là Composition 2.

16. "If you have a closer look, we could notice that composition 2 encapsulates composition 1 as well, like defined a composition, can have both components and compositions."
👉 Nhìn kỹ, Composition 2 có thể chứa Composition 1. Nghĩa là composition có thể lồng nhau: chứa SWC hoặc chứa cả composition khác.

17. "Again, the same example. We have two ports from software Component 3 to be connected to component 1 and component 2."
👉 Trong ví dụ, SWC3 cần kết nối port với SWC1 và SWC2.

18. "We can't make a direct assembly connection here since both as different parent composition's."
👉 Nhưng không thể nối trực tiếp bằng assembly connector, vì SWC3 thuộc Composition 2, còn SWC1 & SWC2 thuộc Composition 1 → khác parent composition.

19. "The rule for using an assembly connector is that, the ports to be connected from software components should have the same parent composition."
👉 Quy tắc: Assembly connector chỉ nối được các port nếu chúng cùng một parent composition.

20. "From our example, the parents of the Component 1 and software component 2 are Composition 1, software component three's parent is Composition 2 and hence an assembly cannot be used here."
👉 Trong ví dụ: SWC1 & SWC2 có parent là Composition 1, SWC3 có parent là Composition 2 → không thể dùng assembly connector trực tiếp.

21. "To do this will have to extend the existing ports to the outer composition using delegation Connector's."
👉 Để kết nối, ta phải đưa port của SWC1 & SWC2 ra ngoài Composition 1 bằng delegation connector.

22. "So component 1 and 2 have their ports extended to the composition using a delegation connector and now composition 1 has these ports defined in it."
👉 Khi đó, Composition 1 sẽ có các “mirror port” tương ứng, nhờ delegation connector.

23. "A sample configuration on how it looks like the configuration file is here."
👉 Đây là ví dụ trong file cấu hình.

24. "A delegation connector extends the inner port from the components to the outer composition."
👉 Delegation connector dùng để mang port của SWC bên trong ra composition cha.

25. "A new mirror port is also created on the outer composition and the delegation connector connects this outer port to the inner port of the component."
👉 Khi đó, một “mirror port” được tạo trong composition cha, và delegation connector sẽ nối nó với port bên trong SWC.

26. "Let's look again now if the connection is possible."
👉 Giờ ta kiểm tra lại xem có thể kết nối chưa.

27. "The opposite connecting ports of the software component 3 are now available within the same parent, and we can now have an assembly connector between composition 1 and software component 3."
👉 Lúc này, nhờ delegation, port của SWC1 & SWC2 đã “lộ ra ngoài” trong Composition 1 → giờ chúng cùng parent với SWC3 (Composition 2) → ta có thể nối bằng assembly connector.

28. "The connection is complete now."
👉 Kết nối đã hoàn tất.

29. "An additional difference between these two connectors are that an assembly connector connects a provider and a receive port, but a delegation connector connects the same port, either provider to provider or receiver to receiver."
👉 Điểm khác biệt:

Assembly nối Provider ↔ Receiver.

Delegation nối Provider ↔ Provider hoặc Receiver ↔ Receiver (chỉ “phản chiếu” port ra ngoài).

30. "Every port connection should finally end with an assembly connector configuration."
👉 Tất cả kết nối cuối cùng đều phải được “kết thúc” bằng một assembly connector.

31. "Hope it's clear on when to use an assembly or a delegation connector."
👉 Hy vọng đã rõ khi nào dùng assembly, khi nào dùng delegation.

👉 Tóm ngắn:

Composition = cái hộp chứa SWC hoặc composition khác.

Assembly connector = nối Provider ↔ Receiver, nhưng phải cùng parent composition.

Delegation connector = đưa port từ SWC ra composition cha, tạo mirror port, để cuối cùng vẫn có thể dùng assembly.

Mọi kết nối luôn kết thúc bằng assembly connector.


# 6. Runables and Events
1. Khái niệm Runnable

"Runnables or runnable entities are the smallest fragments of code that's defined on a component."
👉 Runnable là đơn vị code nhỏ nhất trong 1 SWC.
→ Nó chính là hàm (function) trong file C mà AUTOSAR RTE có thể gọi.

"Each function on the C file will have to be defined as Runnable in the Autosar configuration, and it should further specify the interface access within it."
👉 Mỗi hàm trong C file cần được định nghĩa thành Runnable trong ARXML (configuration), đồng thời mô tả nó truy cập port/interface nào (đọc/ghi dữ liệu gì).

"Runnable entities together with events configured are scheduled by the operating system."
👉 RTE + OS sẽ gọi Runnable dựa trên Event (VD: khi có data, khi timer kích hoạt).

2. Một số quy tắc

"A composition software component or a parameter software component cannot have a runnable since they don't have an associated C file."
👉 Composition SWC hoặc Parameter SWC không có Runnable, vì bản chất chúng không chứa code (chỉ là container hoặc parameter).

3. Ví dụ

C file có 4 hàm: Sum(), Difference(), Multiplication(), Division().
👉 Mỗi hàm này được coi là 1 Runnable.
Trong ARXML phải định nghĩa 4 runnable entity tương ứng.

Trong config, Runnable Entity sẽ chứa:

DataReadAccess → đọc từ các Receiver port.

DataWriteAccess → ghi ra Provider port.

Symbol → tên function trong C code (Sum, Difference…).

4. Cách giao tiếp (Explicit vs Implicit)

Explicit Communication: dữ liệu truyền thẳng giữa Sender/Receiver. Không đảm bảo tính nhất quán (consistency).

Implicit Communication: RTE tạo buffer riêng cho từng receiver, đảm bảo mỗi receiver nhận dữ liệu nhất quán.

👉 Trong config:

DataReadAccess / DataWriteAccess → implicit.

DataReceivedByArgument / Value → explicit.

DataSendPoint → queued communication (dùng queue).

5. Các loại access khác trong Runnable

Parameter Access: chỉ đọc Calibration Parameter.

Mode Access / Mode Switch Point:

Nếu Runnable đọc mode → Mode Access Point.

Nếu Runnable set mode → Mode Switch Point.

Local Variable Access (IRV – Inter Runnable Variable):

Đọc/Ghi biến nội bộ trong SWC.

Không qua port, chỉ có scope trong component.

Client-Server Access:

Nếu gọi server đồng bộ → SynchronousServerCallPoint.

Nếu gọi server bất đồng bộ → AsynchronousServerCallPoint + ResultPoint.

Triggers:

Có thể là trigger nội bộ hoặc từ ngoài, gắn với Trigger Port.

6. Thuộc tính chung của Runnable

Can be concurrent → cho phép Runnable chạy song song hay không.

Symbol → phải khớp với tên hàm trong C code, để RTE/OS biết gọi đúng function.

7. Kết luận

Runnable config phải mô tả:

Tên hàm (Symbol).

Port/Interface mà nó đọc/ghi.

Kiểu giao tiếp (implicit, explicit, queued).

Các loại access khác (Parameter, Mode, IRV, Client-Server, Trigger).

Thuộc tính runtime (concurrent, scheduling event…).

👉 Nói ngắn gọn: Runnable = function trong SWC mà AUTOSAR RTE có thể gọi → và config Runnable chính là “map” giữa function trong code với các port/interface + cách OS sẽ trigger nó.