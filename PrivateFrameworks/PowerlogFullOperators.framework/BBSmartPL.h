/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

@interface BBSmartPL : NSObject {
    PLEntryNotificationOperatorComposition *_bbHwOtherCallback;
    PLTelephonyConnection *_connection;
    double _cxoDuration;
    NSDate *_lastLogDate;
    double _logDuration;
    PLSmartPLService *_operator;
}

@property (retain) PLEntryNotificationOperatorComposition *bbHwOtherCallback;
@property PLTelephonyConnection *connection;
@property double cxoDuration;
@property (retain) NSDate *lastLogDate;
@property double logDuration;
@property PLSmartPLService *operator;

- (void).cxx_destruct;
- (id)bbHwOtherCallback;
- (id)connection;
- (double)cxoDuration;
- (void)handleMavBBHwOtherCallback:(id)arg1;
- (id)lastLogDate;
- (double)logDuration;
- (id)operator;
- (void)setBbHwOtherCallback:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCxoDuration:(double)arg1;
- (void)setLastLogDate:(id)arg1;
- (void)setLogDuration:(double)arg1;
- (void)setOperator:(id)arg1;
- (void)startWithOperator:(id)arg1;
- (void)triggerBBCoreDump;

@end
