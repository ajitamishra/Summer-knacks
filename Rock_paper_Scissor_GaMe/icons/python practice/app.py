# secret_num=9
# guess_count=0
# guess_num=3
# while guess_count<guess_num:
#   guess= int(input('guess: '))
#   guess_count+=1
#   if guess==secret_num:
#     print('you won!!')
#     break
# else:
#   print('sorry..you failed this time...')  
  
command=" "
flag=False
while True:
  command=input(">>").lower()
  if command=='start':
    if flag:
      print('car is already started')
    else:
      flag=True
      print('car started')
  elif command=='stop':
    if not flag:
      print('car  stopped')
    else:
      flag=True
      print ('car is already stopped') 
  elif command=='quit':
      break
  elif command=='help':
      print(''' ->start-start the car
->stop-stop the car
 ->quit-to quit the game ''')
  else:
      print('unrecognizable command')               
