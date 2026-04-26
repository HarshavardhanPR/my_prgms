bot_name : str = 'bob'
print(f'Hello! I am {bot_name.upper()}, how can i assist you today')

while True:
  user_input : str = input('You : ').lower()

  if user_input in ['hi','hello']:
    print(f'{bot_name} : Hi there, how can i help you')
  elif user_input in ['bye','okay bye','good bye']:
    print(f'{bot_name} : Alright! see you later, have a great day')
    break
    
  elif user_input in ['+','add','addition','-','sub','subtract','subtraction','*','mul','multiply','multiplication','/','div','divide','division']:
    print(f'{bot_name} : Enter 2 valid numbers')
    try:
      number1 : float = float(input('Enter first number : '))
      number2 : float = float(input('Enter second number :'))
      if user_input in ['+','add','addition']:
        print(f'{bot_name} : {number1} + {number2} = {number1+number2}')
      elif user_input in ['-','sub','subtract','subtraction']:
        print(f'{bot_name} : {number1} - {number2} = {number1-number2}')
      elif user_input in ['*','mul','multiply','multiplication']:
        print(f'{bot_name} : {number1} * {number2} = {number1*number2}')
      elif user_input in ['/','div','divide','division']:
      if number2 == 0:
          print(f'{bot_name} : Cannot divide by zero')
      else:
          print(f'{bot_name} : {number1} / {number2} = {number1/number2}')
      else:
        print(f'{bot_name} : Invalid operation')
    except ValueError as e:
       print(f'{bot_name} : \'Please enter valid numbers\' : {e}')

  else:
    print(f'{bot_name} : Sorry, i did not understand what you said')
