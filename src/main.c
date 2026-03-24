#include "cli.h"
#include <stdio.h>

#ifndef DB_PATH
#define DB_PATH "data/stardict.db"
#endif

int main() {
    sqlite3 *db;

    if (sqlite3_open(DB_PATH, &db) != SQLITE_OK) {
        printf("❌ 数据库打开失败: %s\n", sqlite3_errmsg(db));
        printf("尝试路径: %s\n", DB_PATH);
        return 1;
    }

    run_cli(db);
    sqlite3_close(db);
    return 0;
}
