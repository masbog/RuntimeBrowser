/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SortMapFaultingEntryArray : NSMutableArray {
    ML3DatabaseConnection *_connection;
    NSMutableDictionary *_dirtyInserts;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned int)count;
- (void)enumerateDirtyObjectsUsingBlock:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;

@end
