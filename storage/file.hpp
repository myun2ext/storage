#ifndef __MYUN2_GITHUB_COM__STORAGE__FILE_HPP__
#define __MYUN2_GITHUB_COM__STORAGE__FILE_HPP__

#include "storage/file_open.hpp"

namespace myun2
{
	class storage_file
	{
	private:
		FILE* fp;
	public:
		storage_file(const char* file) { open(file); }
		void open(const char* file) { fp = fopen_exist(file); }
	};
}

#endif///__MYUN2_GITHUB_COM__STORAGE__FILE_HPP__
