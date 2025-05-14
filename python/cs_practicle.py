fh=open('telephone.csv','a')
import csv
while True:
    print('\n 1-To add record\n 2-To show records\n 3-To search record\n 4-To exit')
    z=input('What is your wish to do(enter corresponding no.):')


    if z=='1':
        fh=open(r'C:\A@\telephone.csv','a')
        contact_no=input('Enter Contact no.:')
        name=input('Enter Customer name:')
        loc=input('Enter Customer location:')
        l=[contact_no,name,loc]
        wo=csv.writer(fh)
        wo.writerow(l)
        print('Record added successfully.....')
        fh.close()


    elif z=='2':
        fh=open(r'C:\A@\telephone.csv','r')
        ro=csv.reader(fh)
        try:
            for i in ro:
                print(i)
            print('\nThis File contains these records.....')
        except:
            pass
        fh.close()


    elif z=='3':
        fh=open(r'C:\A@\telephone.csv','r')
        x=input('Enter Contact no.:')
        ro=csv.reader(fh)
        try:
            for i in ro:
                if i[0]==x:
                    print(i)
                    print('This record found...')
        except :          #EOFError
            pass
        fh.close()


    elif z=='4':
        print('Thank you............')
        break


    else:
        print('Enter correctly.............')

# out of loop