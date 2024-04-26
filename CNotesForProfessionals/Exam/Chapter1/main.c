int foo = 20; // Bắt đầu từ 20 ??/
int bar = 0;
// Dòng sau sẽ gây lỗi biên dịch (biến 'bar' chưa được khai báo)
// vì 'int bar = 0;' là một phần của chú thích trên dòng trước đó
bar += foo;
