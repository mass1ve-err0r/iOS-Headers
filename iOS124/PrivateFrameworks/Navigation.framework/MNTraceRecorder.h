//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationRecorder-Protocol.h>

@class GEOComposedRouteLeg, MNTrace, NSDate, NSMapTable, NSString;
@protocol MNTraceRecorderBackgroundGuard;

@interface MNTraceRecorder : NSObject <MNLocationRecorder>
{
    MNTrace *_trace;
    NSString *_tracePath;
    NSDate *_recordingStartTime;
    _Bool _corrupted;
    _Bool _closed;
    _Bool _created;
    struct sqlite3_stmt *_updateStart;
    struct sqlite3_stmt *_updateEnd;
    struct sqlite3_stmt *_updateDirectionsFeedback;
    struct sqlite3_stmt *_updateActiveTransportType;
    struct sqlite3_stmt *_environmentInfoInsert;
    struct sqlite3_stmt *_debugSettingInsert;
    struct sqlite3_stmt *_audioSettingInsert;
    struct sqlite3_stmt *_stylesheetInsert;
    struct sqlite3_stmt *_locationInsert;
    struct sqlite3_stmt *_locationErrorInsert;
    struct sqlite3_stmt *_matchInfoInsert;
    struct sqlite3_stmt *_routeRequestInsert;
    struct sqlite3_stmt *_routeResponseUpdate;
    struct sqlite3_stmt *_routeResponseErrorInsert;
    struct sqlite3_stmt *_routeSelectionInsert;
    struct sqlite3_stmt *_routeSelectionUpdate;
    struct sqlite3_stmt *_likelyRouteInsert;
    struct sqlite3_stmt *_etaTrafficUpdateRequestInsert;
    struct sqlite3_stmt *_etaTrafficUpdateResponseInsert;
    struct sqlite3_stmt *_etaTrafficUpdateResponseErrorInsert;
    struct sqlite3_stmt *_vehicleSpeedInsert;
    struct sqlite3_stmt *_vehicleHeadingInsert;
    struct sqlite3_stmt *_motionDataInsert;
    struct sqlite3_stmt *_compassHeadingInsert;
    struct sqlite3_stmt *_routeLegGuidanceInsert;
    struct sqlite3_stmt *_routeLegEndGuidanceUpdate;
    struct sqlite3_stmt *_traceEventInsert;
    struct sqlite3_stmt *_significantEventInsert;
    struct sqlite3_stmt *_scheduleProjectionInsert;
    struct sqlite3_stmt *_scheduleProjectionUpdate;
    struct sqlite3_stmt *_commuteDestinationsInsert;
    struct sqlite3_stmt *_commuteDirectionsRequestInsert;
    struct sqlite3_stmt *_commuteDirectionsResponseUpdate;
    NSMapTable *_routeRequests;
    unsigned long long _routeRequestCount;
    unsigned long long _routeSelectionCount;
    unsigned long long _etaTrafficUpdateCount;
    NSMapTable *_commuteDirectionsRequests;
    GEOComposedRouteLeg *_currentLeg;
    CDUnknownBlockType _timeSinceRecordingBeganHandler;
    CDUnknownBlockType _errorHandler;
    _Bool _lastPauseSpokenAudio;
    long long _lastVolumeSetting;
    id <MNTraceRecorderBackgroundGuard> _backgroundGuardDelegate;
}

