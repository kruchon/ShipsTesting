###############################################################################
#
# COPYRIGHT 2001-2004 MOTOROLA, ALL RIGHTS RESERVED
#
# Description: Abstract Test Suite 'battleshipstest'
#
###############################################################################
# command line: 'C:\Testing\TAT\bin\atsgen.exe -m @C:/Testing/BSTest/work/macroprc.lst -o C:/Testing/BSTest/work/battleshipstest.tcl -incl types.h model.ifc -cname default -tt -asn1 -state -mf -nia -nic -config C:/Testing/BSTest/config.sic '

set INSTANCE_NAME 0
set INSTANCE_TYPE 1
set INSTANCE_ATTR 2
set INSTANCE_PARAMS 3
set INSTANCE_STYPES 4
set INSTANCE_FIELDS 5
set INSTANCE_PARAMTYPE 6
set INSTANCE_VARARG 7
set INSTANCE_PRIORITY 8
set INSTANCE_RECORD_SIZE 9
set InstanceSet [ list \
 "Simulator" "env" [ list  ] [ list ] [ list ] [ list ] "" 0 100\
 "Strategy" "model" [ list  ] [ list ] [ list ] [ list ] "" 0 100\
 ]
set SIGNAL_NAME 0
set SIGNAL_TYPE 1
set SIGNAL_ATTR 2
set SIGNAL_PARAMS 3
set SIGNAL_STYPES 4
set SIGNAL_FIELDS 5
set SIGNAL_PARAMTYPE 6
set SIGNAL_VARARG 7
set SIGNAL_PRIORITY 8
set SIGNAL_RECORD_SIZE 9
set SignalSet [list \
"DestroyShip"  "in"  [list ] [ list "int" "int" "int" ] [ list -1 -1 -1 ] [ list Param1 Param2 Param3 ] "C" 0 100\
"FinishSimulation"  "out"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"InitDataComplete"  "in"  [list ] [ list ] [ list ] [ list ] "C" 0 100\
"OrderFireReject"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderFireRequest"  "out"  [list ] [ list "int" "int" "int" "tStringShotsList" ] [ list -1 -1 -1 10 ] [ list Param1 Param2 Param3 Param4 ] "C" 0 100\
"OrderFireResponse"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderSpeedReject"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderSpeedRequest"  "out"  [list ] [ list "int" "int" "float" ] [ list -1 -1 -1 ] [ list Param1 Param2 Param3 ] "C" 0 100\
"OrderSpeedResponse"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderTurnReject"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"OrderTurnRequest"  "out"  [list ] [ list "int" "int" "int" ] [ list -1 -1 -1 ] [ list Param1 Param2 Param3 ] "C" 0 100\
"OrderTurnResponse"  "in"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"ShipsCurrentState"  "in"  [list ] [ list "int" "tStringShipCurrentState" ] [ list -1 9 ] [ list Param1 Param2 ] "C" 0 100\
"StartSimulation"  "in"  [list ] [ list "int" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"StrategyLose"  "in"  [list ] [ list "int" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"StrategyVictory"  "in"  [list ] [ list "int" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"VisibleShip"  "in"  [list ] [ list "int" "tStringEnemyShip" ] [ list -1 8 ] [ list Param1 Param2 ] "C" 0 100\
"booms"  "out"  [list ] [ list "int" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"found"  "out"  [list ] [ list "int" "int" ] [ list -1 -1 ] [ list Param1 Param2 ] "C" 0 100\
"messageError"  "out"  [list ] [ list "SDL_Charstring" ] [ list -1 ] [ list Param1 ] "C" 0 100\
"messageLog"  "out"  [list ] [ list "SDL_Charstring" ] [ list -1 ] [ list Param1 ] "C" 0 100\
]
set TestCaseNames [list "Test8N0"]
set DATATYPE_NAME 0
set DATATYPE_TYPE 1
set DATATYPE_DIMENSION 2
set DATATYPE_STYPE 3
set DATATYPE_ATTR 4
set DATATYPE_ENUM 5
set DATATYPE_PARAMTYPE 6
set DATATYPE_DATACLASS 7
set DATATYPE_MEMBERS 8
set DATATYPE_RECORD_SIZE 9
set DataTypeSet [list \
		"tArrayAmountAmmunition" "int" "4" -1 [list ] [ list ] "SDL" "" [list]\
		"tArrayAmountLaunchUnit" "int" "4" -1 [list ] [ list ] "SDL" "" [list]\
		"tArrayShipsCharacter" "tShipCharacter" "5" 6 [list ] [ list ] "SDL" "" [list]\
		"tArrayWeaponryCharacter" "tWeaponryCharacter" "4" 11 [list ] [ list ] "SDL" "" [list]\
		"tCoordinates" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "x" "int" "" -1] [list "y" "int" "" -1]]\
		"tEnemyShip" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "ShipId" "int" "" -1] [list "StrategyId" "int" "" -1] [list "TypeShip" "int" "" -1] [list "Speed" "int" "" -1] [list "Heading" "int" "" -1] [list "Coordinates" "tCoordinates" "" 4]]\
		"tShipCharacter" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "Range" "int" "" -1] [list "MaxSpeed" "int" "" -1] [list "MaxAcceleration" "int" "" -1] [list "MaxResource" "int" "" -1] [list "MaxAmmunition" "tArrayAmountAmmunition" "" 0] [list "MaxLaunchUnit" "tArrayAmountLaunchUnit" "" 1] [list "MaxDeep" "int" "" -1]]\
		"tShipCurrentState" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "ShipId" "int" "" -1] [list "StrategyId" "int" "" -1] [list "TypeShip" "int" "" -1] [list "Speed" "int" "" -1] [list "Heading" "int" "" -1] [list "Resource" "int" "" -1] [list "Coordinates" "tCoordinates" "" 4] [list "Ammunition" "tArrayAmountAmmunition" "" 0] [list "stepsSlowing" "int" "" -1] [list "deceleration" "int" "" -1] [list "changeDirection" "int" "" -1] [list "fightCoordinates" "tCoordinates" "" 4]]\
		"tStringEnemyShip" "tEnemyShip" "string" 5 [list ] [ list ] "SDL" "" [list]\
		"tStringShipCurrentState" "tShipCurrentState" "string" 7 [list ] [ list ] "SDL" "" [list]\
		"tStringShotsList" "tCoordinates" "string" 4 [list ] [ list ] "SDL" "" [list]\
		"tWeaponryCharacter" "struct" "" -1 [list ] [ list ] "SDL" "" [list [list "Power" "int" "" -1] [list "Range" "int" "" -1] [list "Speed" "int" "" -1]]\
]
set IncludeFiles [ list "types.h" "model.ifc"  ]
set CONFIGURATION ""
set ATS_EVENT_TYPE 0
set ATS_EVENT_TIME 1
set ATS_EVENT_OTIME 2
set ATS_EVENT_PTIME 3
set ATS_EVENT_COND 4
set ATS_EVENT_INST 5
set ATS_EVENT_VERD 6
set ATS_EVENT_SREF 7
set ATS_EVENT_COMMENT 8
set ATS_EVENT_LABEL 9
set ATS_EVENT_DATA 10

