# 4_2_slicing.py

a = [1, 3, 5, 7, 9, 0, 2, 4, 6, 8]
print(a)
print(a[0], a[9], a[len(a)-1], a[-1])

print(a[0:5])
print(a[0:len(a)//2])
print(a[:5])

# 퀴즈
# 오른쪽 절반을 출력하세요
print(a[5:10])
print(a[5:])

# 퀴즈
# 홀수 번째만 출력하세요
# 짝수 번째만 출력하세요
print(a[::2])
print(a[1::2])              # 시작:종료:증감
print()

# 퀴즈
# 거꾸로 출력하세요
print(a[3:4])
print(a[3:3])               # empty
print(a[9:0:-1])
print(a[9:-1:-1])
print(a[-1:-1:-1])
print(a[::-1])      # 증감(양수: 정방향, 음수: 역방향)

a.reverse()
print(a)
print(reversed(a))
print(list(reversed(a)))

