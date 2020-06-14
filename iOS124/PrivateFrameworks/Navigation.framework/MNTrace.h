//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MNTrace : NSObject
{
    struct sqlite3 *_db;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSArray *_bookmarks;
    NSArray *_bookmarkImages;
    unsigned long long _version;
    unsigned long long _originalVersion;
    _Bool _isSimulation;
    _Bool _isRouteGenius;
    _Bool _usesCLMapCorrection;
    double _initialCourse;
    NSArray *_locations;
    NSArray *_directions;
    NSArray *_etaUpdates;
    NSArray *_headingData;
    NSArray *_motionData;
    NSArray *_vehicleHeadingData;
    NSArray *_vehicleSpeedData;
    NSData *_startWaypointData;
    NSData *_endWaypointData;
    NSArray *_routeSelections;
    NSArray *_annotatedUserBehavior;
    NSArray *_annotatedUserEnvironments;
    NSArray *_commuteDestinations;
    NSArray *_commuteDirectionsRequests;
    _Bool _copyToCrashReporter;
    NSString *_tracePath;
    NSArray *_significantEvents;
}

+ (id)routeSetsFromTraceAtPath:(id)arg1;
@property(retain, nonatomic) NSArray *bookmarkImages; // @synthesize bookmarkImages=_bookmarkImages;
@property(retain, nonatomic) NSArray *commuteDirectionsRequests; // @synthesize commuteDirectionsRequests=_commuteDirectionsRequests;
@property(retain, nonatomic) NSArray *commuteDestinations; // @synthesize commuteDestinations=_commuteDestinations;
@property(retain, nonatomic) NSArray *significantEvents; // @synthesize significantEvents=_significantEvents;
@property(retain, nonatomic) NSArray *annotatedUserEnvironments; // @synthesize annotatedUserEnvironments=_annotatedUserEnvironments;
@property(retain, nonatomic) NSArray *annotatedUserBehavior; // @synthesize annotatedUserBehavior=_annotatedUserBehavior;
@property(retain, nonatomic) NSArray *routeSelections; // @synthesize routeSelections=_routeSelections;
@property(retain, nonatomic) NSData *endWaypointData; // @synthesize endWaypointData=_endWaypointData;
@property(retain, nonatomic) NSData *startWaypointData; // @synthesize startWaypointData=_startWaypointData;
@property(retain, nonatomic) NSArray *vehicleSpeedData; // @synthesize vehicleSpeedData=_vehicleSpeedData;
@property(retain, nonatomic) NSArray *vehicleHeadingData; // @synthesize vehicleHeadingData=_vehicleHeadingData;
@property(retain, nonatomic) NSArray *motionData; // @synthesize motionData=_motionData;
@property(retain, nonatomic) NSArray *headingData; // @synthesize headingData=_headingData;
@property(retain, nonatomic) NSArray *etaUpdates; // @synthesize etaUpdates=_etaUpdates;
@property(retain, nonatomic) NSArray *directions; // @synthesize directions=_directions;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(nonatomic) double initialCourse; // @synthesize initialCourse=_initialCourse;
@property(nonatomic) _Bool usesCLMapCorrection; // @synthesize usesCLMapCorrection=_usesCLMapCorrection;
@property(nonatomic) _Bool isRouteGenius; // @synthesize isRouteGenius=_isRouteGenius;
@property(nonatomic) _Bool isSimulation; // @synthesize isSimulation=_isSimulation;
@property(nonatomic) unsigned long long originalVersion; // @synthesize originalVersion=_originalVersion;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(nonatomic) _Bool copyToCrashReporter; // @synthesize copyToCrashReporter=_copyToCrashReporter;
@property(readonly, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;
@property(retain, nonatomic) NSArray *bookmarks; // @synthesize bookmarks=_bookmarks;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *writeGroup; // @synthesize writeGroup=_writeGroup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // @synthesize writeQueue=_writeQueue;
@property(readonly, nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (void).cxx_destruct;
- (void)copyTraceToCrashReporter;
- (id)_handleOpenErrorWithPath:(id)arg1;
- (_Bool)closeTrace;
- (_Bool)startWritingTraceToFile:(id)arg1;
- (_Bool)createTempTraceForRecording;
- (_Bool)openTrace:(id)arg1 outError:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)_routeSetFromDirectionsRow:(id)arg1;
- (id)routeSetsFromResponse;
- (id)serializableBookmarks;

@end

