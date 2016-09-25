/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
    BOOL  _isClosed;
}

@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (nonatomic, readonly) NSURL *databaseURL;

+ (Class)cacheSettingsEntryClass;
+ (int)databaseSchemaVersion;

- (void).cxx_destruct;
- (BOOL)_checkDatabaseIntegrity;
- (void)_closeDatabase;
- (id)_createNewDatabaseSQLiteStatement;
- (BOOL)_createNewDatabaseSchema;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;
- (int)_insertEntry:(id)arg1;
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;
- (BOOL)_migrateToCurrentSchemaVersionifNeeded;
- (BOOL)_openDatabase:(id)arg1 andCheckIntegrity:(BOOL)arg2;
- (BOOL)_performMigrationStepToSchemaVersion:(int)arg1 withStatements:(id)arg2;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;
- (int)_setDatabaseSchemaVersion:(int)arg1;
- (id)_statementsForMigrationToSchemaVersion:(int)arg1;
- (int)_updateEntry:(id)arg1;
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;
- (id)allEntries;
- (void)close;
- (id)database;
- (id)databaseURL;
- (void)dealloc;
- (BOOL)deleteAllEntries;
- (BOOL)deleteEntryWithHost:(id)arg1;
- (id)entryWithHost:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (BOOL)saveEntry:(id)arg1;

@end