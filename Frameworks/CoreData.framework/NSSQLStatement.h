/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLStatement : NSObject {
    NSMutableArray *_bindIntarrays;
    NSMutableArray *_bindVariables;
    NSCachedFetchRequestInfo *_cachedStatementInfo;
    NSSQLEntity *_entity;
    NSSQLEntity *_fakeEntityForFetch;
    BOOL _isImpossibleCondition;
    NSString *_sqlString;
    BOOL _trackChangedRowCount;
}

@property (nonatomic, retain) NSCachedFetchRequestInfo *cachedStatementInfo;
@property (nonatomic) BOOL trackChangedRowCount;

- (unsigned int)addBindIntarray:(id)arg1;
- (unsigned int)addBindVariable:(id)arg1;
- (id)bindIntarrays;
- (id)bindVariables;
- (void)cacheFakeEntityForFetch:(id)arg1;
- (id)cachedStatementInfo;
- (void)clearCaches;
- (void)dealloc;
- (id)description;
- (id)entity;
- (id)fakeEntityForFetch;
- (id)initWithEntity:(id)arg1;
- (id)initWithEntity:(id)arg1 sqlString:(id)arg2;
- (BOOL)isImpossibleCondition;
- (BOOL)isReadOnly;
- (void)removeAllBindIntarrays;
- (void)removeAllBindVariables;
- (void)setBindIntarrays:(id)arg1;
- (void)setBindVariables:(id)arg1;
- (void)setCachedStatementInfo:(id)arg1;
- (void)setImpossibleCondition:(BOOL)arg1;
- (void)setSQLString:(id)arg1;
- (void)setTrackChangedRowCount:(BOOL)arg1;
- (id)sqlString;
- (BOOL)trackChangedRowCount;

@end