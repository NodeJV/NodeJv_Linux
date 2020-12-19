/*
 * @Author: Caviar-X、ExecuteIf
 * @Date: 2020-11-17 20:35:00
 * @LastEditTime: 2020-11-29 11:21:52
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \node.jv\main.cpp
 */
//PLEASE READ THIS WITH UTF-8

//#include "NodeJv.hpp"

#include <bits/stdc++.h>
#undef pascal
#define _DEBUG_
#define ClearScreen() printf("\033[2J");
//support linux
enum fcolor
{
  FG_BLACK=30,
  FG_RED,
  FG_GREEN,
  FG_YELLOW,
  FG_BLUE,
  FG_PURPLE,
  FG_DEEPGREEN,
  FG_WHITE
};
enum bcolor
{
  BG_BLACK=40,
  BG_RED,
  BG_GREEN,
  BG_BROWN,
  BG_BLUE,
  BG_PRED,
  BG_KBLUE,
  BG_WHITE
};
//预处理器区
using namespace std;
//函数声明区
/**
 * @description:  Dispatch The console Message
 * @param arg
 */
void Dispatch_message(string arg);
/**
 * @description: Display The Welcome Message
 */
void welcome();
/**
 * @description: Display an error
 * @param err_code
 */
void error(int err_code);
/**
 * @description: Set console color
 * @param color
 */
void Setcolor(int color);
/**
 * @description: reset console color to white
 */
void Resetcolor();
/**
 * @description: require a module
 * @param module
 */
void require(string module);
/**
 * @description: return
 * @param command
 * @return: bool
 */
bool Xsystem(string command);
//全局函数区
//全局函数区
char op = '$';
bool Exit_ = false;
string arg_user;
void *variable[114514];
char tmp[114514];
//类变量
string fname;
//类是否require
bool fs = false, _time = false, net = false;
//对于类操作的判断
bool _Fs_is_create = false;

int tmpint=0;



//main()
int main(int argc, char *argv[])
{
	memset(variable,0, sizeof(variable));
	welcome();
	while (1)
	{
		printf("%c ", op);
		getline(cin, arg_user);
		Dispatch_message(arg_user);
	}
	return 0x00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000ll;
}

