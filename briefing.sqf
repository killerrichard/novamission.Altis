waitUntil {!isNull player && player == player};
if(player diarySubjectExists "rules")exitwith{};

player createDiarySubject ["credits","Credits"];
player createDiarySubject ["changelog","Change Log"];
player createDiarySubject ["serverrules","Allgemeine Regeln"];
player createDiarySubject ["controls","Steuerung"];

/*  Example
	player createDiaryRecord ["", //Container
		[
			"", //Subsection
				"
					TEXT HERE<br/><br/>
				"
		]
	];
*/

	player createDiaryRecord ["credits",
		[
			"ArmaLife",
				"
					ArmaLife is a GitHub project which aims to update and keep adding new features to the original 'Altis Life RPG' by Tonic.<br/><br/>
				"
		]
	];

	player createDiaryRecord["changelog",
		[
			"Altis Life Change Log",
				"
					The official change log can be found in ArmaLife github.<br/><br/>

					v4.3 release 4!<br/>
					by: danielstuart14<br/>
					31. January 2016<br/><br/>

					v4.3.2 release!<br/>
					by: danielstuart14<br/>
					22. January 2016<br/><br/>

					v4.3.1 release!<br/>
					by: danielstuart14<br/>
					19. January 2016<br/><br/>
				"
		]
	];

	player createDiaryRecord["changelog",
		[
			"Server Change Log",
				"
					1.0 Next-Time<br/>
                    Das neue Next-Time-Update ist da!<br/>
                    Die Veränderungne kannst du auf Unserer Website nachlesen<br/>
                    www.NovaRP.de<br/><br/>
				"
		]
	];

		player createDiaryRecord ["Server Regeln",
		[
			"Allgemines",
				"
                    Alle Server Regeln sind auf Unserer Website nachzulesen!<br/>
                    www.NovaRP.de<br/><br/>
				"
		]
	];

// Controls Section

	player createDiaryRecord ["controls",
		[
			"",
				"
				Z: Open Player Menu<br/>
				U: Lock and unlock vehicles and houses<br/>
				F: Cop Siren (if cop)<br/>
				T: Vehicle Trunk<br/>
				Left Shift + B: Surrender<br/>
				Left Shift + R: Restrain (Cop Only)<br/>
				Left Shift + G: Knock out / stun (Civ Only, used for robbing them)<br/>
				Left Windows: Main Interaction key which is used for interacting with vehicles/houses (repair, etc) and for cops to interact with civilians. Can be rebound to a single key like H by pressing ESC->Configure->Controls->Custom->Use Action 10<br/>
				Left Windows + T: Used for picking up items/money and gathering<br/>
				Left Shift + L: Activates cop/medic siren lights (as a cop/medic)<br/>
				Left Shift + H: Holster's your pistol<br/>
				Left Ctrl + H: Revert holster action<br/>
				"
		]
	];
