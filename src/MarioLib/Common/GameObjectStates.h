#pragma once

enum GameObjectStates
{
	STATE_UNDEFINED = -1,
	STATE_IDLE = 0,
	STATE_REBORN,
	STATE_STAND,
	STATE_SIT,
	STATE_WALK,
	STATE_BREAK,
	STATE_JUMP,
	STATE_SITJUMP,
	STATE_FALL,
	STATE_SITFALL,
	STATE_CROUCH,
	STATE_GROUNDPOUND,
	STATE_WALLSWEEP,

	STATE_SWIM,
	STATE_SWIMJUMP,
	STATE_SPINJUMP,

	STATE_CLIMBIDLE,
	STATE_CLIMBMOVE,

	STATE_ITEMPOP,
	STATE_ITEMPOPDOWN,
	STATE_THROWFIRE,

	STATE_PIPEDOWN,
	STATE_PIPERIGHT,
	STATE_PIPEUP,
	STATE_PIPELEFT,

	STATE_VINEUP,

	STATE_PUSHEDUP,
	STATE_GOTOFFVEHICLE,
	STATE_TRAMPOLINPRESS,
	STATE_TRAMPOLINJUMP,

	// Ride Vehicle
	STATE_RIDE,

	// Turtles
	STATE_SHELLIDLE,
	STATE_SHELLRUN,
	STATE_SHELLAWAKE,

	STATE_DIE,
	STATE_KICKED,
	STATE_PRESSED,
	STATE_PRESSJUMP,
	STATE_BURNT,

	// Trampolin
	STATE_SPRING,

	// Spiny
	STATE_THROWN,
	STATE_THROWNFLY,

	// FireBall only
	STATE_FIREDOWN,
	STATE_FIREUP,

	// Bridge, Winged Patrol, ...
	STATE_MOVE,
	STATE_MOVEUP,
	STATE_MOVEDOWN,

	// Lakitu 
	STATE_FLY,
	STATE_FLYBYAI,
	STATE_RETREAT,

	STATE_FOLLOWPREPARE,
	STATE_FOLLOW,
	STATE_FINDBALANCE,

	// FlagPole & FlagPole rider
	STATE_FLAGDOWN,
	STATE_FLAGSTOP,
	STATE_FLAGFLIP,
	STATE_FLAGUP,

	// Vine
	STATE_VINEGROW,

	// Yoshi
	STATE_HATCH,

	STATE_HELDBYTONGUE,
	STATE_HELD,
	STATE_SPITTED,
	STATE_SPITTED_SAFE,

	STATE_STACKED,
	STATE_BLOCKJUMP,

	// Door
	STATE_OPEN,
	STATE_CLOSE,
	STATE_UNLOCK,
	STATE_DENY,

	// Rocky Wrench
	STATE_JUMPINTO,

	STATE_PARALYZE,

	STATE_SPECIALPOSE,
	STATE_VICTORYPOSE,

	STATE_CARRYBYHAND,
	STATE_PLACEDBYHAND,
	STATE_KICKEDUP,

	// POW Block
	STATE_EXPLODE,
	STATE_POWED,

	STATE_TEST,

	STATE_EVENTDEAD,
	STATE_DEAD,	// already dead!
	STATE_,
};