# 1_1_basic.py

print("'hello, python!'")
print('"hello, python!"')
print("'hello', \"python!\"")
print("'hello', " '"python!"')
print("'hello',", '"python!"')

#    int  float  bool  str
print(12, 3.14, True, "hello")      # False
print(type(12), type(3.14), type(True), type("hello"))

# 퀴즈
# a와 b의 값을 교환하세요
a, b = 7, 3
print(a, b)

a, b = b, a
print(a, b)

c = 3.14
print(int(c))

# 퀴즈
# c를 문자열로 변경하세요
print(c + 0.5)
print(str(c) + str(0.5))

d = 1234567890123456789123456789
print(d * d)
