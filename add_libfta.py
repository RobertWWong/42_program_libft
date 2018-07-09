import os

def add_libft_to_file():
	files = os.listdir()
	files.pop(0)
	files.remove('add_libfta.py')
	print(files)
	for name in files:
		with open(name,'r') as org:
			data = org.read()
			# print(data)
		with open(name,'w') as modded:
			modded.write('#include "libft.h\n' + data)
