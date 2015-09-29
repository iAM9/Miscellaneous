from battle import *
from character import *
from commands import *
import os


player = Character('default_player', 1)
enemy = Character('default_enemy', 1)
battle = Battle()
loc_map = Map()
cmd = Commands()


def main():
    errorFlag = 2

    p_name = raw_input("What's your name: ")
    player = Character(p_name, 10)

    isBattle = 0

    current_room = 1
    current_room_name = loc_map.locations[current_room]['name']
    current_map = loc_map.locations[current_room]['loc']

    while 1:
        os.system("cls")

        print "\tMap:"
        print current_map
        player.character_status()

        if current_room != 1:
            isBattle = loc_map.locations[current_room]['enemy']()

        if isBattle == 1:
            enemy = Character("Goblin", 10)
            battle.initiateBattle(player, enemy)


        print "\nWhat do you wanna do? Type 'help' for a list of commands."
        comm = raw_input("->").lower().split()
        comm.append("eof")

        if comm[0] not in cmd.commands:
            print 'I know not what thee speak...'
            cmd.commands['help']()

        elif comm[0] in cmd.commands:

            if comm[0] == 'go':

                current_room, current_map, errorFlag = cmd.commands['go'](current_room, current_map, errorFlag, comm[1])

            else:
                cmd.commands[comm[0]]()


main()














































"""
                if comm[1] in loc_map.locations[current_room].keys():

                    if errorFlag == 1:
                        gameTalk(errorFlag = 0)

                    if errorFlag == 2:
                        print ""

                    if errorFlag == 0:
                        gameTalk(errorFlag = 2)

                    current_room = loc_map.locations[current_room][comm[1]]
                    current_room_name = loc_map.locations[current_room]['name']
                    current_map = loc_map.locations[current_room]['loc']
                    print "Going {}".format(comm[1])
                    stopWatch()

                else:

                    errorFlag = 1
                    gameTalk(errorFlag)
"""

"""
def gameTalk(errorFlag):
        if errorFlag == 1:
            print "You're messing up my game!! Try again! :("
            enterToCont()
            errorFlag = 0
            return

        if errorFlag == 0:
            print "That's more like it! :)"
            errorFlag = 2
            return 2

        if errorFlag == 2:
            return

def stopWatch():
    elapsed = 0

     start = time.time()
     time.clock()
     elapsed = 0
     while elapsed < 1:
        print elapsed
        elapsed = time.time() - start
        print "."
        time.sleep(1)

    while elapsed < 1:
        print '.'
        time.sleep(1)
        elapsed += 0.5

def enterToCont():
    i = raw_input("Press enter to continue...")
"""
