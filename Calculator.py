
import operators as o
while True:

  a=float(input("Enter a : "))
  b=float(input("Enter b : "))
  op=input("Enter the operator : ")


  if(op=='+'):
    o.add(a,b)
  elif(op=='-'):
    o.sub(a,b)
  elif(op=='*'):
    o.mul(a,b)
  elif(op=='/'):
    o.div(a,b)
  elif(op=='%'):
    o.rem(a,b)
  else:
    print("Invalid input")

  repeat=input("Do you want to calculate again(yes/no) :")
  if (repeat.lower()=='no'):
    break
  else:
    pass