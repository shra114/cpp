import sys
import random

''' 
To run : python3 quiz.py
'''

def parse_file_as_str(file0):
    F = open(file0,'r')
    str0 = F.read()
    F.close()
    return str0

def get_str_bw(str1, start, end, search_start=0,print_error=False):
    index_start = str1.find(start,search_start)
    index_end   = str1.find(end,index_start)
    str_return = str1[index_start+len(start):index_end]
    if((index_start == -1) or (index_end == -1)):
        if(print_error):
            print ("start : ",start)
            print ("end : ",end)

    if((str_return == "") or (index_start == -1) or (index_end == -1)):
        str_return = "-"
    return str_return,index_end
class Quiz:
	def __init__(self,que_str):
		self.que_str = que_str
		self.question = ""
		self.answer = ""
		self.options = []
		self.randomize = False
		self.inc = 1 
		self.init_index = 0
		self.num_colns = 7
		self.score = 0
	def print_options(self,options):
		for i in range(len(options)):
			option = options[i]
			if(option==""):
				break
			else:
				print ("Option"+str(i+1),": ",option)
		
	def ask_question(self):
		print ("Question No."+str(self.init_index))
		que_line= get_str_bw(self.que_str, "Qno"+str(self.init_index), "Qno"+str(self.init_index+1))[0]
		que_line_list = que_line.split(",")
		question = que_line_list[1]
		if (question ==""):
			return 
		answer_index = int(que_line_list[-1])
		options = que_line_list[2:-1]
		answer = options[answer_index-1]
		print (question)
		self.print_options(options)
		answer_typed = int(input("Enter the right option number "))
		if (answer_typed == answer_index):
			print ("Right!")
			self.score +=1
		else:
			print ("Wrong! Answer: ",answer)

		#print (question,"\n", answer_index,"\n",options,"\nAnswer: ",options[answer_index-1])
		
	def run_quiz(self):
		while(True):
			if(not(self.randomize)):
				self.init_index += self.inc
			else:
				self.init_index = random.randint(0, self.que_str.count("Qno"))
			self.ask_question()

			if("n" in input("Press no or n to exit ")):
				break
		

csv_str = parse_file_as_str("quiz.csv")
quiz_obj = Quiz(csv_str)
quiz_obj.run_quiz()

