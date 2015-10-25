/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSQLiteStatement : NSObject {
    NSArray *_columnNames;
    NSDictionary *_columnNamesToIndexes;
    WBSSQLiteDatabase *_database;
    struct sqlite3_stmt { } *_handle;
}

@property (nonatomic, readonly) NSArray *columnNames;
@property (nonatomic, readonly) NSDictionary *columnNamesToIndexes;
@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (nonatomic, readonly) struct sqlite3_stmt { }*handle;

- (void).cxx_destruct;
- (BOOL)_isValid;
- (void)bindData:(id)arg1 atParameterIndex:(unsigned int)arg2;
- (void)bindDouble:(double)arg1 atParameterIndex:(unsigned int)arg2;
- (void)bindInt64:(long long)arg1 atParameterIndex:(unsigned int)arg2;
- (void)bindInt:(int)arg1 atParameterIndex:(unsigned int)arg2;
- (void)bindNullAtParameterIndex:(unsigned int)arg1;
- (void)bindString:(id)arg1 atParameterIndex:(unsigned int)arg2;
- (id)columnNames;
- (id)columnNamesToIndexes;
- (id)database;
- (void)dealloc;
- (int)execute;
- (id)fetch;
- (struct sqlite3_stmt { }*)handle;
- (id)initWithDatabase:(id)arg1 query:(id)arg2;
- (void)invalidate;
- (void)reset;

@end