//函数实现区
void error(int err_code)
{
	Setcolor(FG_RED);
	switch (err_code)
	{
	case 0:
	{
		//没有分号
		printf("Error: expected ';' was not found on this statement\n");
		break;
	}
	case 1:
	{
		//括号配对不正确
		printf("Error: expected ')' was not found on this statement\n");
		break;
	}
	case 2:
	{
		//""匹配不正确
		printf("Error: expected ' \" ' was not found on this statement\n");
		break;
	}
	case 3:
	{
		printf("Error: module is not require\n");
		break;
	}
	case 4:
	{
		printf("Error: too few args on this statement\n");
		break;
	}
	case 5:
	{
		printf("Error: unkown require module\n");
		break;
	}
	case 6:
	{
		printf("Error: can't create another stream before one stream is closed\n");
		break;
	}
	case 7:
	{
		printf("Error: cannot use stream function before the stream is create\n");
		break;
	}
	case 8:
	{
		printf("Error:Excute function failed\n");
		break;
	}
	case 9:
	{
		printf("Error:Unkown expression or statement\n");
		break;
	}
	default:
	{
		printf("Node.Jv crashed :(\nat line 133 in Mk_sh.cpp expacted '}' is not exist\n note: Jvav.loadlibrary is busy. Plese visit http://jvavexec.top to contact the author\n");
		exit(0);
		break;
	}
	}
	Resetcolor();
}
bool Xsystem(string command)
{
	pid_t status;
    status = system(command.c_str());
	if(status==-1 or WIFEXITED(status) and WEXITSTATUS(status)!=0) {error(8);return false;}
	return true;
}
void require(string module)
{
	Setcolor(FG_BLUE);
	if (module == "fs")
	{
		fs = true;
		printf("module \"fs\" required success\n");
	}
	else if (module == "time")
	{
		_time = true;
		printf("module \"time\" required success\n");
	}

	else if (module == "net")
	{
		net = true;
		printf("module \"net\" required success\n");
	}
	else
	{
		error(5);
	}
	Resetcolor();
}
void welcome()
{
	Setcolor(FG_GREEN);
	cout << "Welcome to Node.Jv!\n Type \"help\" for some help\n";
	Resetcolor();
}
void Setcolor(int color)
{
	cout<<"\033["+to_string(color)+"m";
}
void Resetcolor()
{
	cout<<"\033[0m";
}
void Dispatch_message(string arg)
{
	if (arg == "")
		printf("underfined\n");
	else if (arg == "help")
	{
		
		Setcolor(FG_YELLOW);
		printf("     |\\     |            |               ---------      (C) 2020                                          \n");
		printf("     | \\    |            |                   |                                                            \n");
		printf("     |  \\   |            |  ___              |                                                            \n");
		printf("     |   \\  |   /-\\   /--| /   \\             |   \\    /                                                \n");
		printf("     |    \\ |  |   | |   | |---              /    \\  /                                                   \n");
		printf("     |     \\|   \\_/   \\_/| |___|         \\__/      \\/                                                 \n");
		printf("                                                                                                           \n");
		printf("     Version 2.4                                                                                           \n");
		printf("     Author:                                                                                               \n");
		printf("            ExecuteIf                                                                                      \n");
		printf("            Hwnd                                                                                           \n");
		printf("            Amiriox                                                                                        \n");
		printf("            Jvav-Top-Programmer                                                                            \n");
		printf("            Caviar-X                                                                                       \n");
		printf("            and so on...                                                                                   \n");
		printf("                                                                                                           \n");
		printf("     Github:https://github.com/JvsvScriptDEV/                                                              \n");
		printf("                                                                                                           \n");
		printf("                                                                                                           \n");
		printf("                                                                                                           \n");
		printf("                                                                                                           \n");
		printf("                                                                                                           \n");
		printf("----------NodeJv help page(1/1)----------\n");
		printf("console.log(strings): output an strings on th screen\n");
		printf("console.clear():clear the screen\n");
		printf("console.setop(op):set another op\n");
		printf("require(module):require a module such as \"fs\"\n");
		printf("exit(): exit The Node.Jv\n");
		printf("crash: crash Node.Jv\n");
		printf("All modules: net,time,fs\n");
		printf(" see module help,type <module name> help\n");
		printf("----------NodeJv help page(1/1)----------\n");

		Resetcolor();
	}
	//console类实现
	else if (!strncmp(arg.c_str(), "console.log(\"", strlen("console.log\"")))
	{
		if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else if (arg[arg.size() - 3] != '\"')
			error(2);
		else
		{
			for (size_t i = 13; i <= arg.size() - 4; i++)
			{
				putchar(arg[i]);
			}
			putchar('\n');
		}
	}
	else if (!strncmp(arg.c_str(), "console.clear(", strlen("console.clear")))
	{
		if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else
		{
			ClearScreen();
			welcome();
		}
	}
		else if (!strncmp(arg.c_str(), "console.setop('", strlen("console.setop('")))
	{
		if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else if (arg[arg.size() - 3] != '\'')
			error(2);
		else
		{
			op = arg[15];
			ClearScreen();
			welcome();
		}
	}
	//require实现
	else if (!strncmp(arg.c_str(), "require(\"", strlen("require(\"")))
	{
		string req_mod;
		if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else if (arg[arg.size() - 3] != '\"')
			error(2);
		else
		{
			for (size_t i = 9; i <= arg.size() - 4; i++)
			{
				req_mod += arg[i];
			}
			require(req_mod);
		}
	}
	//fs类实现
	else if (arg == "fs help")
	{
		Setcolor(FG_DEEPGREEN);
		printf("----------module fs help----------\n");
		printf("create(filename): create a file named filename\n");
		printf("write(strings):write strings with create file\n");
		printf("close(): close this filestream\n");
		Setcolor(FG_YELLOW);
		printf("Warning: Node.Jv does not support multi thread now.\n");
		Setcolor(FG_DEEPGREEN);
		printf("----------module fs help----------\n");
		Resetcolor();
	}
	else if (!strncmp(arg.c_str(), "fs.create(\"", strlen("fs.create(\"")))
	{

		if (!fs)
			error(3);
		else if (_Fs_is_create)
			error(6);
		if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else if (arg[arg.size() - 3] != '\"')
			error(2);
		else
		{
			for (size_t i = 11; i <= arg.size() - 4; i++)
			{
				fname += arg[i];
			}
			ofstream f(fname);
			f.close();
			printf("File stream create success\n");
			_Fs_is_create = true;
		}
	}
	else if (!strncmp(arg.c_str(), "fs.write(\"", strlen("fs.write(\"")))
	{
		if (!_Fs_is_create)
			error(7);
		else if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else if (arg[arg.size() - 3] != '\"')
			error(2);
		else if (!fs)
			error(3);
		else
		{

			ofstream l(fname, ios::app);
			string tmp_s;
			for (size_t i = 10; i <= arg.size() - 4; i++)
			{
				tmp_s += arg[i];
			}
			l << tmp_s;
			l.close();
			tmp_s = "";
		}
	}
		else if (!strncmp(arg.c_str(), "fs.writeline(\"", strlen("fs.writeline(\"")))
	{
		if (!_Fs_is_create)
			error(7);
		else if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else if (arg[arg.size() - 3] != '\"')
			error(2);
		else if (!fs)
			error(3);
		else
		{

			ofstream l(fname, ios::app);
			string tmp_s;
			for (size_t i = 14; i <= arg.size() - 4; i++)
			{
				tmp_s += arg[i];
			}
			tmp_s += '\n';
			l << tmp_s;
			l.close();
			tmp_s = "";
		}
	}
	else if (!strncmp(arg.c_str(), "fs.close(", strlen("fs.close(")))
	{
		if (!_Fs_is_create)
			error(7);
		else if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else if (!fs)
			error(3);
		else
		{
			fname = "";
			_Fs_is_create = false;
			printf("filestream close success\n");
			
		}
	}
	else if(!strncmp(arg.c_str(), "exit(", strlen("exit(")))
	{
		if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else
		{
			for (size_t i = 6; i <= arg.size() - 3; i++) //exit(1);
			{
				tmpint*=10;
				tmpint+=(arg[i]-48);
			}
			exit(tmpint);
		}
			
	}
	//time模块实现
	else if (arg == "time help")
	{
		Setcolor(FG_DEEPGREEN);
		printf("----------module time help----------\n");
		printf("Display_time():display the time now\n");
		printf("Display_UTC_time():display UTC time now\n");
		printf("----------module time help----------\n");
		Resetcolor();
		
	}
	else if (!strncmp(arg.c_str(), "time.Display_time(", strlen("time.Display_time(")))
	{
		if (!_time)
			error(3);
		else if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else
		{
			time_t T = time(0);
			string __t = ctime(&T);
			cout << __t << '\n';
			T = 0;
			__t = "";
		}
	}
	else if (!strncmp(arg.c_str(), "time.Display_UTC_time(", strlen("time.Display_UTC_time(")))
	{
		if (!_time)
			error(3);
		else if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else
		{
			time_t now = time(0);
			tm *tmp = gmtime(&now);
			string tmp_s = asctime(tmp);
			cout << "UTC: " << tmp_s << '\n';
		}
	}
	//net模块实现
	else if (arg == "net help")
	{
		Setcolor(FG_DEEPGREEN);
		printf("----------module net help----------\n");
		printf("Download_Url_To_File(strings): download file from url\n");
		printf("----------module net help----------\n");
		Resetcolor();
	}
	else if (!strncmp(arg.c_str(), "net.Download_Url_To_File(\"", strlen("net.Download_Url_To_File(\"")))
	{
		if (arg[arg.size() - 1] != ';')
			error(0);
		else if (arg[arg.size() - 2] != ')')
			error(1);
		else if (arg[arg.size() - 3] != '\"')
			error(2);
		else if (!net)
			error(3);
		else
		{
			string ___t;
			for (size_t i = 26; i <= arg.size() - 4; i++)
			{
				___t += arg[i];
				Xsystem("wget "+___t);
			}
			
		}
	}
	else if(arg=="crash"){error(0xff);}
	else if(arg=="exit"){exit(0);}
	// insert New Functions Here...
	else
	{
		error(9);
	}
}

