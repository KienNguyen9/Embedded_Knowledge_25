# Advanced C Programming

## 1. Introduction 
### 1.1 C99 standard
C99 (ISO/IEC 9899:1999): Là phiên bản chuẩn hóa ngôn ngữ C, nó được thiết kế để thay thế C90. C99 giới thiệu nhiều tính năng mới và cải tiến, chẳng hạn như:
    - Khởi tạo mảng với cú pháp mới: Cho phép khởi tạo mảng trong khi khai báo (ví dụ: int arr[] = {1, 2, 3};).
    - Hỗ trợ kiểu dữ liệu mới: Các kiểu dữ liệu như long long int, bool, và các kiểu số thực như float_t, double_t.
    - Hàm inline: Cho phép viết hàm inline, giúp tối ưu hóa mã nguồn.
    - Khai báo biến trong khối mã: Cho phép khai báo biến ở bất kỳ đâu trong hàm, không cần phải khai báo tất cả biến ở đầu hàm như trong C90.
### 1.2 C11 standard 
C11 (ISO/IEC 9899:2011): Là phiên bản cập nhật của C99, chủ yếu tập trung vào việc cải thiện hiệu suất, tính tương thích, và thêm một số tính năng hiện đại hơn:
    - Đoạn mã đồng thời (Multithreading): C11 giới thiệu các tiện ích để hỗ trợ lập trình đa luồng, ví dụ như thư viện stdatomic.h và các tính năng như atomic và threads.
    - Hỗ trợ xử lý lỗi tốt hơn: C11 bổ sung một số cải tiến về xử lý lỗi, bao gồm việc sử dụng macro _Noreturn để chỉ ra rằng một hàm không trả về giá trị.
    - Các cải tiến về an toàn bộ nhớ: Thêm các hàm như aligned_alloc() để hỗ trợ cấp phát bộ nhớ với các căn chỉnh cụ thể.
    - Khả năng tùy chọn: _Static_assert: C11 bổ sung khả năng kiểm tra điều kiện trong thời gian biên dịch thông qua _Static_assert, thay thế cho các kiểu kiểm tra lỗi tại thời điểm chạy.
    - Tính tương thích với C99: C11 sửa chữa một số vấn đề và hạn chế tồn tại trong C99, giúp tăng tính ổn định.

## 2. Installing required software
