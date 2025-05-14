ans='YES'
import pickle
import time
username1=input('ENTER ACCOUNT HOLDER NAME:  ') # checking username
password1=input('ENTER YOUR PASSWORD(case sensitive):  ')
filename=username1+'.dat'
try:
    file=open(filename,'rb')
except:
    print('------INVALID USERNAME------')
    import table
    table.fx()
dict1=pickle.load(file)
dict4=pickle.load(file)
dict5=pickle.load(file)
while ans == 'YES':
    username=dict1['username']
    password=dict1['password']
    file.close()
    if username1==username and password1==password:
        print('------LOGIN SUCCESSFULLY------')
        print('*'*25)
        print('1: TRANSTAION')
        print('2: CUSTOMER DETAILS')
        print('3: TRANSTAION DETAILS')
        print('4: CHANGE ANY DETAILS')
        print("5: LOGOUT")
        user2=input("ENTER YOUR CHOISE YOU WANT TO PERFORM:  ") #ask what they want to do
        while not(user2.strip().isdigit()) or int(user2.strip())>5:
            print('------INVALID ENTRY------')
            print('*'*50)
            print('1: TRANSTAION')
            print('2: CUSTOMER DETAILS')
            print('3: TRANSTAION DETAILS')
            print('4: CHANGE ANY DETAILS')
            print("5: LOGOUT")
            user2=input("Re-ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")
        user2=int(user2.strip())
        if user2 == 4:  #change any details
            print('------WHAT YOU WANT TO CHANGE:------')
            print("1: MOBILE NUMBER")
            print("2: ADDRESS")
            print("3: PASSWORD")
            print('4: QUIT')
            user5=input("ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")
            while not(use5.strip().isdigit()) or int(user5.strip())>3:
                print('------INVALID ENTRY------')
                print("1: MOBILE NUMBER")
                print("2: ADDRESS")
                print("3: PASSWORD")
                print('4: QUIT')
                user5=input("Re-ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")
            user5=int(user5.strip())
            if user5==4:
                raise SystemExit
                print('------THANK YOU------')
            elif user5==1: # mobile number
                fileaadhar=open('DATAFILE.dat','rb')
                dict3=pickle.load(fileaadhar)
                fileaadhar.close()
                mobile=input('ADD YOUR NEW MOBILE NUMBER(10 digit):  ')
                while (not(mobile.strip().isdigit()) or len(mobile.strip()) != 10)or(int(mobile.strip()) in dict3.values()):
                    print('INVALID MOBILE NUMBER OR THIS NUMBER IS LINKED WITH OTHER ACCOUNT')
                    mobile=input('Re-ENTER YOUR NEW MOBILE NUMBER(10 digit):  ')
                dict1['mobile']=int(mobile)
                fh=open(filename,'wb')
                pickle.dump(dict1,fh)
                pickle.dump(dict4,fh)
                pickle.dump(dict5,fh)
                fh.close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user5==2: # address
                address=input('ENTER YOUR NEW ADDRESS:  ')
                dict1['address']=address
                fh=open(filename,'wb')
                pickle.dump(dict1,fh)
                pickle.dump(dict4,fh)
                pickle.dump(dict5,fh)
                fh.close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()      
            elif user5==3: #password
                password5=dict1['password']
                password6=input('ENTER YOUR OLD PASSWORD:  ')
                while password6 != password5:
                    print('------INVALID PASSWORD------')
                    password6=input('Re-ENTER YOUR OLD PASSWORD:  ')
                password7=input('ENTER YOUR NEW PASSWORD:  ')
                dict1['password']=password7
                fh=open(filename,'wb')
                pickle.dump(dict1,fh)
                pickle.dump(dict4,fh)
                pickle.dump(dict5,fh)
                fh.close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
        elif user2==3:
            for i in dict4:
                print(dict4[i])
            ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
            ans=ans.upper().strip()
        elif user2==1:       #transaction
            print('1: WANT TO WITHDRAW MONEY')
            print('2: WANT TO DEPOSIT MONEY')
            print('3: WANT TO TAKE LOAN')
            print('4: QUIT')
            user3=input("ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")   #ask what they want to do
            while not(user3.strip().isdigit()) or int(user3.strip())>4:
                print('*'*50)
                print('------INVALID NUMBER------')
                print('1: WANT TO WITHDRAW MONEY')
                print('2: WANT TO DEPOSIT MONEY')
                print('3: WANT TO TAKE LOAN')
                print('4: QUIT')
                user3=input("Re-ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")
            user3=int(user3.strip())
            if user3==1:
                credit=dict1['credit']
                num1=input('ENTER THE AMOUNT YOU WANT TO WITHDRAW MONEY:  ')
                while not(num1.strip().isdigit()) or float(num1.strip()) < 0 or (int(credit)-int(num1.strip()) < 0) :
                    print('INSUFFICIENT BALANCE OR INVALID ENTRY')
                    num1=input('Re-ENTER THE AMOUNT YOU WANT TO WITHDRAW MONEY:  ')
                credit=int(credit)-int(num1.strip())
                dict1['credit']=credit
                openingdate=time.ctime(time.time())
                num2='-'+str(num1)
                dict4[openingdate]=num2
                filename3=open(filename,'wb')
                pickle.dump(dict1,filename3)
                pickle.dump(dict4,filename3)
                pickle.dump(dict5,filename3)
                filename3.close()
                print('YOUR CURRENT AMOUNT: ',credit)
                print('*'*25)
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user3==2:
                credit=dict1['credit']
                num1=input('enter the amount you want to deposit:- ')
                while not(num1.strip().isdigit()) or float(num1.strip()) < 0 :
                    print('------INVALID ENTRY------')
                    num1=input('Re-Enter the amount you want to deposit:-')
                credit=int(credit)+int(num1.strip())
                dict1['credit']=credit
                openingdate=time.ctime(time.time())
                num2='+'+str(num1)
                dict4[openingdate]=num2
                filename3=open(filename,'wb')
                pickle.dump(dict1,filename3)
                pickle.dump(dict4,filename3)
                pickle.dump(dict5,filename3)
                filename3.close()
                print('your current amount: ',credit)
                print('*'*50)
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user3 == 3:
                credit=dict1['credit']
                num1=input('ENTER THE AMOUNT YOU WANT TO AS A LOAN:  ')
                while not(num1.strip().isdigit()) or float(num1.strip()) < 0 :
                    print('------INVALID ENTRY------')
                    num1=input('Re-ENTER THE AMOUNT YOU WANT TO AS A LOAN:  ')
                loan=dict5['loan status']
                loan=int(loan)+int(num1)
                dict5['loan status']=loan
                filename3=open(filename,'wb')
                pickle.dump(dict1,filename3)
                pickle.dump(dict4,filename3)
                pickle.dump(dict5,filename3)
                filename3.close()
                print('YOUR CURRENT AMOUNT:  ',credit)
                print('YOUR CURRENT LOAN AMOUNT:  ',loan)
                print('*'*50)
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user3==4:
                raise SystemExit
                print('------THANK YOU------')
        elif user2==2: #customer details
            print('-----WHAT YOU WANT TO SEE-----')
            print("1:  NAME")
            print("2:  ACCOUNT NUMBER")
            print("3:  AADHAR NUMBER")
            print("4:  MOBILE NUMBER")
            print("5:  ADDRESS")
            print("6:  OPENTING DATE AND TIME")
            print("7:  TRANSTION HISTORY")
            print("8:  LOAN STATUS")
            print("9:  ALL DETAILS")
            print("10: EXIT")
            user4=input("ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")
            while not(user4.strip().isdigit()) or int(user4.strip())>10:
                print("------INVALID ENTRY------")
                print('-----WHAT YOU WANT TO SEE-----')
                print("1:  NAME")
                print("2:  ACCOUNT NUMBER")
                print("3:  AADHAR NUMBER")
                print("4:  MOBILE NUMBER")
                print("5:  ADDRESS")
                print("6:  OPENTING DATE AND TIME")
                print("7:  TRANSTION HISTORY")
                print("8:  LOAN STATUS")
                print("9:  ALL DETAILS")
                print("10: EXIT")
                user4=input("Re-ENTER YOUR CHOISE YOU WANT TO PERFORM:  ")
            user4=int(user4.strip())
            if user4==9:
                name=dict1['username']
                accountno=dict1['accountno']
                aadhar=dict1['aadhar']
                mobile=dict1['mobile']
                address=dict1['address']
                password=dict1['password']
                openingdate=dict1['openingdate']
                file.close()
                password4=input('ENTER YOUR ACCOUNT PASSWORD(case sensitive):  ')
                while password4 != password:
                    password4=input('ENTER YOUR ACCOUNT PASSWORD(case sensitive):  ')
                print('NAME: ',name)
                print('ACCOUNT NUMBER: ',accountno)
                print('AADHAR NUMBER: ',aadhar)
                print('MOBILE NUMBER: ',mobile)
                print('ADDRESS: ',address)
                print('PASSWORD: ',password)
                print('OPENING DATE AND TIME: ',openingdate)
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4 == 1:
                name=dict1['username']
                print('NAME: ',name)
                file.close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4 == 2:
                accountno=dict1['accountno']
                print('ACCOUNT NUMBER: ',accountno)
                file.close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4 == 3:
                aadhar=dict1['aadhar']
                print('AADHAR NUMBER: ',aadhar)
                file.close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4 == 4:
                mobile=dict1['mobile']
                print('MOBILE NUMBER: ',mobile)
                file.close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4 == 5:
                address=dict1['address']
                print('ADDRESS: ',address)
                file.strip().close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4 == 6:
                openingdate=dict1['openingdate']
                print('OPENING DATE AND TIME: ',openingdate)
                file.close()
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4==7:
                for i in dict4:
                    print(dict4[i])
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4==8:
                loan1=dict5['loan status']
                if loan1 != 0:
                    print('YOUR CURRENT LOAN IS:  ',loan1)
                ans=input('WANT TO GO BACK TO MENU(YES/NO):  ')
                ans=ans.upper().strip()
            elif user4==10:
                raise SystemExit
                print('------THANK YOU------')
        else:
            print("------THANK YOU------")
            import table
            table.fx()
            raise SystemExit