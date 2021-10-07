# Welcome

## Prerequisites

You should already have installed in your computer:

  - Python 3.8+
  - pip
  
If you havent, clone the repository to your machine: 
```
git clone https://github.com/clutso/talleriotredessat.git
```
## Instructions

1)  open a terminal/cmd-window and navigate to the working directory __sampleAPI_basic__. It would be something similar to: 

  `cd c:\<the_folder_where_you_have_cloned_the_repo>\talleriotredessat\sampleAPI_basic`  (In windows).

  or 

  `cd /<the_folder_where_you_have_cloned_the_repo>/talleriotredessat/sampleAPI_basic`   (In linux/mac).

2) Install a virtual environment tool
```
pip install virtualenv
```
3) Create a virtual environment
```
virtualenv .pyenv
```
4) Activate your virtual Environment
- In Windows: 
  ```
  .pyenv\Scripts\activate 
  ```
- In mac/linux: 
  ```
  . .pyenv/bin/activate 
  ```
5) Install python dependencies
```
pip install -r requirements.txt
```
6) Run the flask server
```
python -m flask run --host=0.0.0.0 --port=80
```
7) Enjoy!

**NOTE1:** to terminate the application you can use `ctrl+c` or just close the terminal/cmd window. 

**NOTE2:** enter `deactivate` to exit python's virtual environment. 
