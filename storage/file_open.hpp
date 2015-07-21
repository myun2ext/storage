#ifndef __MYUN2_GITHUB_COM__STORAGE__FILE_OPEN_HPP__
#define __MYUN2_GITHUB_COM__STORAGE__FILE_OPEN_HPP__

#include <stdio.h>

#ifdef WIN32
	#include <io.h>
	#pragma warning (disable:4996)
	#define access _access
#else
	#include <unistd.h>
	#include <sys/types.h>
	#include <sys/stat.h>
#endif

namespace myun2
{
	FILE* fopen_exist(const char* filename)
	{
		if ( access(filename, 0) )
			return fopen(filename, "w+b");
		else {
			FILE *fp = fopen(filename, "r+b");
			fseek(fp, 0, SEEK_END);
			return fp;
		}
	}
}

#endif///__MYUN2_GITHUB_COM__STORAGE__FILE_OPEN_HPP__
