/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPConnectionsPredictionStore : NSObject {
    PPConnectionsCalendarSource * _calendarSource;
    PPConnectionsDuetSource * _duetSource;
    PPConnectionsFoundInAppsSource * _fiaSource;
    NSString * _identifier;
    PPConnectionsMetricsTracker * _metricsTracker;
    PPConnectionsNamedEntitySource * _namedEntitySource;
    PPConnectionsParameters * _parameters;
    PPConnectionsPasteboardSource * _pasteboardSource;
}

+ (id)defaultStore;

- (void).cxx_destruct;
- (id)calendarSource;
- (id)cutoffActivityTime;
- (id)cutoffCalendarEventTime;
- (id)cutoffLinguisticTriggerTime;
- (id)cutoffLocationAppLastUseTime;
- (id)cutoffNamedEntityTime;
- (id)cutoffPasteboardItemTime;
- (id)duetSource;
- (id)init;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2 pasteboardSource:(id)arg3 calendarSource:(id)arg4 duetSource:(id)arg5 namedEntitySource:(id)arg6 fiaSource:(id)arg7 metricsTracker:(id)arg8;
- (id)parameters;
- (id)pasteboardSource;
- (id)recentLocationsForConsumer:(unsigned long long)arg1 criteria:(id)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4 timeout:(unsigned long long)arg5 error:(id*)arg6;

@end