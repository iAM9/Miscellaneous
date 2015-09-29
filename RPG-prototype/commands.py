import sys
import time
from map import *

loc_map = Map()


class Commands():
    def __init__(self):
        self.commands = {

            'help': self.helpText,
            'quit': self.exitOut,
            'attack': self.attack,
            'defend': self.defend,
            'go': self.going,
            'exit': self.exitOut
        }


    def helpText(self):
        print "Type: \'go [north/south/west/east]\' to move around"
        print "Type: 'help' for these instructions"
        print "Type: 'attack' to attack when in combat"
        print "Type: 'defend' to defend yourself in combat"
        i = raw_input("Press enter to continue...")


    def exitOut(self):
        sys.exit("Quitting/Exiting")

    def attack(self):
        print 'You attack the air.'
        print 'It, in return, does nothing but keep your lungs healthy.'
        i = raw_input("Press enter to continue...")

    def defend(self):
        print 'You defend yourself against the air.'
        print 'Unseen forces laugh at your stupidity, pity your instability and pray for serendipity.'
        i = raw_input("Press enter to continue...")


    def going(self, current_room, current_map, errorFlag, comm1):

        if comm1 in loc_map.locations[current_room].keys():


            if errorFlag == 1:
                errorFlag = self.gameTalk(errorFlag)

            if errorFlag == 2:
                print ""

            if errorFlag == 0:
                errorFlag =  self.gameTalk(errorFlag)

            current_room = loc_map.locations[current_room][comm1]
            current_room_name = loc_map.locations[current_room]['name']
            current_map = loc_map.locations[current_room]['loc']
            print "Going {}".format(comm1)
            self.stopWatch()
            return (current_room, current_map, errorFlag)

        else:
            errorFlag = 1
            errorFlag = self.gameTalk(errorFlag)
            return (current_room, current_map, errorFlag)


    def gameTalk(self, errorFlag):
        if errorFlag == 1:
            print "You're messing up my game!! Try again! :("
            self.enterToCont()
            errorFlag = 0
            return errorFlag

        if errorFlag == 0:
            print "That's more like it! :)"
            errorFlag = 2
            return errorFlag

        if errorFlag == 2:
            return errorFlag


    def enterToCont(self):
        i = raw_input("Press enter to continue...")


    def stopWatch(self):
        elapsed = 0
        while elapsed < 1:
            print '.'
            time.sleep(1)
            elapsed += 0.5



