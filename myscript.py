import ctypes

mylib = ctypes.CDLL("./libmylib.so")

mylib.myfunc()
result = mylib.myfunc_with_args(1, 2)
print(result)
