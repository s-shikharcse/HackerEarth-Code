#for sending mail via terminal
import smtplib,getpass

mailer=smtplib.SMTP('smtp.gmail.com','587')
mailer.echlo()

mailer.starttls()
sender='email@gmail.com'
pwd=getpass.getpass('enter password for sender '+sender)
mailer.login(sender,pwd)
receiver='shikhars387@gmail.com'
mailer.sendmail(sender,receiver,'hello there')

#site scrap
#automatetheborringstuff.com
#'requests' module for webiste dealing
