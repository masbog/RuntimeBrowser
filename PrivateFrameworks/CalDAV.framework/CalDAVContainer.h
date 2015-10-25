/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVContainer : CoreDAVContainer {
    NSString *_alarms;
    BOOL _autoprovisioned;
    NSString *_calendarColor;
    NSString *_calendarDescription;
    NSString *_calendarOrder;
    BOOL _canBePublished;
    BOOL _canBeShared;
    NSString *_ctag;
    NSString *_defaultAllDayAlarms;
    NSString *_defaultTimedAlarms;
    NSSet *_freeBusySet;
    BOOL _isMarkedImmutableSharees;
    BOOL _isMarkedUndeletable;
    BOOL _isScheduleTransparent;
    NSString *_languageCode;
    NSString *_locationCode;
    BOOL _overrideSupportsFreebusy;
    NSURL *_prePublishURL;
    NSURL *_publishURL;
    NSURL *_scheduleDefaultCalendarURL;
    NSSet *_sharees;
    NSURL *_source;
    ICSDuration *_subscribedRefreshRate;
    BOOL _subscribedStripAlarms;
    BOOL _subscribedStripAttachments;
    BOOL _subscribedStripTodos;
    NSSet *_supportedCalendarComponentSet;
    NSString *_supportedCalendarComponentSets;
    NSString *_symbolicColorName;
    NSTimeZone *_timeZone;
}

@property (nonatomic, retain) NSString *alarms;
@property (nonatomic) BOOL autoprovisioned;
@property (nonatomic, retain) NSString *calendarColor;
@property (nonatomic, retain) NSString *calendarDescription;
@property (nonatomic, retain) NSString *calendarOrder;
@property (nonatomic) BOOL canBePublished;
@property (nonatomic) BOOL canBeShared;
@property (nonatomic, retain) NSString *ctag;
@property (nonatomic, retain) NSString *defaultAllDayAlarms;
@property (nonatomic, retain) NSString *defaultTimedAlarms;
@property (nonatomic, retain) NSSet *freeBusySet;
@property (nonatomic, readonly) BOOL isCalendar;
@property (nonatomic, readonly) BOOL isEventContainer;
@property (nonatomic, readonly) BOOL isFamilyCalendar;
@property (nonatomic, readonly) BOOL isJournalContainer;
@property (nonatomic) BOOL isMarkedImmutableSharees;
@property (nonatomic) BOOL isMarkedUndeletable;
@property (nonatomic, readonly) BOOL isNotification;
@property (nonatomic, readonly) BOOL isPollContainer;
@property (nonatomic, readonly) BOOL isScheduleInbox;
@property (nonatomic, readonly) BOOL isScheduleOutbox;
@property (nonatomic) BOOL isScheduleTransparent;
@property (nonatomic, readonly) BOOL isShared;
@property (nonatomic, readonly) BOOL isSharedOwner;
@property (nonatomic, readonly) BOOL isSubscribed;
@property (nonatomic, readonly) BOOL isTaskContainer;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *locationCode;
@property (nonatomic) BOOL overrideSupportsFreebusy;
@property (nonatomic, retain) NSURL *prePublishURL;
@property (nonatomic, retain) NSURL *publishURL;
@property (nonatomic, retain) NSURL *scheduleDefaultCalendarURL;
@property (nonatomic, retain) NSSet *sharees;
@property (nonatomic, retain) NSURL *source;
@property (nonatomic, retain) ICSDuration *subscribedRefreshRate;
@property (nonatomic) BOOL subscribedStripAlarms;
@property (nonatomic) BOOL subscribedStripAttachments;
@property (nonatomic) BOOL subscribedStripTodos;
@property (nonatomic, retain) NSSet *supportedCalendarComponentSet;
@property (nonatomic, retain) NSString *supportedCalendarComponentSets;
@property (nonatomic, readonly) BOOL supportsFreebusy;
@property (nonatomic, retain) NSString *symbolicColorName;
@property (nonatomic, retain) NSTimeZone *timeZone;

+ (id)copyPropertyMappingsForParser;

- (void).cxx_destruct;
- (BOOL)_isComponentSupportedForString:(id)arg1;
- (void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2;
- (id)alarms;
- (void)applyParsedProperties:(id)arg1;
- (BOOL)autoprovisioned;
- (id)calendarColor;
- (id)calendarDescription;
- (id)calendarOrder;
- (BOOL)canBePublished;
- (BOOL)canBeShared;
- (id)ctag;
- (id)defaultAllDayAlarms;
- (id)defaultTimedAlarms;
- (id)description;
- (id)freeBusySet;
- (BOOL)isCalendar;
- (BOOL)isEventContainer;
- (BOOL)isFamilyCalendar;
- (BOOL)isJournalContainer;
- (BOOL)isMarkedImmutableSharees;
- (BOOL)isMarkedUndeletable;
- (BOOL)isNotification;
- (BOOL)isPollContainer;
- (BOOL)isScheduleInbox;
- (BOOL)isScheduleOutbox;
- (BOOL)isScheduleTransparent;
- (BOOL)isShared;
- (BOOL)isSharedOwner;
- (BOOL)isSubscribed;
- (BOOL)isTaskContainer;
- (id)languageCode;
- (id)locationCode;
- (BOOL)overrideSupportsFreebusy;
- (void)postProcessWithResponseHeaders:(id)arg1;
- (id)prePublishURL;
- (id)publishURL;
- (id)scheduleDefaultCalendarURL;
- (void)setAlarms:(id)arg1;
- (void)setAutoprovisioned:(BOOL)arg1;
- (void)setCalendarColor:(id)arg1;
- (void)setCalendarDescription:(id)arg1;
- (void)setCalendarOrder:(id)arg1;
- (void)setCanBePublished:(BOOL)arg1;
- (void)setCanBeShared:(BOOL)arg1;
- (void)setCtag:(id)arg1;
- (void)setDefaultAllDayAlarms:(id)arg1;
- (void)setDefaultTimedAlarms:(id)arg1;
- (void)setFreeBusySet:(id)arg1;
- (void)setIsMarkedImmutableSharees:(BOOL)arg1;
- (void)setIsMarkedUndeletable:(BOOL)arg1;
- (void)setIsScheduleTransparent:(BOOL)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLocationCode:(id)arg1;
- (void)setOverrideSupportsFreebusy:(BOOL)arg1;
- (void)setPrePublishURL:(id)arg1;
- (void)setPublishURL:(id)arg1;
- (void)setScheduleDefaultCalendarURL:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSubscribedRefreshRate:(id)arg1;
- (void)setSubscribedStripAlarms:(BOOL)arg1;
- (void)setSubscribedStripAttachments:(BOOL)arg1;
- (void)setSubscribedStripTodos:(BOOL)arg1;
- (void)setSupportedCalendarComponentSet:(id)arg1;
- (void)setSupportedCalendarComponentSets:(id)arg1;
- (void)setSymbolicColorName:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)sharees;
- (id)source;
- (id)subscribedRefreshRate;
- (BOOL)subscribedStripAlarms;
- (BOOL)subscribedStripAttachments;
- (BOOL)subscribedStripTodos;
- (id)supportedCalendarComponentSet;
- (id)supportedCalendarComponentSets;
- (BOOL)supportsFreebusy;
- (id)symbolicColorName;
- (id)timeZone;

@end