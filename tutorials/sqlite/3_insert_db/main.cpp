/*
MIT License
Copyright (c) 2017 Paul Salvador Inventado
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <stdio.h>
#include <sqlite3.h> 

int main(int argc, char* argv[]) {
   sqlite3 *db;

   sqlite3_open("test.db", &db);
   char* sql = "CREATE TABLE POSTS ("
		"ID INT PRIMARY KEY NOT NULL,"
		"POST TEXT);";
   sqlite3_exec(db, sql, NULL, 0, NULL);
   
   sql = "INSERT INTO POSTS (ID, POST)"
	 "VALUES(1, \"Hello world \");";

   sqlite3_exec(db, sql, NULL, 0, NULL);

   sqlite3_close(db);
}