@property(nonatomic) __weak id <MNTraceRecorderBackgroundGuard> backgroundGuardDelegate; // @synthesize backgroundGuardDelegate=_backgroundGuardDelegate;
@property(copy, nonatomic) CDUnknownBlockType timeSinceRecordingBeganHandler; // @synthesize timeSinceRecordingBeganHandler=_timeSinceRecordingBeganHandler;
@property(readonly, nonatomic) NSDate *recordingStartTime; // @synthesize recordingStartTime=_recordingStartTime;
@property(readonly, nonatomic) MNTrace *trace; // @synthesize trace=_trace;
- (void).cxx_destruct;
- (void)recordDirectionsFeedback:(id)arg1;
- (void)recordCommuteDirectionsResponse:(id)arg1 error:(id)arg2 forRequest:(id)arg3;
- (void)recordCommuteDirectionsRequest:(id)arg1 forDestinationID:(unsigned long long)arg2;
- (void)recordCommuteDestinationWithID:(unsigned long long)arg1 name:(id)arg2 waypoint:(id)arg3;
- (void)recordSignificantEvent:(long long)arg1 withData:(id)arg2;
- (void)updateActualArrivalTime:(double)arg1 arrivalTimeDelta:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)recordProjectedArrivalTime:(double)arg1 actualArrivalTime:(double)arg2 arrivalTimeDelta:(double)arg3 matchType:(long long)arg4 vehicleType:(long long)arg5 lastKnownLocation:(id)arg6 forStepIndex:(unsigned long long)arg7 withDuration:(double)arg8 andManeuverType:(int)arg9;
- (void)_logError:(id)arg1 resultCode:(int)arg2;
- (void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4;
- (void)recordMotionUpdate:(unsigned long long)arg1 exitType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;
- (void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;
- (void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;
- (void)recordETATrafficUpdateError:(id)arg1;
- (void)recordETATrafficUpdateResponse:(id)arg1;
- (void)recordETATrafficUpdateRequest:(id)arg1;
- (void)recordETATrafficUpdateRequest:(id)arg1 forDestination:(id)arg2;
- (void)recordLikelyRouteRequest:(id)arg1 response:(id)arg2 waypoints:(id)arg3;
- (void)recordInitialCourse:(double)arg1;
- (void)recordRouteDeselected;
- (void)recordRouteSelected:(id)arg1 routeIndex:(unsigned long long)arg2;
- (void)recordRouteError:(id)arg1;
- (void)recordRouteError:(id)arg1 forRouteRequest:(id)arg2;
- (void)recordRouteResponse:(id)arg1 forRouteRequest:(id)arg2;
- (void)recordRouteRequest:(id)arg1 waypoints:(id)arg2;
- (void)endTransaction;
- (void)beginTransaction;
- (void)resetRouteSelections;
- (void)recordTraceEventAtTime:(double)arg1 eventType:(long long)arg2 stage:(long long)arg3 description:(id)arg4;
- (void)recordTraceEventForEventType:(long long)arg1 stage:(long long)arg2 description:(id)arg3;
- (void)recordTraceEvent:(id)arg1;
- (void)recordGuidanceWasEnded;
- (void)recordGuidanceWasEndedAtTime:(double)arg1;
- (void)recordGuidanceWasStartedForRouteLeg:(id)arg1;
- (void)recordGuidanceWasStartedForRouteLeg:(id)arg1 timestamp:(double)arg2;
- (void)recordActiveTransportType:(int)arg1 timestamp:(double)arg2;
- (void)resetLocationsForSimulation;
- (void)setRouteGenius:(_Bool)arg1;
- (void)recordError:(id)arg1;
- (void)recordLocationUpdateResume;
- (void)recordLocationUpdatePause;
- (void)recordLocation:(id)arg1 correctedLocation:(id)arg2;
- (void)recordSimulatedCoordinate:(struct CLLocationCoordinate2D)arg1 course:(double)arg2 altitude:(double)arg3 speed:(double)arg4 timestamp:(double)arg5 activeTransportType:(int)arg6;
- (void)_recordLocationEvent:(long long)arg1 location:(id)arg2 correctedLocation:(id)arg3;
- (void)_recordLocationEvent:(long long)arg1 coordinate:(struct CLLocationCoordinate2D)arg2 rawCoordinate:(struct CLLocationCoordinate2D)arg3 timestamp:(double)arg4 horizontalAccuracy:(double)arg5 verticalAccuracy:(double)arg6 altitude:(double)arg7 speed:(double)arg8 speedAccuracy:(double)arg9 course:(double)arg10 rawCourse:(double)arg11 type:(int)arg12 courseAccuracy:(double)arg13 correctedCoordinate:(struct CLLocationCoordinate2D)arg14 correctedCourse:(double)arg15 matchType:(int)arg16 activeTransportType:(int)arg17 matchInfo:(id)arg18 correctedLocation:(id)arg19;
- (void)_recordLocationMatchInfoOnWriteQueue:(id)arg1 forLocationID:(int)arg2;
- (void)recordStylesheet:(id)arg1 data:(id)arg2;
- (void)recordAudioSetting:(_Bool)arg1 volume:(long long)arg2;
- (void)recordDebugSetting:(id)arg1 settingValue:(id)arg2;
- (void)recordEnvironmentInfo:(id)arg1 value:(id)arg2;
- (double)timeSinceRecordingBegan;
- (void)saveTraceWithHandler:(CDUnknownBlockType)arg1;
- (void)saveTraceSynchronously;
- (void)cancelTrace;
- (void)saveTrace;
- (void)startWritingTraceToFileAtPath:(id)arg1 shouldPrepareStatements:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startWritingTraceToFileAtPath:(id)arg1;
- (void)startWritingTraceToFile;
- (void)startWritingTraceToFileWithCompletion:(CDUnknownBlockType)arg1;
- (void)startWritingTraceToFileIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_closeTraceDB;
- (void)setDestinationSearchResultData:(id)arg1;
- (void)setOriginSearchResultData:(id)arg1;
- (void)_prepareStatements;
- (void)_initializeTraceDB;
- (void)_createTrace;
- (void)_openExistingTrace;
- (void)_serializationError:(id)arg1;
- (void)_logSqliteErrorWithResult:(int)arg1 file:(const char *)arg2 line:(int)arg3;
- (void)_dispatchWrite:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool copyToCrashReporterDirectory;
- (void)dealloc;
- (id)initWithPath:(id)arg1 clMapMatching:(_Bool)arg2 errorHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

