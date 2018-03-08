def countdigs(n):
	cii=0
	while(n!=0):
		n//=10
		cii+=1
	print(cii)
def main():
	try:
		n=int(input())
		countdigs(n)
	except:
		print('invalid')
main()
