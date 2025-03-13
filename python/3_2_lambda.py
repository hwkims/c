# 3_2_lambda.py


def twice(a):       # a = 3
    return a * 2


l = lambda a: a * 2


def make_proxy(func, param):
    return func(param)


f = twice
print(twice(3))
print(f(3))
print(l(3))
print((lambda a: a * 2)(3))

print(make_proxy(twice, 7))
print(make_proxy(lambda a: a * 2, 4))
