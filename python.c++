def StrToBool(s) :
	return s.lower() in("yes", "true", "t", "1")

	print("Mời ban nhập bool:")
	x = StrToBool(input())
	print("Bạn nhập:", x)
	print("Kiểu dữ liệu:", type(x))
