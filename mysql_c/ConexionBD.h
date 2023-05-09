#include <mysql.h>
#include <iostream>
using namespace std;
class ConexionBD{
private : MYSQL* connect;
public :
	void abrir_conexion() {
		connect = mysql_init(0);
		connect = mysql_real_connect(connect, "localhost", "usr_empresa", "Empres@123", "db_empresa", 3306, NULL, 0);
	}
	MYSQL* getConnect() {
		return connect;
	}
	void cerrar_conexion() {
		mysql_close(connect);
	}

};