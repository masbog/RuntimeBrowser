/* Generated by RuntimeBrowser.
 */

@protocol CADCalendarInterface

@required

- (void)CADCalendar:(void *)arg1 hasEvents:(void *)arg2; // needs 2 arg types, found 8: struct { int x1; int x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, BOOL, void*
- (void)CADCalendar:(void *)arg1 hasReminders:(void *)arg2; // needs 2 arg types, found 8: struct { int x1; int x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, BOOL, void*
- (void)CADDatabaseDeleteCalendar:(void *)arg1 forEntityType:(void *)arg2 error:(void *)arg3; // needs 3 arg types, found 8: struct { int x1; int x2; }, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSArray *, NSArray *, void*

@end
