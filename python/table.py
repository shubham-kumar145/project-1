def fx():
    print('*'*50)
    print('1: LOGIN')
    print('2: CREATE NEW ACCOUNT')
    print("3: QUIT")
    print('*'*50)
    user1=input("ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")
    while not(user1.strip().isdigit()) or int(user1.strip())>3:
        print('------invalid entry------')
        print('*'*50)
        print('1: LOGIN')
        print('2: CREATE NEW ACCOUNT')
        print("3: QUIT")
        user1=input("ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")
    user1=int(user1.strip())
    if user1 == 1: 
        print('*'*50)
        import login
    elif user1 == 2:
        print('*'*50)
        import creatingaccount
    else :
        print('*'*50)
        print('---------*THANKING_YOU_FOR_USING_THIS_PLATFORM*---------')        



