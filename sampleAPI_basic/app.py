import os
import json

from flask import Flask, request
from dotenv import load_dotenv

try:
    load_dotenv()
except: 
    pass


devstatus=-1
timestamp="Never"


app = Flask(__name__)

@app.route('/')
def hello_world():
    return 'Welcome to this app '

@app.route('/setstatus')
def set_status():
    global devstatus
    global timestamp
    message=""
    timestamp=""
    value= request.args.get("sensor")
    if value is  None:
        message= "parameter 'sensor' expected"
    else: 
        try:
            devstatus= int(value)
            message= "received value: "+ str(value)
        except ValueError:
            message= "Int value expected. \nReceived: <"+ str(value) +"> \nWhich is: " + str(type (value))
    return message




@app.route('/getstatus')
def get_status():
    message=""
    
    if devstatus == -1:
        message= json.dumps({"ID":"AB:C0:D0:00:00:01", "state": "unknown", "connected": timestamp})
    elif devstatus == 0:
        message= json.dumps({"ID":"AB:C0:D0:00:00:01", "state": "on", "connected": timestamp})
    elif devstatus == 1:
        message= json.dumps({"ID":"AB:C0:D0:00:00:01", "state": "off", "connected": timestamp})
    else: 
        message= str (devstatus)
    return message

if __name__=="__main__":
    app.run(host='0.0.0.0', port=80)    

#python -m flask run --host=0.0.0.0 --port=80
