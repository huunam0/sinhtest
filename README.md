# SINHTEST v1.1
Trình sinh test cho một bài toán để up lên trình chấm tự động dmoj / oj.vnoi.info hoặc cho Themis

## Chuẩn bị ban đầu

1. Cài trình biên dịch cho **C++**, có thể dùng luôn cái đi kèm với [CodeBlock](https://drive.google.com/file/d/19jk4zx5ZBlLcmLPqW_0ZfHbAPZWd2VIO/view) hoặc [Themis](https://drive.google.com/file/d/1Zz3uXuTtG51N579zSmhtqWslgI82x8pH/view) cũng được.
2. Thêm đường dẫn đến **mingw** vào biến môi trường **PATH** để có thể gọi lệnh **g++** ở bất kì đâu.
3. Tải trình nén tệp, VD [zip](http://gnuwin32.sourceforge.net/packages/zip.htm)

## Hướng dẫn nhanh

1. Sửa 3 tệp sau:
+ **sinh.cpp** : chương trình sinh 1 test. Chương trình này nhận 2 tham số từ dòng lệnh là giới hạn nhỏ nhất và giới hạn lớn nhất của n.
+ **input.bat** : kịch bản sinh bộ test. Có thể sửa trong tệp **sinh.xlsx** rồi copy vào đây.
+ **solution.cpp** : code mẫu của bài toán, nhận dữ liệu từ bàn phím và viết ra màn hình.
2. Nháy kép vào tệp **all.bat** là xong.




## Các tệp kết quả

+ **tests.zip** gồm input và cả output để upload ngay lên oj.vnoi.info
+ **inputonly.zip** chỉ gồm riêng input, để upload lên CF 

[Video Hướng dẫn](https://www.youtube.com/watch?v=vyTOUv92PQM)

## Sinh test cho themis
Để sinh test cho Themis, bạn sửa đổi như sau:
+ Mở tệp **all.bat** bằng notepad và xoá dòng 8 đi (chỉ làm 1 lần);
+ Mở cửa sổ **Command Prompt** tại thư mục **sinhtest**;
+ Chạy lệnh **thn2Themis.bat mabai**;
+ Chạy lệnh **xoa.bat** để xoá các tệp input, output.

---------------
by Tran Huu Nam - huunam0[at]gmail.com - [m.me/huunam0](https://m.me/huunam0) - 2022
