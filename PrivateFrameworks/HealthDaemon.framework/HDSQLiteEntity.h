/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteEntity : NSObject <HDSQLiteEntity> {
    long long _persistentID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) long long persistentID;
@property (readonly) Class superclass;

+ (id)_copyDeleteSQLWithTableName:(id)arg1 columnName:(id)arg2;
+ (id)_generateDisambiguatedDatabaseTableName;
+ (BOOL)_insertValues:(id)arg1 intoTable:(id)arg2 withPidOrNil:(id)arg3 replaceExisting:(BOOL)arg4 resultCode:(int*)arg5 database:(id)arg6;
+ (BOOL)_insertValues:(id)arg1 intoTable:(id)arg2 withPidOrNil:(id)arg3 resultCode:(int*)arg4 database:(id)arg5;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (id)aggregateSingleValueForProperty:(id)arg1 function:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 database:(id)arg5 error:(id*)arg6;
+ (id)aggregateValuesForProperty:(id)arg1 functions:(id)arg2 queryDescriptor:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)allDatabaseColumnNames;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
+ (void)applyOrderedSetters:(id)arg1 toObject:(id)arg2 row:(struct HDSQLiteRow { struct sqlite3_stmt {} *x1; int x2; int x3; struct unordered_map<const char *, int, HDSQLiteRow::_Hash, HDSQLiteRow::_Comparison, std::__1::allocator<std::__1::pair<const char *const, int> > > { struct __hash_table<std::__1::__hash_value_type<const char *, int>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Hash, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Comparison, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, int> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<const char *, int>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> { struct __hash_node<std::__1::__hash_value_type<const char *, int>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Hash, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Comparison, true> > { float x_4_3_1; } x_1_2_4; } x_4_1_1; } x4; }*)arg3;
+ (void)applyPropertySetters:(id)arg1 toObject:(id)arg2 withProperties:(id)arg3 row:(struct HDSQLiteRow { struct sqlite3_stmt {} *x1; int x2; int x3; struct unordered_map<const char *, int, HDSQLiteRow::_Hash, HDSQLiteRow::_Comparison, std::__1::allocator<std::__1::pair<const char *const, int> > > { struct __hash_table<std::__1::__hash_value_type<const char *, int>, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Hash, true>, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Comparison, true>, std::__1::allocator<std::__1::__hash_value_type<const char *, int> > > { struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> > > { struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> > > { struct __hash_node<std::__1::__hash_value_type<const char *, int>, void *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> > { unsigned long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const char *, int>, void *> *> { struct __hash_node<std::__1::__hash_value_type<const char *, int>, void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Hash, true> > { unsigned long x_3_3_1; } x_1_2_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<const char *, std::__1::__hash_value_type<const char *, int>, HDSQLiteRow::_Comparison, true> > { float x_4_3_1; } x_1_2_4; } x_4_1_1; } x4; }*)arg4;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)columnsDefinition;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)countDistinctForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)countValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)databaseName;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (id)databaseTable;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (BOOL)deleteEntitiesInDatabase:(id)arg1 predicate:(id)arg2;
+ (id)deleteStatementWithProperty:(id)arg1 database:(id)arg2;
+ (id)disambiguatedDatabaseTable;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)distinctProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3 error:(id*)arg4;
+ (id)entityWithPersistentID:(id)arg1;
+ (BOOL)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
+ (void)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 usingBlock:(id /* block */)arg3;
+ (BOOL)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 database:(id)arg4 error:(id*)arg5 usingBlock:(id /* block */)arg6;
+ (BOOL)enumerateQueryResultsFromColumns:(id)arg1 properties:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 orderingProperties:(id)arg5 limit:(int)arg6 database:(id)arg7 error:(id*)arg8 usingBlock:(id /* block */)arg9;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)maxPersistentIDWithPredicate:(id)arg1 database:(id)arg2;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5;
+ (id)propertyValuesForAnyInDatabase:(id)arg1 properties:(id)arg2 predicate:(id)arg3;
+ (id)queryStatementWithPredicate:(id)arg1 properties:(id)arg2 database:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 orderingProperties:(id)arg4 orderingDirections:(id)arg5 groupBy:(id)arg6;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;
+ (id)sumValueForProperty:(id)arg1 predicate:(id)arg2 database:(id)arg3;
+ (id)tableAliases;

- (id)UUIDForProperty:(id)arg1 database:(id)arg2;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (BOOL)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 database:(id)arg3;
- (BOOL)booleanForProperty:(id)arg1 database:(id)arg2;
- (id)dateForProperty:(id)arg1 database:(id)arg2;
- (BOOL)deleteFromDatabase:(id)arg1;
- (BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2;
- (id)description;
- (BOOL)existsInDatabase:(id)arg1;
- (BOOL)getValuesForProperties:(id)arg1 database:(id)arg2 handler:(id /* block */)arg3;
- (BOOL)getValuesForProperties:(id)arg1 withDatabase:(id)arg2 applier:(id /* block */)arg3;
- (id)initWithPersistentID:(long long)arg1;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2 replaceExisting:(BOOL)arg3 error:(id*)arg4;
- (long long)persistentID;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (BOOL)setValue:(id)arg1 forProperty:(id)arg2 database:(id)arg3;
- (BOOL)setValuesWithDictionary:(id)arg1 database:(id)arg2;
- (id)stringForProperty:(id)arg1 database:(id)arg2;
- (id)valueForExternalProperty:(id)arg1;
- (id)valueForProperty:(id)arg1 database:(id)arg2;

@end
