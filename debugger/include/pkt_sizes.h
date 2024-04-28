#pragma once
#ifndef _PACKET_SIZES_HH
#define _PACKET_SIZES_HH

#define CMD_PROC_READ_PACKET_SIZE 16
#define CMD_PROC_WRITE_PACKET_SIZE 16
#define CMD_PROC_MAPS_PACKET_SIZE 4
#define CMD_PROC_INSTALL_PACKET_SIZE 4
#define CMD_PROC_INSTALL_RESPONSE_SIZE 8
#define CMD_PROC_CALL_PACKET_SIZE 68
#define CMD_PROC_CALL_RESPONSE_SIZE 12
#define CMD_PROC_ELF_PACKET_SIZE 8
#define CMD_PROC_PROTECT_PACKET_SIZE 20
#define CMD_PROC_SCAN_PACKET_SIZE 10
#define CMD_PROC_INFO_PACKET_SIZE 4
#define CMD_PROC_INFO_RESPONSE_SIZE 188
#define CMD_PROC_ALLOC_PACKET_SIZE 8
#define CMD_PROC_ALLOC_RESPONSE_SIZE 8
#define CMD_PROC_FREE_PACKET_SIZE 16
#define CMD_DEBUG_ATTACH_PACKET_SIZE 4
#define CMD_DEBUG_BREAKPT_PACKET_SIZE 16
#define CMD_DEBUG_WATCHPT_PACKET_SIZE 24
#define CMD_DEBUG_STOPTHR_PACKET_SIZE 4
#define CMD_DEBUG_RESUMETHR_PACKET_SIZE 4
#define CMD_DEBUG_GETREGS_PACKET_SIZE 4
#define CMD_DEBUG_SETREGS_PACKET_SIZE 8
#define CMD_DEBUG_STOPGO_PACKET_SIZE 4
#define CMD_DEBUG_THRINFO_PACKET_SIZE 4
#define CMD_DEBUG_THRINFO_RESPONSE_SIZE 40
#define CMD_KERN_READ_PACKET_SIZE 12
#define CMD_KERN_WRITE_PACKET_SIZE 12
#define CMD_CONSOLE_PRINT_PACKET_SIZE 4
#define CMD_CONSOLE_NOTIFY_PACKET_SIZE 8
#define CMD_CONSOLE_INFO_RESPONSE_SIZE 8

#endif