/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PMTableCellMapper : CMMapper {
    OADTableCell *mCell;
    int mColIndex;
    unsigned int mRowIndex;
    CMStyle *mStyle;
    float mWidth;
}

- (void)dealloc;
- (id)initWithOadTableCell:(id)arg1 rowIndex:(unsigned int)arg2 columnIndex:(int)arg3 parent:(id)arg4;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapBordersWithState:(id)arg1;
- (void)mapCellPropertiesWithState:(id)arg1 textAnchor:(unsigned char)arg2;
- (id)rowMapper;
- (id)tableMapper;
- (float)widthWithState:(id)arg1;

@end
