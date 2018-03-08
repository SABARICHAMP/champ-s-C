ip=input("Enter your K1 and K2 value in single line with space:")
k11=int(ip.split(" ")[0].strip())
k22=int(ip.split(" ")[1].strip())
print("Enter your array:")
st=[]
for x in range(k11):
	a=int(input())
	st.append(a)
for x in range(k22-1):
	st.remove(min(st))
print("Ans is:",min(st))
