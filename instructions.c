
//{{BLOCK(instructions)

//======================================================================
//
//	instructions, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 230 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 7360 + 2048 = 9920
//
//	Time-stamp: 2020-04-21, 12:01:21
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short instructionsTiles[3680] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5500,0x5555,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x6660,0x0000,0x6000,0x0000,0x6000,0x0000,0x6555,0x0055,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0060,0x0000,0x0060,0x0000,0x0060,0x0000,0x0060,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x2000,0x0000,0x2000,0x0000,0x2000,0x0000,0x2000,
	0x5500,0x5555,0x5520,0x5555,0x5520,0x5555,0x5520,0x5555,
	0x5552,0x5555,0x5552,0x5555,0x5552,0x5555,0x5522,0x2255,

	0x6555,0x0055,0x6555,0x6655,0x6555,0x5565,0x6555,0x5556,
	0x6552,0x5555,0x6552,0x5555,0x6552,0x5555,0x6552,0x5555,
	0x0000,0x0000,0x0666,0x0000,0x6000,0x0000,0x0000,0x0006,
	0x0055,0x0006,0x0055,0x0006,0x0055,0x0006,0x0055,0x0006,
	0x0000,0x0000,0x0000,0x6000,0x0000,0x0660,0x0000,0x0006,
	0x0000,0x0006,0x6000,0x0000,0x6000,0x0000,0x6000,0x0000,
	0x0000,0x0000,0x6666,0x0000,0x0000,0x0066,0x0000,0x0600,
	0x0000,0x0600,0x0000,0x6000,0x0000,0x6000,0x0000,0x6000,

	0x0000,0x0000,0x6600,0x0066,0x6000,0x0000,0x6000,0x0000,
	0x6000,0x0000,0x0000,0x0006,0x0000,0x0006,0x0000,0x0006,
	0x0000,0x0000,0x0000,0x6000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0600,0x0000,0x6060,0x0000,0x6060,0x0000,
	0x0000,0x0000,0x0666,0x0000,0x0060,0x0000,0x0060,0x0000,
	0x0060,0x0000,0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,
	0x0000,0x0000,0x0000,0x6600,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0060,0x0000,0x6666,0x6666,0x0060,0x0000,0x0060,0x0000,
	0x0060,0x0000,0x0060,0x0000,0x0060,0x0000,0x0060,0x0000,
	0x0000,0x0000,0x0006,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x6000,0x0000,0x6000,0x0000,0x6000,
	0x0000,0x0000,0x6000,0x6666,0x0660,0x0000,0x0006,0x0000,
	0x0006,0x2200,0x0000,0x2200,0x0000,0x2200,0x0000,0x2220,
	0x0000,0x0000,0x5522,0x0005,0x5566,0x0005,0x5622,0x0005,
	0x5622,0x0555,0x6522,0x0555,0x6522,0x0555,0x6555,0x0555,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5550,0x0055,
	0x0000,0x0000,0x0666,0x6660,0x0600,0x0066,0x6600,0x0000,
	0x6600,0x0000,0x0600,0x0000,0x0600,0x0000,0x0600,0x0000,
	0x0000,0x0000,0x0066,0x0000,0x6600,0x0000,0x0000,0x0006,
	0x0000,0x0006,0x0000,0x0060,0x0000,0x0060,0x0000,0x0060,
	0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,
	0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,

	0x0000,0x0000,0x0000,0x6600,0x0000,0x0066,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6600,
	0x0000,0x0000,0x6666,0x0000,0x0000,0x0006,0x0000,0x0060,
	0x0000,0x0060,0x0000,0x0060,0x0000,0x0060,0x6666,0x0066,
	0x0000,0x0000,0x6000,0x6666,0x0000,0x0060,0x0000,0x0060,
	0x0000,0x0600,0x0000,0x0600,0x0000,0x6000,0x0000,0x6500,
	0x0000,0x0000,0x0000,0x6600,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x6000,0x0000,0x6000,0x0000,0x0600,0x0055,0x0600,

	0x0000,0x0000,0x0666,0x0000,0x0006,0x0000,0x0006,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x2000,0x0000,0x2000,0x0000,0x2000,0x0000,0x2000,
	0x0000,0x2000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5522,0x2255,0x5522,0x2255,0x2222,0x2222,0x2222,0x2222,
	0x2222,0x2222,0x2200,0x5522,0x2200,0x5522,0x2200,0x5522,
	0x6552,0x5555,0x6552,0x5555,0x6555,0x5555,0x6555,0x5555,
	0x6555,0x5555,0x6665,0x2266,0x5555,0x2255,0x5555,0x2255,

	0x0055,0x0006,0x0055,0x0006,0x5222,0x0556,0x5222,0x0556,
	0x5222,0x0556,0x6622,0x5666,0x5522,0x5555,0x5522,0x5555,
	0x6000,0x0000,0x6000,0x0000,0x0000,0x0006,0x0000,0x0006,
	0x0000,0x0660,0x0000,0x6000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x6000,0x0000,0x6000,0x0000,0x0600,0x0000,0x0600,
	0x0000,0x0066,0x6666,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0006,0x0000,0x0060,0x0000,0x6060,0x0000,0x6060,
	0x0000,0x0600,0x0000,0x0600,0x0000,0x0000,0x0000,0x0000,

	0x0006,0x0006,0x0006,0x6006,0x0000,0x6060,0x0000,0x6060,
	0x0000,0x0600,0x0000,0x0600,0x0000,0x0000,0x0000,0x0000,
	0x0006,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0060,0x0000,0x0060,0x0000,0x0060,0x0000,0x0060,0x0000,
	0x0600,0x0000,0x6000,0x6666,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x6000,0x0000,0x6000,0x0000,0x0000,0x0000,0x0000,
	0x0660,0x0000,0x0006,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x2220,0x0000,0x2220,0x2006,0x2222,0x2006,0x2222,
	0x2660,0x2222,0x6222,0x6666,0x2222,0x2222,0x2222,0x2222,
	0x6555,0x0555,0x6555,0x0555,0x5655,0x5555,0x5655,0x5555,
	0x5566,0x5555,0x5522,0x5555,0x5522,0x5555,0x5522,0x5555,
	0x5550,0x0055,0x5550,0x0055,0x5555,0x0055,0x5555,0x0055,
	0x5555,0x0055,0x2225,0x5555,0x2225,0x5555,0x2225,0x5555,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0005,0x0000,0x0005,0x0000,0x0005,0x0000,

	0x0600,0x0000,0x0600,0x0000,0x6600,0x0000,0x6600,0x0000,
	0x0600,0x0066,0x0600,0x6600,0x0600,0x0000,0x0600,0x0000,
	0x0000,0x0060,0x0000,0x0060,0x0000,0x0006,0x0000,0x0006,
	0x6000,0x0000,0x0666,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x6000,0x6666,0x0000,0x0000,0x0000,0x0000,
	0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,0x0006,0x0000,
	0x0006,0x0000,0x6666,0x0066,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0066,0x6000,0x0000,0x6000,0x5220,0x6000,0x5220,
	0x0000,0x5226,0x5500,0x6665,0x5500,0x5555,0x5500,0x5555,
	0x0000,0x0060,0x0000,0x0060,0x0005,0x0060,0x0005,0x0066,
	0x6005,0x0060,0x0666,0x6660,0x0055,0x5500,0x0055,0x5500,
	0x0000,0x5500,0x0000,0x5500,0x5000,0x5555,0x5000,0x5555,
	0x5000,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x0056,0x0060,0x0056,0x0060,0x0565,0x0006,0x0565,0x0006,
	0x6655,0x0000,0x6655,0x0005,0x5655,0x0005,0x5655,0x0005,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2220,
	0x0000,0x2220,0x0000,0x2220,0x0000,0x2222,0x0000,0x2222,
	0x2220,0x5522,0x2220,0x5522,0x2220,0x5522,0x2222,0x2222,
	0x2222,0x2222,0x2222,0x2222,0x5552,0x2222,0x5552,0x2222,
	0x5555,0x2255,0x5555,0x2255,0x5555,0x2255,0x5555,0x2255,
	0x5555,0x2255,0x5555,0x2255,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,

	0x0055,0x0000,0x0055,0x0000,0x0055,0x0000,0x0055,0x0000,
	0x0055,0x0000,0x0055,0x0000,0x0055,0x0000,0x0055,0x0000,
	0x0000,0x2000,0x0000,0x2000,0x0000,0x2000,0x0000,0x2200,
	0x0000,0x2200,0x0000,0x2200,0x0000,0x2222,0x0000,0x2222,
	0x5552,0x2200,0x5552,0x2200,0x5552,0x2200,0x5222,0x5555,
	0x5222,0x5555,0x5222,0x5555,0x2222,0x2222,0x2222,0x2222,
	0x2555,0x5522,0x2555,0x5522,0x2555,0x5522,0x2225,0x5552,
	0x2225,0x5552,0x2225,0x5552,0x2222,0x2222,0x2222,0x2222,

	0x5555,0x2555,0x5555,0x2555,0x5555,0x2555,0x5555,0x2555,
	0x5555,0x2555,0x5555,0x2555,0x2222,0x2222,0x2222,0x2222,
	0x2222,0x5555,0x2222,0x5555,0x2222,0x5555,0x5522,0x5555,
	0x5522,0x5555,0x5522,0x5555,0x2222,0x2222,0x2222,0x2222,
	0x0005,0x0000,0x0005,0x0000,0x0005,0x0000,0x0555,0x0000,
	0x0555,0x0000,0x0555,0x0000,0x0222,0x0000,0x0222,0x0000,
	0x0600,0x0000,0x0600,0x0000,0x6666,0x0666,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x2200,0x0000,0x2200,0x0000,0x2200,0x0000,0x5520,
	0x0000,0x5520,0x0000,0x5520,0x2000,0x5552,0x2000,0x5552,
	0x5522,0x5555,0x5522,0x5555,0x5522,0x5555,0x2555,0x5552,
	0x2555,0x5552,0x2555,0x5552,0x2255,0x5222,0x2255,0x5222,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x2222,0x5555,0x2222,
	0x5555,0x2255,0x5555,0x2255,0x5555,0x6666,0x2555,0x5522,
	0x2555,0x5522,0x2555,0x5522,0x2222,0x5555,0x2222,0x5555,

	0x5565,0x0555,0x5565,0x0555,0x6666,0x0555,0x5555,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5500,0x0005,0x5500,0x0005,0x5500,0x0005,0x2255,0x0555,
	0x2255,0x0555,0x2255,0x0555,0x2222,0x0555,0x2222,0x0555,
	0x0000,0x2222,0x2200,0x6652,0x2200,0x6552,0x6600,0x6552,
	0x2262,0x6556,0x2262,0x6556,0x6622,0x6655,0x2222,0x5552,
	0x5552,0x2222,0x5555,0x6255,0x5555,0x2255,0x5566,0x6665,
	0x5655,0x5555,0x5655,0x5555,0x5566,0x5555,0x5555,0x5555,

	0x5555,0x5555,0x5552,0x5555,0x5552,0x5555,0x5556,0x5566,
	0x6556,0x5666,0x6556,0x5555,0x5556,0x5666,0x5556,0x5555,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x6555,0x6655,0x6656,
	0x5565,0x6555,0x5565,0x6555,0x6655,0x5556,0x5555,0x5555,
	0x0055,0x0000,0x2255,0x6022,0x2255,0x0022,0x2666,0x6622,
	0x2222,0x6555,0x2622,0x6555,0x2266,0x6655,0x5555,0x5555,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6600,0x6600,
	0x6000,0x0600,0x0000,0x0066,0x0006,0x0066,0x0555,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6600,0x0000,
	0x6660,0x0006,0x0060,0x0000,0x6600,0x0006,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0006,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0006,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0666,
	0x6000,0x0000,0x6000,0x0000,0x0000,0x0666,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x6000,0x0000,0x0000,0x6600,0x0000,
	0x0060,0x0006,0x0060,0x0006,0x6600,0x6000,0x0000,0x0000,

	0x0000,0x0000,0x0006,0x0660,0x0006,0x0600,0x0006,0x0600,
	0x0006,0x0600,0x0006,0x0600,0x0066,0x6660,0x0000,0x0000,
	0x0000,0x2222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0066,
	0x6000,0x0666,0x6000,0x0000,0x0000,0x0666,0x0000,0x0000,
	0x2222,0x2222,0x0000,0x0000,0x0000,0x6000,0x6600,0x6606,
	0x0060,0x6000,0x0060,0x6000,0x6600,0x0006,0x0000,0x0000,
	0x2222,0x2222,0x0000,0x0000,0x0000,0x0000,0x0666,0x0000,
	0x0000,0x0000,0x0600,0x0000,0x0066,0x0000,0x0000,0x0000,

	0x2222,0x2222,0x0000,0x0666,0x0000,0x0006,0x0000,0x0066,
	0x0000,0x0600,0x6000,0x0600,0x0000,0x0066,0x0000,0x0000,
	0x2222,0x2222,0x0000,0x6600,0x0000,0x6000,0x0000,0x6000,
	0x0000,0x6000,0x0000,0x6000,0x0000,0x6600,0x0000,0x0000,
	0x0222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0066,0x6600,
	0x0600,0x6660,0x0600,0x0060,0x6606,0x6600,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0666,
	0x0006,0x0600,0x6000,0x0666,0x6006,0x6666,0x0000,0x0000,

	0x0000,0x0000,0x0660,0x0000,0x0600,0x6000,0x0600,0x6600,
	0x0600,0x6000,0x0600,0x6000,0x6660,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0066,0x0000,0x0060,0x0666,0x6660,
	0x0000,0x0060,0x0600,0x0060,0x0066,0x0666,0x0000,0x0000,
	0x2000,0x5552,0x2220,0x2222,0x2220,0x2222,0x2220,0x2222,
	0x0006,0x0000,0x0006,0x0000,0x0066,0x0000,0x0000,0x0000,
	0x2255,0x5222,0x2266,0x2222,0x2262,0x2222,0x6662,0x2222,
	0x0060,0x6006,0x0060,0x6006,0x6666,0x0000,0x0000,0x0000,

	0x5555,0x2222,0x2222,0x2222,0x2222,0x2222,0x2266,0x6266,
	0x0600,0x0600,0x0600,0x6060,0x0066,0x6066,0x0000,0x0000,
	0x2222,0x5555,0x2222,0x2222,0x2222,0x2222,0x2226,0x2266,
	0x6000,0x0666,0x6000,0x0000,0x0006,0x0666,0x0000,0x0000,
	0x5555,0x5555,0x2222,0x2222,0x2222,0x2222,0x6662,0x2226,
	0x6660,0x0000,0x0000,0x0006,0x6660,0x0000,0x0000,0x0000,
	0x2222,0x0555,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0022,0x0000,0x0022,0x0000,0x0022,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x2220,0x0000,0x2220,0x0000,0x2220,0x2000,0x2222,
	0x2222,0x5552,0x2200,0x5222,0x2200,0x5222,0x2200,0x5222,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x5555,0x6665,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5552,0x5555,0x5552,0x5555,0x5552,0x5555,0x2222,0x2222,

	0x5556,0x5555,0x5225,0x5555,0x5225,0x5555,0x5225,0x5555,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x5555,0x5555,0x5555,0x2555,0x5555,0x2555,0x5555,0x2555,
	0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,0x2222,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5522,0x5555,0x5522,0x5555,0x5522,0x5555,0x2222,0x2222,
	0x0555,0x0000,0x5555,0x0055,0x5555,0x0055,0x5555,0x0055,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x2222,0x2222,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0005,0x0000,0x0005,0x0000,0x0005,0x0000,0x2222,0x2222,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2222,0x2222,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0002,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5500,0x0005,0x5500,0x0005,0x5500,0x0005,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x5522,0x0555,
	0x2000,0x2222,0x2000,0x2222,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x2222,0x2222,0x2222,0x2222,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x9999,0x5999,
	0x9999,0x5999,0x9999,0x5999,0x9999,0x5999,0x5999,0x5555,

	0x0002,0x0000,0x0002,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5522,0x0555,0x5522,0x0555,0x2222,0x0222,0x2222,0x0222,
	0x2222,0x0222,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x2200,
	0x0000,0x2200,0x0000,0x2200,0x0000,0x2222,0x0000,0x2222,
	0x5200,0x0005,0x5200,0x0005,0x5200,0x0005,0x5222,0x0555,
	0x5222,0x0555,0x5222,0x0555,0x5522,0x5555,0x5522,0x5555,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0055,0x0000,0x0055,0x0000,
	0x0000,0x0000,0x0000,0x2200,0x0000,0x2200,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x5522,0x0555,0x5522,0x0555,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x2222,0x0000,0x2222,0x0000,0x2222,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x5522,0x5555,0x5555,0x5555,0x5555,0x5555,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0055,0x0000,0x0055,0x0000,0x0055,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,
	0x4000,0x4444,0x4000,0x4444,0x4000,0x4444,0xF000,0xFFFF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0x0004,
	0x4444,0x0004,0x4444,0x0044,0x4444,0x0044,0xFFFF,0x0044,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4400,
	0x0000,0x4400,0x0000,0x4440,0x0000,0x4440,0x0000,0xF440,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x4444,0x0444,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0xFFFF,0xFFFF,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0B00,0xB000,0x0B00,0xBB00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x00BB,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0xBB00,0x000B,0xEEB0,0x00BE,0xBB00,0x000B,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0xB000,0xBEEE,0xB000,0xBEEE,0x0000,0x0BBB,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBB00,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xC000,0x0000,0xAC00,0x0000,0xAC00,0x0000,0xCC00,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xCCCC,0x0000,0xCAAA,0x000C,0xAAAA,0x00CA,0xCCCC,0xFCAA,
	0xF000,0xFF44,0xF000,0xFFFF,0xF000,0xFFF6,0xF000,0xFFFF,
	0x0000,0xFFFF,0x0000,0xFFFF,0x0000,0xFFF0,0xCFFF,0xFCCC,
	0xFF44,0x0044,0xFFFF,0x0004,0xFF6F,0x00FF,0xFFFF,0x000F,
	0xFFFF,0x000F,0xFFFF,0x000F,0xFFFF,0x0000,0x0CCF,0x0000,
	0x0000,0xF440,0x0000,0xF400,0x0000,0xFFF0,0x0000,0xFF00,
	0x0000,0xFF00,0x0000,0xFF00,0x0000,0xF000,0x0000,0x0000,

	0xF44F,0xF44F,0xFFFF,0xFFFF,0xFF6F,0xF6FF,0xFFFF,0xFFFF,
	0xFFFF,0x0FFF,0xFFFF,0x0FFF,0xFFFF,0x00FF,0xFFCC,0xCCCC,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xC000,0x0000,0xCC00,0x0000,0xAAC0,0xFFFF,0xCAAC,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xCCCC,0x0000,0xAAAA,0x000C,0xAAAA,0x000C,0xCCCC,0x000C,
	0xE000,0xEEEE,0x0000,0xE000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x00E0,0x0000,0x0EE0,0x0000,0xE000,0x000E,

	0xE000,0xEEEE,0xEE0E,0xBBBB,0xBEE0,0xBBBB,0xBE00,0xBBBB,
	0xBEE0,0xBBBB,0xBBE0,0x9BB9,0xBBEE,0xBBBB,0xBBBE,0xBBBB,
	0xEE0E,0x00EE,0xEEEE,0x0000,0x00EE,0x0000,0x00EE,0x0000,
	0x0EEB,0x0000,0x0EBB,0x0000,0xEEBB,0x0000,0xEBBB,0x0000,
	0x0B00,0x3B30,0xBB00,0xBBB3,0x3000,0xBBBB,0xBBBB,0xBBBB,
	0x3000,0xBBBB,0x0000,0xBBB3,0x0000,0x3330,0x0000,0x000B,
	0x0003,0x0000,0xBBBB,0x000B,0x03BB,0x00BB,0x03BB,0x0000,
	0x03BB,0x0000,0x333B,0xB033,0xBB33,0xB3BB,0xBB30,0x03BB,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x00BB,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBB00,0x000B,
	0xEEB0,0x00BE,0xEEB0,0x00BE,0xBB00,0x0BBB,0x0000,0xB000,
	0xB000,0x0000,0x0000,0x000B,0x0000,0x000B,0xB000,0xBBBB,
	0xEB00,0xEEEE,0xEEB0,0xEEEE,0xEEEB,0xEEEE,0xEEEB,0xEEEE,
	0x0000,0x00BB,0xBB00,0x0000,0x0BB0,0x0000,0x00BB,0x0000,
	0x000B,0x0000,0x00BE,0x0000,0x0BEE,0x0000,0x0BEE,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xBB00,0x0000,0xBB00,0x0000,0x3BB0,0x0000,0x3BB0,
	0x0000,0xB000,0x0000,0xB000,0x0000,0xBB00,0x0000,0x3BB0,
	0x0000,0xBBB0,0xBBBB,0xB0BB,0x3333,0xBBB3,0x3333,0x3333,
	0xBBBB,0x0BBB,0x3B33,0xBBBB,0x3333,0xB333,0xEEE3,0xB3EE,
	0xEEBB,0xBB33,0xE3BB,0x0BB3,0xE33B,0x0BBB,0xE333,0x0BBB,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x3000,
	0x0000,0x3300,0x0000,0xB300,0x0000,0xB330,0x0000,0xBB30,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0033,0x0000,
	0x003B,0x3000,0x03BB,0x3000,0x03BB,0x3000,0x03BB,0x3300,
	0x0000,0x0000,0x3300,0x0003,0xB333,0x0333,0xBBB3,0x3BBB,
	0xBBB3,0xBBBB,0x3BBB,0xB333,0x3BBB,0xB3BB,0x33BB,0xB3BB,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0003,0x0000,
	0x0003,0x0000,0x0003,0x0000,0x0003,0x0000,0x0003,0x0000,
	0x0000,0xC000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0CCC,0xFCAC,0x0000,0xFFC0,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x1FFF,0xF111,0x1FFF,0xF111,0x0000,0xC110,0x0000,0x1110,
	0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,0x0000,0x1110,
	0x811F,0x000C,0x811F,0x000C,0x1C8C,0x0008,0x1811,0x00C8,
	0xC111,0x00CC,0xF111,0x00FF,0xF811,0x00FF,0xF811,0x000F,
	0x0000,0x8C00,0x0000,0x8C00,0x0000,0x1800,0x0000,0x18C0,
	0x0000,0xCCC0,0x0000,0xFFF0,0x0000,0xFFF0,0x0000,0xFF00,

	0xFF11,0x1111,0xFF11,0x1111,0xCC8C,0x0011,0x1118,0x0011,
	0x1111,0x0011,0x1111,0x0011,0x1118,0x0011,0x1118,0x0011,
	0xFFFF,0x0CAC,0xFFFF,0x00CF,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xCCCC,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xEE0E,0x0000,0xBEE0,0x0000,0xBBEE,0x0000,0xBBBE,
	0x0000,0xBBBE,0x00EE,0xBBBE,0xEEE0,0xBBBE,0x0000,0xBBEE,

	0xBBBE,0xBBBB,0xBBBB,0xBBBB,0x9BBB,0xBBB9,0x999B,0xBBBB,
	0xBB9B,0xBBBB,0xBBBB,0x99BB,0xBBBB,0xB9BB,0xBBBB,0xBB99,
	0xEBBB,0xE00E,0xBB99,0xEE0E,0xBB9B,0x0EEE,0xBB9B,0x00EE,
	0xBBBB,0x000E,0xBBBB,0x000E,0xBBBB,0x000E,0xBBBB,0x000E,
	0x000E,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xB000,0x0000,0xBB00,0x0000,0x0B00,0xBB00,0x0000,0x0000,
	0x0000,0x3300,0x0000,0xB300,0x0000,0xB3B0,0x0000,0x3BB0,

	0xBB30,0x03BB,0xBB3B,0x03BB,0x330B,0xBB33,0x3333,0xB000,
	0xBBBB,0xB033,0xBBBB,0x003B,0xBBBB,0x003B,0xBBBB,0x0033,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x000B,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xEEEB,0xEEEE,0xEEEB,0xEEEE,0xEEB0,0xEEEE,0xEB00,0xEEEE,
	0xBB00,0xBBBB,0x0B00,0x0000,0x0B00,0x0000,0x0B00,0x0000,
	0x0BEE,0x0000,0x0BEE,0x0000,0x00BE,0x0000,0x000B,0x0000,
	0x00BB,0x0000,0xBB00,0x00BB,0x0000,0xBBB0,0x0000,0xEB00,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x00BB,0x0000,0x0BEE,0x0000,
	0x0000,0xBB00,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x30BB,0x3333,0xBBBB,0x33BB,0xB000,0xEEBB,0x0000,0x333B,
	0xB000,0x333B,0xB000,0x333B,0xB000,0xBBBB,0xB000,0xBBBB,
	0xE333,0x0B33,0xEEEE,0xBB33,0x3EE3,0xB333,0x3E33,0xB333,
	0xBB33,0xB33B,0x0BBB,0xB3BB,0x0BBB,0xBB00,0x00BB,0x0000,

	0x0000,0x3B30,0x0000,0x3B33,0x0000,0x3303,0x3000,0xB300,
	0x0000,0xB300,0x0000,0x3000,0x0000,0x3000,0x0000,0x0000,
	0x03B3,0xB300,0x03BB,0xB300,0x33BB,0xB300,0x3BBB,0xB330,
	0x3BBB,0xBB33,0xBBBB,0xBB33,0xBB33,0x3BBB,0xBB30,0x3BBB,
	0x33BB,0xB333,0x333B,0xB338,0x303B,0xBB38,0x3003,0xBB38,
	0x3003,0xBB38,0x3003,0x3B38,0x3003,0x0333,0x0000,0x0000,
	0x0000,0xCCC0,0x0000,0xC810,0x0000,0xC810,0x0000,0xC810,
	0x0000,0xC660,0x0000,0x6816,0x0000,0x6666,0x0000,0x0000,

	0xCCCC,0x0000,0x8110,0x0000,0x8110,0x0000,0x8110,0x0000,
	0x8660,0x0000,0x6816,0x0000,0x6666,0x0000,0x0000,0x0000,
	0x0000,0xC000,0x0000,0x8000,0x0000,0x8000,0x0000,0x8000,
	0x0000,0x8000,0x0000,0x6000,0x0000,0x6000,0x0000,0x0000,
	0xCCCC,0x00CC,0xC011,0x0018,0xC011,0x0018,0xC011,0x0018,
	0xC066,0x0066,0x6618,0x0618,0x6666,0x0666,0x0000,0x0000,
	0x0000,0xBEE0,0x0000,0xEE00,0x0000,0x0000,0x0000,0xE000,
	0x0000,0xE000,0x0000,0xE000,0x0000,0xEE00,0x0000,0x0000,

	0xBBBB,0xBBBB,0xBBBE,0xBBBB,0xEEEE,0xEEEE,0x000E,0x0E00,
	0x0000,0xEE00,0x0000,0xE000,0x0000,0xEE00,0x0000,0x0000,
	0xEBBB,0x0EEE,0xEEEB,0x0E00,0x00EE,0x0E00,0x0000,0x0E00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0xBB00,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x3333,0x00B0,0x0BB0,0x00B0,0x00BB,0x0B00,0x000B,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0B00,0x0000,0x0B00,0x0000,0xBBB0,0x0000,0xEEEB,0x000B,
	0xEEEB,0x000B,0xBBB0,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xEB00,0x0000,0xEB00,0x0000,0xB000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0BEE,0x0000,0x0BEE,0x0000,0x00BB,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0xBBBB,0x0000,0xBBB0,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0xBB30,0x3BBB,0xBB30,0x333B,0x3330,0x0003,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0666,0x0000,0x6060,
	0x0000,0x6060,0x0000,0x6066,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0006,0x0066,0x6060,0x0600,
	0x6060,0x0600,0x0060,0x0066,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0066,0x0066,0x0060,0x6006,
	0x6600,0x6000,0x6600,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0066,0x0000,0x0666,0x0000,
	0x0000,0x0000,0x0666,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x6600,0x0000,0x6000,0x0000,0x6000,0x0066,0x6000,0x0600,
	0x6000,0x0600,0x6600,0x0066,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0666,0x0066,0x0060,0x0006,
	0x0600,0x0006,0x6000,0x0000,0x0600,0x0000,0x0660,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6666,
	0x0000,0x0060,0x0000,0x0060,0x0000,0x6660,0x0000,0x0060,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6000,0x0666,
	0x0006,0x0006,0x0006,0x0006,0x6000,0x0666,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6600,0x6000,
	0x6660,0x6006,0x0060,0x0000,0x6600,0x6006,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0666,0x6660,
	0x0066,0x6660,0x0600,0x0000,0x0066,0x6660,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0006,0x0000,
	0x0000,0x0000,0x0006,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x6600,0x0000,0x6000,0x0000,0x0600,0x0006,
	0x6600,0x0006,0x0060,0x0060,0x0660,0x0066,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0060,0x0000,0x6666,
	0x0000,0x0060,0x0000,0x0060,0x0000,0x6600,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0006,0x0066,
	0x6000,0x0600,0x6006,0x0600,0x0000,0x0066,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x6000,0x0000,0x6000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0060,0x0666,0x6666,
	0x0600,0x0060,0x0666,0x0060,0x6666,0x6600,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x6000,0x0000,0x6606,0x0666,
	0x6000,0x0000,0x6006,0x0600,0x0000,0x0066,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6600,0x0006,
	0x0000,0x6006,0x6660,0x6006,0x6660,0x0066,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0066,0x0000,0x0060,0x0666,0x6060,
	0x0000,0x6660,0x0000,0x6060,0x0666,0x6066,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6600,0x6600,
	0x6660,0x6006,0x0060,0x6000,0x6600,0x6606,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0066,0x6600,
	0x0600,0x6660,0x0600,0x0060,0x6600,0x6600,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6600,0x0606,
	0x6006,0x6060,0x6000,0x6060,0x6606,0x6060,0x0000,0x0000,
	0x0000,0x0000,0x6000,0x0000,0x0000,0x0000,0x6600,0x0000,
	0x6000,0x6000,0x6000,0x6000,0x6600,0x0006,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0066,0x6660,
	0x0666,0x6660,0x0000,0x0000,0x0666,0x6660,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x6600,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0660,0x0000,0x0006,0x6660,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0006,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x6600,0x6606,0x0000,0x6006,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x6000,0x0000,0x0000,0x0066,0x6600,0x0600,0x0060,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x6000,0x6660,0x0006,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0006,0x0000,0x0060,0x0000,0x6600,0x0000,

	0x0000,0x0666,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0006,0x0000,0x0660,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x6660,0x6006,0x6660,0x6666,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0600,0x0060,0x6600,0x6600,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0006,0x0000,0x0066,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0060,0x0000,0x0006,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short instructionsMap[1024] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0001,0x0002,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0003,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0004,0x0005,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0006,0x0007,0x0008,0x0009,0x000A,0x000B,0x000C,
	0x000D,0x000E,0x0000,0x000F,0x0010,0x0011,0x0012,0x0013,
	0x0014,0x0000,0x0015,0x0016,0x0000,0x0017,0x0018,0x0019,
	0x001A,0x001B,0x001C,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x001D,0x001E,0x001F,0x0020,0x0021,0x0022,0x0023,
	0x0024,0x0025,0x0000,0x0000,0x0026,0x0027,0x0028,0x0029,
	0x002A,0x002B,0x002C,0x002D,0x002E,0x002F,0x0030,0x0031,
	0x0032,0x0033,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0034,0x0035,0x0036,0x0037,0x0038,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0039,0x003A,0x003B,0x003C,
	0x003D,0x003E,0x003F,0x0000,0x0000,0x0040,0x0041,0x0042,
	0x0043,0x0044,0x0045,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0046,0x0047,0x0048,0x0049,0x004A,0x004B,0x004C,
	0x004D,0x004E,0x004F,0x0050,0x0051,0x0052,0x0053,0x0054,
	0x0055,0x0056,0x0057,0x0058,0x0059,0x005A,0x005B,0x005C,
	0x005D,0x005E,0x005F,0x0060,0x0000,0x0000,0x0000,0x0000,
	0x0061,0x0062,0x0063,0x0064,0x0065,0x0066,0x0067,0x0068,
	0x0069,0x006A,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x006B,0x0000,0x006C,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x006D,0x006E,0x006E,0x006E,0x006E,0x006E,0x006F,0x046F,
	0x006E,0x0070,0x006F,0x046F,0x0000,0x0000,0x006F,0x046F,
	0x0000,0x0000,0x006F,0x046F,0x0000,0x0071,0x006F,0x046F,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x086F,0x0C6F,
	0x0000,0x0000,0x086F,0x0C6F,0x0000,0x0000,0x086F,0x0C6F,
	0x0000,0x0000,0x086F,0x0C6F,0x0000,0x0000,0x086F,0x0C6F,
	0x0072,0x0073,0x0074,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0075,0x0076,0x0000,
	0x0077,0x0078,0x0079,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x007A,0x007B,0x0000,0x007C,0x007D,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x007E,0x007F,
	0x0000,0x0000,0x0080,0x0081,0x0000,0x0000,0x0000,0x0082,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0083,0x0084,0x0085,0x0086,0x0000,0x0087,0x0088,0x0089,
	0x008A,0x0000,0x008B,0x008C,0x008D,0x0000,0x008E,0x008F,
	0x0090,0x0091,0x0092,0x0093,0x0000,0x0094,0x0095,0x0096,
	0x0000,0x0097,0x0098,0x0099,0x009A,0x0000,0x0000,0x0000,
	0x009B,0x009C,0x009D,0x009E,0x0000,0x009F,0x00A0,0x00A1,
	0x00A2,0x0000,0x00A3,0x00A4,0x00A5,0x00A6,0x00A7,0x00A8,
	0x00A9,0x0000,0x00AA,0x00AB,0x00AC,0x00AD,0x00AE,0x00AF,
	0x0000,0x00B0,0x00B1,0x00B2,0x089A,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x00B3,0x00B4,0x0000,0x00B5,0x00B6,0x0000,
	0x0000,0x0000,0x00B7,0x00B8,0x00B9,0x0000,0x00BA,0x00BB,
	0x0000,0x0000,0x00BC,0x00BD,0x00BE,0x0000,0x00BF,0x0000,
	0x0000,0x0000,0x00C0,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x00C1,0x00C2,0x00C3,0x00C4,0x00C5,0x00C6,0x0000,
	0x0000,0x0000,0x00C7,0x00C8,0x00C9,0x00CA,0x00CB,0x00CC,
	0x00CD,0x00CE,0x00CF,0x00D0,0x00D1,0x00D2,0x00D3,0x004D,
	0x00D4,0x00D5,0x00D6,0x00D7,0x00D8,0x00CB,0x0000,0x0000,

	0x00D9,0x00DA,0x00DB,0x00DC,0x00DD,0x0005,0x00DE,0x00DF,
	0x0000,0x0000,0x00E0,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x00E1,0x0000,0x00E2,0x00E3,0x00E4,0x0CDB,0x00E5,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

const unsigned short instructionsPal[256] __attribute__((aligned(4)))=
{
	0x6A30,0x6242,0x6B5A,0x706A,0x15F7,0x7FFF,0x0020,0x227E,
	0x4DC1,0x007C,0x0345,0x3CEE,0x10A5,0x56B5,0x3F65,0x36BE,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(instructions)