StartTestSuite "battleshipstest"


StartTestCase "Test8N0" 1 [ list ]\
[ list ]\
[ list ]  0 0 \
[ list \
"InitDataComplete()"\
"ShipsCurrentState(1,(: (. 1, 1, PATROL_BOAT, 0, NORTH, 1, (. 30, 30 .), (: 10, 10, 10, 0 :), 0, 0, 0, (. 10, 40 .) .), (. 2, 2, CRUISER, 0, NORTH, 0, (. 29, 30 .), (: 10, 10, 10, 0 :), 0, 0, 0, (. 10, 40 .) .) :))"\
"VisibleShip(1,(: (. 2, 2, DESTROYER, 1, WEST, (. 30, 30 .) .) :))"\
"StartSimulation(1)"\
"FinishSimulation(1,1)"\
] [ list  ]\
[ list  [list "C:\\Testing\\BSTest\\mpr\\test8\\Test8.mpr" 1 5 17 ]\
[list "C:\\Testing\\BSTest\\work\\Test8N0.mpr" 2 5 14 ]\
]\
[ list \
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  0  1  ]\
 [list  1  0  ]\
]\
[ list \
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 0  PASS  [list [list 0 5 ] [list 1 5 ] ] "" "" [list  2 [ list  ]  0 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 1  PASS  [list [list 0 7 ] [list 1 7 ] ] "" "" [list  12 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "1" "1" "PATROL_BOAT" "0" "NORTH" "1" [list STRUCT "30" "30"] [list ARRAY "10" "10" "10" "0"] "0" "0" "0" [list STRUCT "10" "40"]] [list STRUCT "2" "2" "CRUISER" "0" "NORTH" "0" [list STRUCT "29" "30"] [list ARRAY "10" "10" "10" "0"] "0" "0" "0" [list STRUCT "10" "40"]]]  ]  ]  1 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 2  PASS  [list [list 0 10 ] [list 1 9 ] ] "" "" [list  16 [ list [ list "" "1"  ] [ list "" [list ARRAY [list STRUCT "2" "2" "DESTROYER" "1" "WEST" [list STRUCT "30" "30"]]]  ]  ]  2 [ list REL "0" "0" ] ] ]\
[ list "send" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 3  PASS  [list [list 0 13 ] [list 1 11 ] ] "" "" [list  13 [ list [ list "" "1"  ]  ]  3 [ list REL "0" "0" ] ] ]\
[ list "recv" [list [ list REL "0" "INF" ] [ list REL "0" "INF" ] ] [list ] [list ] "" 4  PASS  [list [list 0 16 ] [list 1 13 ] ] "" "" [list  1 [ list [ list "" "1"  ] [ list "" "1"  ]  ]  4 [ list REL "0" "0" ] ] ]\
] 1 0

State 0 0 0 0 1 0 [list \
[list 0  1 ]\
]

State 1 0 0 0 1 0 [list \
[list 1  2 ]\
]

State 2 0 0 0 1 0 [list \
[list 2  3 ]\
]

State 3 0 0 0 1 0 [list \
[list 3  4 ]\
]

State 4 0 0 1 0 0 [list \
[list 4  -1 ]\
]

FinishTestCase "Test8N0"

EndTestSuite "battleshipstest"
