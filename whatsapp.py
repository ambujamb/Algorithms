from selenium import webdriver 
from selenium.webdriver.support.ui import WebDriverWait 
from selenium.webdriver.support import expected_conditions as EC 
from selenium.webdriver.common.keys import Keys 
from selenium.webdriver.common.by import By 
import time 


driver = webdriver.Chrome(r'C:/webdriver/chromedriver.exe') 

driver.get("https://web.whatsapp.com/")

wait = WebDriverWait(driver, 600)
# Replace 'My Bsnl' with the name of your friend or group name
target = '"Amber"'

# Replace the below string with your own message
string = 'Message sent through Bot'


x_arg = '//span[contains(@title,' + target + ')]'
group_title = wait.until(EC.presence_of_element_located((
By.XPATH, x_arg)))
print (group_title)
print ("Wait for few seconds")
group_title.click()
message = driver.find_elements_by_xpath('//*[@id="main"]/footer/div[1]/div[2]/div/div[2]')[0]

message.send_keys(string)
sendbutton = driver.find_elements_by_xpath('//*[@id="main"]/footer/div[1]/div[3]/button')[0]
sendbutton.click()
time.sleep(1) 
driver.close()