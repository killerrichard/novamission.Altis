if(isServer)exitWith{};
private["_ziel", "_rang", "_marke", "_org", "_message"];

if(vehicle player != player )exitWith{};
_ziel = cursorTarget;
if(isNull _ziel) then {_ziel = player;};    
if(!(_ziel isKindOf "Man")) then {_ziel = player;};  
if(!(alive _ziel)) then {_ziel = player;};

switch(playerSide)do{
 case west:{
  switch (call life_coplevel) do{
   case 1: { _rang = "Ordnungsamt"; };
   case 2: { _rang = "Polizeimeister"; };
   case 3: { _rang = "Polizeiobermeister"; };
   case 4: { _rang = "Polizeihauptmeister"; };
   case 5: { _rang = "Polizeikommissar"; };
   case 6: { _rang = "Polizeioberkommissar"; };
   case 7: { _rang = "Polizeihauptkommissar"; };
   case 8: { _rang = "Polizeirat"; };
   case 9: { _rang = "Polizeioberrat"; };
   case 10: { _rang = "Polizeidirektor"; };
   case 11: { _rang = "Leitender Polizeidirektor"; };
   default { _rank =  "Error";};
  };
  _marke = "marke_cop";
  _org = "Polizei Altis";
 };
 case independent:{
  switch (call life_medicLevel) do{
   case 1: { _rang = "Ersthelfer"; };
   case 2: { _rang = "Rettungshelfer"; };
   case 3: { _rang = "Rettungsanitäter"; };
   case 4: { _rang = "Notarzt"; };
   case 5: { _rang = "Notarzt Leitung"; };    
   default { _rank =  "Error";};
  };
  _marke = "marke_sani";
  _org = "Republik Altis";
 };
 case civilian:{
  if(playerSide == civilian && (!isNil {(group _x) getVariable "gang_name"}))then{
   _rang = "Zivilist";
   _marke = "marke_ziv";
   _org = "Republik Altis";
  }else{
   _rang = "Zivilist";
   _marke = "marke_ziv";
   _org = (group player) getVariable ["gang_name",""];
  };  
 };
};
_message = format["<img size='10' color='#FFFFFF' image='icons\%1.paa'/><br/><br/><t size='2.5'>%2</t><br/><t size='1.8'>%3</t><br/><t size='1'>%4</t>",_marke, name player, _rang, _org];

[[player, _message],"life_fnc_Lizenzsehen",_ziel,false] spawn life_fnc_MP;
