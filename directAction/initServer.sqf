if (isServer || isDedicated) then {
	true spawn dragonfly_db_fnc_init;
	[] call sog_server_init_fnc_serverSetup;
};