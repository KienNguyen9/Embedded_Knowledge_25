# Week 1 - Crypto Basic
# HASH - HMAC 
Đây là 2 thứ nền tảng căn bản nhất để làm việc với các Crypto Job

## 1.1 Hash - SHA256 
- Hash là một Service là Crypto Driver cung cấp
- SHA-256 là một service của Hash, biến bất cứ một data nào thành một chuỗi 256 bit (32-byte)

### Cách hoạt động:
- Nhận vào một mesage, trả về một chuỗi cố định có độ dài 256-bit 
- Không thể đảo ngược lại 
- Không cần `Key`

### Ví dụ:
Bước 1: Bạn có 1 chuỗi kí tự là: `Hello`
Bước 2: Bạn dùng SHA256
Bước 3: Bạn nhận được "2cf24dba5fb0a30e26e83b2ac5b9e29e1b161e5c1fa7425e73043362938b9824"

### Kết quả:
`hello` -> "2cf24dba5fb0a30e26e83b2ac5b9e29e1b161e5c1fa7425e73043362938b9824"

## 1.2 HMAC 
- Dùng để kiểm tra tính toàn vẹn của thông tin và đảm bảo nguồn gốc của nó
- Nhập vào `Key` và `Massage` cho ra `HMAC output`
- Ứng dụng: kiểm tra dữ liệu, `Key Derive` HKDF, MAC job trong autosar
      
Ví dụ: HMAC-SHA256

